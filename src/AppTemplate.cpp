#include "application/Application.h"

class AppTemplate : public Application
{
public:
    AppTemplate(int argc, char *argv[]);
    virtual ~AppTemplate() = default;

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

using po = boost::program_options::option_description;
int AppTemplate::main()
{
    std::cout << "AppTemplate\n"; 
    return 0;
}


int main(int argc, char *argv[])
{
    return MainApplication::run<AppTemplate>(argc, argv);
}
