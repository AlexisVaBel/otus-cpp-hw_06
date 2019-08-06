#include <iostream>

#include <string>
#include <processor/bulkmonitor.h>
#include <processor/consolecmdobserver.h>
#include <processor/logcmdobserver.h>

#include <memory>

int main(int argc, char ** argv){
    if(argc < 2) throw  std::length_error("need at least one parameter to work");
    int val = std::stoi(argv[1]);

    BulkMonitor monitor(val);

    ConsoleCmdObserver *v1 = new ConsoleCmdObserver();
    LogCmdObserver     *v2 = new LogCmdObserver();

    monitor.registerObserver(v1);
    monitor.registerObserver(v2);
    monitor.procsCmd();

    return 0;
}
