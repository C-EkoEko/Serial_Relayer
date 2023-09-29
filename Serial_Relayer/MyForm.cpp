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
void SerialRelayer::MyForm::SaveExcel(std::string& filePath, std::string& text) {
	std::ofstream excelFile;
	excelFile.open(filePath,std::ios::trunc);
	int listDataSize = incomingData->Count;
	int listTimeSize = timeStamps->Count;
	int columnCount = columnNames->Count;
	int currIndex = 0;
	excelFile << "Time Stamps";
	for (int i = 0;i < columnCount;i++) {
		excelFile << ';' << msclr::interop::marshal_as<std::string>(columnNames[i]);
	}
	excelFile << '\n';
	std::string tempStr, tempstr2;
	for (int i = 0;i< listDataSize;i++) {
		if(i<listTimeSize)excelFile << msclr::interop::marshal_as<std::string>(timeStamps[i]);
		tempStr = msclr::interop::marshal_as<std::string>(incomingData[i]);
		currIndex = 0;
		//excelFile<<';'<< msclr::interop::marshal_as<std::string>(incomingData[i]) <<'\n';
		for (int j = 0;j < columnCount;j++) {
			tempstr2 = "";
			for (int k = 0;k < columnSizes[j];k++) {//*2 bir byte hex iken 2 sembol ile gösterildiðinden
				tempstr2 += "[";
				for (int z = 0;z < 2 && currIndex < (int)tempStr.size();z++,currIndex++) {
					tempstr2 += tempStr[currIndex];
				}
				tempstr2 += "]";
				
			}
			excelFile << ';'<<tempstr2;
		}
		excelFile << '\n';
	}
	excelFile.close();
	return;
}