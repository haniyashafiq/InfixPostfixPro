#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project::Form1 form;
	Application::Run(% form);
}

