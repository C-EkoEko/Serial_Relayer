#include "ByteOrderForm.h"
#include <iostream>
#include <iomanip>
#include <fstream>
/*void SerialRelayer::ByteOrderForm::ExportConfig(std::string& filePath) {
	std::ofstream configExportFile;
	configExportFile.open(filePath, std::ios::trunc);
	configExportFile<< msclr::interop::marshal_as<std::string>(textBoxSectionNumber->Text) << '\n';
	for (int i = 0;i < dataGridView1->RowCount;i++) {
		configExportFile << msclr::interop::marshal_as<std::string>(Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value)) << '\n' << msclr::interop::marshal_as<std::string>(Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value)) << '\n';
	}
	configExportFile.close();
	return;
}*/

/*void SerialRelayer::ByteOrderForm::ImportConfig(std::string& filePath) {
	std::ifstream configImportFile;
	configImportFile.open(filePath, std::ios::trunc);
	std::string tempStr = "";
	std::getline(configImportFile, tempStr);
	std::getline(configImportFile,tempStr);
	MessageBox::Show(msclr::interop::marshal_as<System::String^>(tempStr), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	textBoxSectionNumber->Text = msclr::interop::marshal_as<System::String^>(tempStr);
	if (SerialRelayer::ByteOrderForm::applyChangesFunction()) {
		for (int i = 0;i < dataGridView1->RowCount;i++) {
			std::getline(configImportFile, tempStr);
			dataGridView1->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<System::String^>(tempStr);
			std::getline(configImportFile, tempStr);
			dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(tempStr);
		}
		SerialRelayer::ByteOrderForm::applyChangesFunction();
	}
	configImportFile.close();
	return;
}*/
