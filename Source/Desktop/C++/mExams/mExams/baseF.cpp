#include "baseF.h"

using namespace mExams; //the project name in your header file


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew baseF());
    return 0;
}

