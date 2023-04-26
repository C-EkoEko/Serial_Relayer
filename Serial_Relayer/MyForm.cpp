#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::IO::Ports;
void main() { //array<String^>^ args
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SerialRelayer::MyForm form;
	Application::Run(% form);
	return;
}
