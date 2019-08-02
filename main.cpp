#include <iostream>
#include "observer/bulkobserver.h"


int main(int argc, char ** argv){
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    for(std::string line; std::getline(std::cin, line);){
        std::cout << line << " : " << std::endl;
    }

//    BulkObserver<int> bulk;
//    IntIpVectorsT r;
//        for(std::string line; std::getline(std::cin, line);){
//            std::vector<std::string> v = split(line, '\t');
//            r.push_back(splitToInts(v.at(0), '.'));
//        }

    return 0;
}
