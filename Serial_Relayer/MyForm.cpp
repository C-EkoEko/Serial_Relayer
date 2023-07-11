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
	//int listDataSize = incomingData->Count;
	//int listTimeSize = timeStamps->Count;
	//for (int i = 0;i< listDataSize;i++) {
		//if(i<listTimeSize)excelFile << msclr::interop::marshal_as<std::string>(timeStamps[i]);
		//excelFile<<';'<< msclr::interop::marshal_as<std::string>(incomingData[i]) <<'\n';
	//}
	excelFile.close();
	return;
}