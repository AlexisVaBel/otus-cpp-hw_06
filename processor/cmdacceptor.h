#ifndef CMDACCEPTOR_H
#define CMDACCEPTOR_H

#include <vector>
#include <stack>
#include <string>
#include <iostream>


class CmdAcceptor{
public:
    CmdAcceptor(uint cnt):m_iCnt(cnt){}

    bool procsCmd(std::string str){
        if(str.compare("{") == 0){
            m_prms.push(str);
            return false;
        }
        if(str.compare("}") == 0){
            if(m_prms.size() > 0 && m_prms.top().compare("{") == 0)
                m_prms.pop();
            return (m_prms.size() == 0 && m_cmds.size() > 0);
        }
        if(str.empty()) return (m_cmds.size() > 0);
        m_cmds.push_back(str);
        if(m_cmds.size() >= m_iCnt && m_prms.empty()) return true;
        return false;
    }

    void printQueue(){
        for(std::vector<std::string>::const_iterator it = m_cmds.cbegin(); it != m_cmds.cend(); ++it){
            if( it != m_cmds.cbegin() ) std::cout << ",";
            std::cout << *it;
        }
        std::cout << std::endl;
    }

private:
    uint                     m_iCnt;
    std::vector<std::string>  m_cmds;
    std::stack<std::string>  m_prms;
};


#endif // CMDACCEPTOR_H
