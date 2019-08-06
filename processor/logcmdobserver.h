#ifndef LOGCMDOBSERVER_H
#define LOGCMDOBSERVER_H
#include "icmdobserver.h"
#include <fstream>
#include <string>
#include <vector>
#include <fstream>


class LogCmdObserver:public ICmdObserver{


    // ICmdObserver interface
public:
    void onCmdReceived(std::vector<std::string> &vct_str)
    {
        std::string str="";
        for(std::vector<std::string>::const_iterator it = vct_str.cbegin(); it != vct_str.cend(); ++it){
            if( it != vct_str.cbegin() ) str +=", ";
            else str += "bulk: ";
            str+= *it;
        }
        writeLog(str);
    }


private:
    std::string makePrefix(){
        return std::to_string(time(nullptr));
    }

    void writeLog(std::string &str){
        std::ofstream fout(makePrefix()+".log");
        fout << str;
        fout.close();
    }
};
#endif // LOGCMDOBSERVER_H
