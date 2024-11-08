#pragma once
#include <msclr\marshal_cppstd.h>
namespace SerialRelayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for ByteOrderForm
	/// </summary>
	public ref class ByteOrderForm : public System::Windows::Forms::Form
	{
	public:
		int sectionCount=1;
		int packetSize=1;
	private: System::Windows::Forms::Button^ btnApplyChanges;
	private: System::Windows::Forms::Label^ labelTotalPacketSize;
	public:
		System::Collections::Generic::List<String^>^ columnNames;
	private: System::Windows::Forms::Button^ btnExportConfig;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btnImportConfig;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
		System::Collections::Generic::List<int>^ columnSizes;
		ByteOrderForm(System::Collections::Generic::List<String^>^ %incomingColumnNames, System::Collections::Generic::List<int>^ %incomingColumnSizes)
		{
			InitializeComponent();
			//packetSize = &incomingPacketSize;
			columnNames = incomingColumnNames;
			columnSizes = incomingColumnSizes;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ByteOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxSectionNumber;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SectionName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SectionSize;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxSectionNumber = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SectionName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SectionSize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnApplyChanges = (gcnew System::Windows::Forms::Button());
			this->labelTotalPacketSize = (gcnew System::Windows::Forms::Label());
			this->btnExportConfig = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnImportConfig = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number of Sections";
			// 
			// textBoxSectionNumber
			// 
			this->textBoxSectionNumber->Location = System::Drawing::Point(184, 2);
			this->textBoxSectionNumber->Name = L"textBoxSectionNumber";
			this->textBoxSectionNumber->Size = System::Drawing::Size(35, 20);
			this->textBoxSectionNumber->TabIndex = 1;
			this->textBoxSectionNumber->Text = L"1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->SectionName,
					this->SectionSize
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(203, 208);
			this->dataGridView1->TabIndex = 2;
			// 
			// SectionName
			// 
			this->SectionName->HeaderText = L"Section Name";
			this->SectionName->Name = L"SectionName";
			this->SectionName->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->SectionName->Width = 111;
			// 
			// SectionSize
			// 
			this->SectionSize->HeaderText = L"Size [Byte]";
			this->SectionSize->Name = L"SectionSize";
			this->SectionSize->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->SectionSize->Width = 50;
			// 
			// btnApplyChanges
			// 
			this->btnApplyChanges->Location = System::Drawing::Point(133, 262);
			this->btnApplyChanges->Name = L"btnApplyChanges";
			this->btnApplyChanges->Size = System::Drawing::Size(86, 26);
			this->btnApplyChanges->TabIndex = 3;
			this->btnApplyChanges->Text = L"Apply Changes";
			this->btnApplyChanges->UseVisualStyleBackColor = true;
			this->btnApplyChanges->Click += gcnew System::EventHandler(this, &ByteOrderForm::btnApplyChanges_Click);
			// 
			// labelTotalPacketSize
			// 
			this->labelTotalPacketSize->AutoSize = true;
			this->labelTotalPacketSize->Location = System::Drawing::Point(15, 269);
			this->labelTotalPacketSize->Name = L"labelTotalPacketSize";
			this->labelTotalPacketSize->Size = System::Drawing::Size(100, 13);
			this->labelTotalPacketSize->TabIndex = 4;
			this->labelTotalPacketSize->Text = L"Total PacketSize: 1";
			// 
			// btnExportConfig
			// 
			this->btnExportConfig->Location = System::Drawing::Point(133, 294);
			this->btnExportConfig->Name = L"btnExportConfig";
			this->btnExportConfig->Size = System::Drawing::Size(86, 44);
			this->btnExportConfig->TabIndex = 5;
			this->btnExportConfig->Text = L"Export Configuration";
			this->btnExportConfig->UseVisualStyleBackColor = true;
			this->btnExportConfig->Click += gcnew System::EventHandler(this, &ByteOrderForm::btnExportConfig_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Filter = L"txt files (*.txt)|*.txt";
			// 
			// btnImportConfig
			// 
			this->btnImportConfig->Location = System::Drawing::Point(18, 294);
			this->btnImportConfig->Name = L"btnImportConfig";
			this->btnImportConfig->Size = System::Drawing::Size(86, 44);
			this->btnImportConfig->TabIndex = 6;
			this->btnImportConfig->Text = L"Import Configuration";
			this->btnImportConfig->UseVisualStyleBackColor = true;
			this->btnImportConfig->Click += gcnew System::EventHandler(this, &ByteOrderForm::btnImportConfig_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"txt files (*.txt)|*.txt";
			// 
			// ByteOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(241, 350);
			this->Controls->Add(this->btnImportConfig);
			this->Controls->Add(this->btnExportConfig);
			this->Controls->Add(this->labelTotalPacketSize);
			this->Controls->Add(this->btnApplyChanges);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBoxSectionNumber);
			this->Controls->Add(this->label1);
			this->Name = L"ByteOrderForm";
			this->Text = L"ByteOrderForm";
			this->Load += gcnew System::EventHandler(this, &ByteOrderForm::ByteOrderForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ByteOrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if(dataGridView1->RowCount<1)dataGridView1->Rows->Add("Section0","1");
}

private: System::Void btnApplyChanges_Click(System::Object^ sender, System::EventArgs^ e) {
	applyChangesFunction();
}
private: System::Void btnExportConfig_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (applyChangesFunction()) {
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			ExportConfig(msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName));
		}
	}*/
	
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ configOutStream=gcnew StreamWriter(saveFileDialog1->FileName);
			configOutStream->WriteLine(sectionCount);
			for (int i = 0;i < sectionCount;i++) {
				configOutStream->WriteLine(columnNames[i]);
				configOutStream->WriteLine(columnSizes[i]);
			}
			configOutStream->Close();
	}

}
private: System::Void btnImportConfig_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
			ImportConfig(msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName));

	}*/
	StreamReader^ configImportStream;
	try {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((configImportStream = File::OpenText(openFileDialog1->FileName)) != nullptr) {
				//MessageBox::Show("Found");
				textBoxSectionNumber->Text = configImportStream->ReadLine();
				if (applyChangesFunction()) {
					for (int i = 0;i < dataGridView1->RowCount;i++) {
						dataGridView1->Rows[i]->Cells[0]->Value = configImportStream->ReadLine();
						dataGridView1->Rows[i]->Cells[1]->Value = configImportStream->ReadLine();
					}
				}
				configImportStream->Close();
			}
			else { configImportStream->Close(); }
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<UnauthorizedAccessException^>(e))
			MessageBox::Show(e->Message, "You don't have the authority ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<ArgumentNullException^>(e))
			MessageBox::Show(e->Message, "Path is null", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<ArgumentException^>(e))
			MessageBox::Show(e->Message, "Path name is empty string / contains invalid characters/ consists of only white space", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<PathTooLongException^>(e))
			MessageBox::Show(e->Message, "Path Name Is Too Long", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<DirectoryNotFoundException^>(e))
			MessageBox::Show(e->Message, "Invalid Path", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<FileNotFoundException^>(e))
			MessageBox::Show(e->Message, "Path Not Found ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<NotSupportedException^>(e))
			MessageBox::Show(e->Message, "Invalid Path Format", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if(dynamic_cast<OutOfMemoryException^>(e))
			MessageBox::Show(e->Message, "Mnsufficient Memory", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (dynamic_cast<IOException^>(e))
			MessageBox::Show(e->Message, "An I/O Exception Occured", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
//private: void ExportConfig(std::string& filePath);
//private: void ImportConfig(std::string& filePath);
private: bool applyChangesFunction() {
	if (textBoxSectionNumber->Text->Length < 1) {
		MessageBox::Show("Section Size can not be empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	try {
		if (Convert::ToInt32(textBoxSectionNumber->Text) < 1) {
			MessageBox::Show("Size has to be at least 1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxSectionNumber->Text = Convert::ToString(sectionCount);
			return false;
		}
	}
	catch (System::FormatException^) {
		MessageBox::Show("Section Number can only contain numbers", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	catch (System::OverflowException^) {
		MessageBox::Show("Section Number too big/small", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	int lastSectionCount = sectionCount;
	sectionCount = Convert::ToInt32(textBoxSectionNumber->Text);
	if (lastSectionCount < sectionCount) {
		dataGridView1->Rows->AddCopies(0, sectionCount - lastSectionCount);
		for (int i = 0;i < sectionCount - lastSectionCount;i++) {
			dataGridView1->Rows[lastSectionCount + i]->Cells[0]->Value = "Section" + Convert::ToString(lastSectionCount + i);
			dataGridView1->Rows[lastSectionCount + i]->Cells[1]->Value = "1";
		}
	}
	else if (lastSectionCount > sectionCount) {
		for (int i = lastSectionCount - 1;i >= sectionCount;i--) {
			dataGridView1->Rows->RemoveAt(i);
		}
	}
	int tempPacketSize = 0;
	for (int i = 0; i < dataGridView1->RowCount;i++) {
		try {
			if (Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value) < 1) {
				MessageBox::Show("No section's size can be less than 1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
		}
		catch (System::FormatException^) {
			MessageBox::Show("Section Sizes can only contain numbers", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		catch (System::OverflowException^) {
			MessageBox::Show("Section Sizes too big/small", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		tempPacketSize += Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
	}
	packetSize = tempPacketSize;
	columnNames->Clear();
	columnSizes->Clear();
	for (int i = 0; i < dataGridView1->RowCount;i++) {
		columnNames->Add(Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value));
		columnSizes->Add(Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value));
	}
	labelTotalPacketSize->Text = "Total Packet Size" + Convert::ToString(packetSize);
	return true;
}

};
}
