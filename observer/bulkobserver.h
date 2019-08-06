#ifndef BULKOBSERVER_H
#define BULKOBSERVER_H
#include <set>
#include <vector>
#include <memory>

// observer implementation got here
//SOURCE http://itnotesblog.ru/note.php?id=144
template <typename Observer>
class BulkObserver{
public:
    ~BulkObserver(){}

    void registerObserver(Observer* arg){
        if(m_iCount == 0){
            m_obervers.insert(arg);
        }else{
            m_requests.push_back( ObserverRequest {&BulkObserver<Observer>::registerObserver,arg});
        }
    }

    void unRegisterObserver(Observer* arg){
        if(m_iCount == 0){
            m_obervers.erase(arg);
        }else{
            m_requests.push_back( ObserverRequest {&BulkObserver<Observer>::unRegisterObserver,arg});
        }
    }

protected:
    BulkObserver():m_iCount(0){
    }

    template <typename F, typename ... Args>
    void notifyObservers(F f, Args ... args){
        ++ m_iCount;
        for (Observer *obs: m_obervers) {
            (obs->*f)(args ...);
        }
        -- m_iCount;
        if( m_iCount == 0 ) {
            for( const ObserverRequest& r : m_requests ) {
                ( this->*r.operation )( r.m_observer );
            };
            m_requests.clear();
        }
    }

private:

    struct ObserverRequest{
        void (BulkObserver<Observer>::*operation )(Observer*);
        Observer *m_observer;
    };


    int m_iCount;   // protector

    std::set< Observer*> m_obervers;
    std::vector< ObserverRequest > m_requests;
};
#endif // BULKOBSERVER_H
