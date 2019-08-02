#ifndef COMMANDSTATE_H
#define COMMANDSTATE_H
#include <utility>

enum class Commands{
    READ_BULK,
    GOT_Op_BRACE,
    GOT_Cl_BRACE,
    PROCS_BULK
};

struct CommandState{
    CommandState(Commands &cmd):m_cmd(cmd){}
    CommandState(Commands &&cmd):m_cmd(std::move(cmd)){}

    bool operator != (const CommandState & that){
        return (this->m_cmd == that.m_cmd);
    }

    Commands m_cmd;
};


#endif // COMMANDSTATE_H
