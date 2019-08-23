#ifndef CMDACCEPTOR_H
#define CMDACCEPTOR_H

#include <vector>
#include <stack>
#include <string>
#include <iostream>


// better way to use ICmdAcceptor and CmdBulkAcceptor as implementation

class CmdAcceptor{
public:
    CmdAcceptor(uint cnt):m_iCnt(cnt){
        clearProcessd();
    }

    bool procsCmd(std::string str){
        if(str.compare("{") == 0){            
            if(m_cmds.empty() && m_prms.empty()) m_strFstCmdArrived = makeTimePrefix();
            m_prms.push(str);
            return false;
        }
        if(str.compare("}") == 0){            
            if(m_prms.size() > 0 && m_prms.top().compare("{") == 0)
                m_prms.pop();
            return (m_prms.size() == 0 && m_cmds.size() > 0);
        }
        if(str.empty()) {
            return (m_cmds.size() > 0 && (!m_prms.empty()));
        }
        if(m_cmds.empty()) m_strFstCmdArrived = makeTimePrefix();

        m_cmds.push_back(str);
        if(m_cmds.size() >= m_iCnt && m_prms.empty()){
            return true;
        }
        return false;
    }

    std::vector<std::string> getCmds() const{
        return m_cmds;
    }

    std::string getFirstCmdArrived(){
        return m_strFstCmdArrived;
    }

    void clearProcessd(){
        m_cmds.clear();
        m_strFstCmdArrived.clear();
    }


private:
    uint                      m_iCnt;
    std::string               m_strFstCmdArrived;
    std::vector<std::string>  m_cmds;
    std::stack<std::string>   m_prms;

    std::string makeTimePrefix(){
        return std::to_string(time(nullptr));
    }
};


#endif // CMDACCEPTOR_H
