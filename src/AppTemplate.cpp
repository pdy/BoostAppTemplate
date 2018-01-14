#include "application/Application.h"
#include "application/TrivialLogger.h"

class AppTemplate : public Application
{
public:
    AppTemplate(int argc, char *argv[]);
    ~AppTemplate() override = default;

protected:
    int main() override;
};


AppTemplate::AppTemplate(int argc, char *argv[])
    : Application(argc, argv, "AppTemplate")
{ 
    Application::showHelpIfNoArguments(); 
    Application::addCmdOption("option,o", "example of cmd option");
    Application::addCmdOptionFlag("flag,f", "example of cmd flag");
}

int AppTemplate::main()
{
    LOG_INF << "AppTemplate"; 
    return 0;
}


int main(int argc, char *argv[])
{
    return MainApplication::run<AppTemplate>(argc, argv);
}
