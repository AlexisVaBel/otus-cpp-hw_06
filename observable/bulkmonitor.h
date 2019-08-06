#ifndef BULKMONITOR_H
#define BULKMONITOR_H

#include <iostream>
#include "bulkobserver.h"
#include "../observer/icmdobserver.h"
#include "cmdacceptor.h"


class BulkMonitor: public BulkObserver<ICmdObserver> {
public:
    BulkMonitor(int iArg):m_cmdAcceptor(CmdAcceptor(iArg)){
    }

    ~BulkMonitor(){
    }

    void procsCmd(){
        for(std::string line; std::getline(std::cin, line);){
            if(m_cmdAcceptor.procsCmd(line)) {
                notifyObservers(&ICmdObserver::onCmdReceived,m_cmdAcceptor.getCmds());
                m_cmdAcceptor.clearProcessd();
            }
        }
        // on out - need to remove all;
        notifyObservers(&ICmdObserver::onCmdReceived,m_cmdAcceptor.getCmds());
    }

private:
    CmdAcceptor m_cmdAcceptor;
};


#endif // BULKMONITOR_H
