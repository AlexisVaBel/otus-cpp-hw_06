#ifndef ICMDOBSERVER_H
#define ICMDOBSERVER_H

#include <vector>
#include <string>

class ICmdObserver{
public:
    virtual ~ICmdObserver(){}

    virtual void onCmdReceived(std::vector<std::string> &vct_str) = 0;
};

#endif // ICMDOBSERVER_H
