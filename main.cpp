#include <string>
#include <observable/bulkmonitor.h>
#include <observer/consolecmdobserver.h>
#include <observer/logcmdobserver.h>

#include <memory>

int main(int argc, char ** argv){
    if(argc < 2) throw  std::length_error("need at least one parameter to work");
    int val = std::stoi(argv[1]);

    BulkMonitor monitor(val);
    monitor.registerObserver(std::make_shared<ConsoleCmdObserver>());
    monitor.registerObserver(std::make_shared<LogCmdObserver>());
    monitor.procsCmd();

    return 0;
}
