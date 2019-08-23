#ifndef ICMDOBSERVER_H
#define ICMDOBSERVER_H

#include <vector>
#include <string>

class ICmdObserver{
public:
    virtual ~ICmdObserver(){}

    virtual void onCmdReceived(const std::vector<std::string> &vct_str) = 0;
    virtual void onNewCmd(const std::string &str) = 0;
};

#endif // ICMDOBSERVER_H
