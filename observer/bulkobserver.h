#ifndef BULKOBSERVER_H
#define BULKOBSERVER_H
#include <set>
#include <vector>
#include <memory>


//SOURCE http://itnotesblog.ru/note.php?id=144
template <typename T>
class BulkObserver{
public:
    virtual ~BulkObserver();

    void registerObserver(std::unique_ptr<BulkObserver> arg){
        if(m_iCount == 0){
            m_obervers.insert(arg);
        }else{
            m_requests.push_back( ObserverRequest {&BulkObserver<T>::registerObserver,arg});
        }
    }

    void unRegisterObserver(std::unique_ptr<BulkObserver> arg){
        if(m_iCount == 0){
            m_obervers.erase(arg);
        }else{
            m_requests.push_back( ObserverRequest {&BulkObserver<T>::unRegisterObserver,arg});
        }
    }

protected:
    BulkObserver():m_iCount(0){
    }

    void notifyObservers(){
        ++ m_iCount;
        for (auto obs: m_obervers) {

        }
        -- m_iCount;
        if( m_iCount == 0 ) {
            for( const ObserverRequest& r : m_requests ) {
                ( this->*r.operation )( r.BulkObserver );
            };
            m_requests.clear();
        }
    }

private:

    struct ObserverRequest{
        void (BulkObserver<T>::*operation )(std::unique_ptr<BulkObserver>);
        std::unique_ptr<BulkObserver> m_observer;
    };


    int m_iCount;   // protector

    std::set< std::unique_ptr<BulkObserver> > m_obervers;
    std::vector< ObserverRequest > m_requests;
};
#endif // BULKOBSERVER_H
