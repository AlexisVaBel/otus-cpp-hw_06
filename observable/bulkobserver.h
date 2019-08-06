#ifndef BULKOBSERVER_H
#define BULKOBSERVER_H
#include <set>
#include <vector>
#include <memory>

// observer implementation got here, total reduced due to using shared ptrs
//SOURCE http://itnotesblog.ru/note.php?id=144
template <typename Observer>
class BulkObserver{
public:
    ~BulkObserver(){}

    void registerObserver(std::shared_ptr<Observer> arg){
        m_obervers.insert(arg);
    }

    void unRegisterObserver(std::shared_ptr<Observer> arg){
        m_obervers.erase(arg);
    }

protected:
    BulkObserver(){
    }

    template <typename F, typename ... Args>
    void notifyObservers(F f, Args ... args){        
        for (auto obs: m_obervers) {
            Observer *ptr = obs.get();
            (ptr->*f)(args ...);
        }
    }

private:
    std::set<std::shared_ptr<Observer>> m_obervers;

};
#endif // BULKOBSERVER_H
