#include "application/Application.h"
#include "application/TrivialLogger.h"

class BoostAppTemplate : public Application
{
public:
  BoostAppTemplate(int argc, char *argv[]);

protected:
  int main() override;
};


BoostAppTemplate::BoostAppTemplate(int argc, char *argv[]):
  Application(argc, argv, "BoostAppTemplate")
{ 
  //Application::showHelpIfNoArguments(); 
  //Application::addCmdOption("option,o", "example of cmd option");
  //Application::addCmdOptionFlag("flag,f", "example of cmd flag");
}

int BoostAppTemplate::main()
{
  LOG_INF << "BoostAppTemplate"; 
  return 0;
}


int main(int argc, char *argv[])
{
  return MainApplication::run<BoostAppTemplate>(argc, argv);
}
