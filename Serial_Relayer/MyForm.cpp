#include "MyForm.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace System;
using namespace System::IO;
using namespace System::IO::Ports;
using namespace System::Windows::Forms;
[STAThread]
void main(){ //array<String^>^ args
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SerialRelayer::MyForm form;
	Application::Run(%form);
	return;
}
void SerialRelayer::MyForm::SaveExcel(std::string filePath, std::string &text) {
	std::ofstream excelFile;
	excelFile.open(filePath,std::ios::trunc);
	excelFile << ";";
	for (int i = 0;text[i] != '\0';i++) {
		if (text[i] != '\n')excelFile <<text[i];
		else excelFile << ';';
	}
	excelFile.close();
	return;
}