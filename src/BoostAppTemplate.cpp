/*
*  MIT License
*  
*  Copyright (c) 2020 Pawel Drzycimski
*  
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*  
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
*  
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
*
*/


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
