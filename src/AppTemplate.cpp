#include "application/Application.h"

#include <boost/program_options/options_description.hpp>

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
    Application::addCmdOptionFlag("flag,f", "example of cmd flag");
}

using po = boost::program_options::option_description;
int AppTemplate::main()
{
    std::cout << "AppTemplate\n";

    po::option_description o("option,o", boost::program_options::value<std::string>());
     
    const auto res = o.match("option,o", true, true, true);
    if(res == po::match_result::no_match)
    {
        std::cout << "no match\n";
    }
    else
    {
        std::cout << "match\n";
    } 
    return 0;
}


int main(int argc, char *argv[])
{
    return MainApplication::run<AppTemplate>(argc, argv);
}
