#ifndef CONSOLECMDOBSERVER_H
#define CONSOLECMDOBSERVER_H

#include "icmdobserver.h"
#include <iostream>
#include <string>
#include <vector>

class ConsoleCmdObserver: public ICmdObserver{
public:
    ~ConsoleCmdObserver(){

    }
    // ICmdObserver interface
    void onCmdReceived(const std::vector<std::string>  &vct_str){
        for(std::vector<std::string>::const_iterator it = vct_str.cbegin(); it != vct_str.cend(); ++it){
            if( it != vct_str.cbegin() ) std::cout << ", ";
            else std::cout << "bulk: ";
            std::cout << *it;
        }
        std::cout << std::endl;
    }

    // ICmdObserver interface
public:
    void onNewCmd(const std::string &str){
        // none command here needed
    }
};

#endif // CONSOLECMDOBSERVER_H
