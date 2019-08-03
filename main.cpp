#include <iostream>
#include "observer/bulkobserver.h"
#include "processor/cmdacceptor.h"

int main(int argc, char ** argv){
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    CmdAcceptor acc(3);
    for(std::string line; std::getline(std::cin, line);){
        if(acc.procsCmd(line)) acc.printQueue();
    }
    acc.printQueue();


    return 0;
}
