#pragma once
#include "Credits.h"
namespace SerialRelayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Boolean^ canCommunicate=gcnew Boolean;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
			canCommunicate = false;
		}
	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ rxPort;
	private: System::Windows::Forms::ComboBox^ rxBaudRate;

	private: System::Windows::Forms::ComboBox^ rxDataBits;
	private: System::Windows::Forms::ComboBox^ rxStopBits;
	private: System::Windows::Forms::ComboBox^ rxParityBits;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBoxRX;
	private: System::Windows::Forms::GroupBox^ groupBoxTX;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ txParityBits;

	private: System::Windows::Forms::ComboBox^ txStopBits;

	private: System::Windows::Forms::ComboBox^ txDataBits;

	private: System::Windows::Forms::ComboBox^ txBaudRate;

	private: System::Windows::Forms::ComboBox^ txPort;
	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::Button^ btnClose;



	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;




	private: System::Windows::Forms::TextBox^ textBoxData;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::IO::Ports::SerialPort^ serialPort2;
	private: System::Windows::Forms::CheckBox^ sameAsReceiver;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnSearchPorts;

	private: System::Windows::Forms::Button^ btnResetSettings;
	private: System::Windows::Forms::Button^ btnCredits;
	private: System::Windows::Forms::TextBox^ textBoxPacketSize;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBoxPacketSize;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::CheckBox^ disable;
	private: System::Windows::Forms::Button^ btnClearOutput;
	private: System::Windows::Forms::CheckBox^ checkBoxAutoScroll;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btnSaveSession;
	private: System::Windows::Forms::CheckBox^ checkBoxShowTime;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnStartStopComm;




	protected:


	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->rxPort = (gcnew System::Windows::Forms::ComboBox());
			this->rxBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->rxDataBits = (gcnew System::Windows::Forms::ComboBox());
			this->rxStopBits = (gcnew System::Windows::Forms::ComboBox());
			this->rxParityBits = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBoxRX = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxTX = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->disable = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->sameAsReceiver = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txParityBits = (gcnew System::Windows::Forms::ComboBox());
			this->txStopBits = (gcnew System::Windows::Forms::ComboBox());
			this->txDataBits = (gcnew System::Windows::Forms::ComboBox());
			this->txBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->txPort = (gcnew System::Windows::Forms::ComboBox());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnStartStopComm = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBoxData = (gcnew System::Windows::Forms::TextBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->serialPort2 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->btnSearchPorts = (gcnew System::Windows::Forms::Button());
			this->btnResetSettings = (gcnew System::Windows::Forms::Button());
			this->btnCredits = (gcnew System::Windows::Forms::Button());
			this->textBoxPacketSize = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBoxPacketSize = (gcnew System::Windows::Forms::GroupBox());
			this->btnClearOutput = (gcnew System::Windows::Forms::Button());
			this->checkBoxAutoScroll = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnSaveSession = (gcnew System::Windows::Forms::Button());
			this->checkBoxShowTime = (gcnew System::Windows::Forms::CheckBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBoxRX->SuspendLayout();
			this->groupBoxTX->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBoxPacketSize->SuspendLayout();
			this->SuspendLayout();
			// 
			// rxPort
			// 
			this->rxPort->FormattingEnabled = true;
			this->rxPort->Location = System::Drawing::Point(112, 27);
			this->rxPort->Name = L"rxPort";
			this->rxPort->Size = System::Drawing::Size(121, 21);
			this->rxPort->TabIndex = 0;
			// 
			// rxBaudRate
			// 
			this->rxBaudRate->FormattingEnabled = true;
			this->rxBaudRate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1200", L"2400", L"4800", L"9600", L"14400",
					L"19200", L"38400", L"56000", L"57600", L"115200", L"128000", L"256000"
			});
			this->rxBaudRate->Location = System::Drawing::Point(112, 54);
			this->rxBaudRate->Name = L"rxBaudRate";
			this->rxBaudRate->Size = System::Drawing::Size(121, 21);
			this->rxBaudRate->TabIndex = 1;
			this->rxBaudRate->Text = L"9600";
			this->rxBaudRate->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::rxBaudRate_SelectedIndexChanged);
			// 
			// rxDataBits
			// 
			this->rxDataBits->FormattingEnabled = true;
			this->rxDataBits->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"5", L"6", L"7", L"8" });
			this->rxDataBits->Location = System::Drawing::Point(112, 81);
			this->rxDataBits->Name = L"rxDataBits";
			this->rxDataBits->Size = System::Drawing::Size(121, 21);
			this->rxDataBits->TabIndex = 2;
			this->rxDataBits->Text = L"8";
			this->rxDataBits->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::rxDataBits_SelectedIndexChanged);
			// 
			// rxStopBits
			// 
			this->rxStopBits->FormattingEnabled = true;
			this->rxStopBits->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"One", L"OnePointFive", L"Two" });
			this->rxStopBits->Location = System::Drawing::Point(112, 108);
			this->rxStopBits->Name = L"rxStopBits";
			this->rxStopBits->Size = System::Drawing::Size(121, 21);
			this->rxStopBits->TabIndex = 3;
			this->rxStopBits->Text = L"One";
			this->rxStopBits->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::rxStopBits_SelectedIndexChanged);
			// 
			// rxParityBits
			// 
			this->rxParityBits->FormattingEnabled = true;
			this->rxParityBits->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"Odd", L"Even" });
			this->rxParityBits->Location = System::Drawing::Point(112, 135);
			this->rxParityBits->Name = L"rxParityBits";
			this->rxParityBits->Size = System::Drawing::Size(121, 21);
			this->rxParityBits->TabIndex = 4;
			this->rxParityBits->Text = L"None";
			this->rxParityBits->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::rxParityBits_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"COM Port";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Baud Rate";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Data Bits";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Stop Bits";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Parity";
			// 
			// groupBoxRX
			// 
			this->groupBoxRX->Controls->Add(this->label5);
			this->groupBoxRX->Controls->Add(this->label4);
			this->groupBoxRX->Controls->Add(this->label3);
			this->groupBoxRX->Controls->Add(this->label2);
			this->groupBoxRX->Controls->Add(this->label1);
			this->groupBoxRX->Controls->Add(this->rxParityBits);
			this->groupBoxRX->Controls->Add(this->rxStopBits);
			this->groupBoxRX->Controls->Add(this->rxDataBits);
			this->groupBoxRX->Controls->Add(this->rxBaudRate);
			this->groupBoxRX->Controls->Add(this->rxPort);
			this->groupBoxRX->Location = System::Drawing::Point(30, 16);
			this->groupBoxRX->Name = L"groupBoxRX";
			this->groupBoxRX->Size = System::Drawing::Size(254, 185);
			this->groupBoxRX->TabIndex = 20;
			this->groupBoxRX->TabStop = false;
			this->groupBoxRX->Text = L"Receiver Port";
			// 
			// groupBoxTX
			// 
			this->groupBoxTX->Controls->Add(this->label13);
			this->groupBoxTX->Controls->Add(this->disable);
			this->groupBoxTX->Controls->Add(this->label11);
			this->groupBoxTX->Controls->Add(this->sameAsReceiver);
			this->groupBoxTX->Controls->Add(this->label6);
			this->groupBoxTX->Controls->Add(this->label7);
			this->groupBoxTX->Controls->Add(this->label8);
			this->groupBoxTX->Controls->Add(this->label9);
			this->groupBoxTX->Controls->Add(this->label10);
			this->groupBoxTX->Controls->Add(this->txParityBits);
			this->groupBoxTX->Controls->Add(this->txStopBits);
			this->groupBoxTX->Controls->Add(this->txDataBits);
			this->groupBoxTX->Controls->Add(this->txBaudRate);
			this->groupBoxTX->Controls->Add(this->txPort);
			this->groupBoxTX->Location = System::Drawing::Point(325, 16);
			this->groupBoxTX->Name = L"groupBoxTX";
			this->groupBoxTX->Size = System::Drawing::Size(254, 205);
			this->groupBoxTX->TabIndex = 21;
			this->groupBoxTX->TabStop = false;
			this->groupBoxTX->Text = L"Transmitter Port";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 182);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Disable";
			// 
			// disable
			// 
			this->disable->AutoSize = true;
			this->disable->Location = System::Drawing::Point(113, 181);
			this->disable->Name = L"disable";
			this->disable->Size = System::Drawing::Size(15, 14);
			this->disable->TabIndex = 17;
			this->disable->UseVisualStyleBackColor = true;
			this->disable->CheckedChanged += gcnew System::EventHandler(this, &MyForm::disable_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 162);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Same As Receiver";
			// 
			// sameAsReceiver
			// 
			this->sameAsReceiver->AutoSize = true;
			this->sameAsReceiver->Location = System::Drawing::Point(112, 161);
			this->sameAsReceiver->Name = L"sameAsReceiver";
			this->sameAsReceiver->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->sameAsReceiver->Size = System::Drawing::Size(15, 14);
			this->sameAsReceiver->TabIndex = 15;
			this->sameAsReceiver->UseVisualStyleBackColor = true;
			this->sameAsReceiver->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sameAsReceiver_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Parity";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Stop Bits";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Data Bits";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Baud Rate";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"COM Port";
			// 
			// txParityBits
			// 
			this->txParityBits->FormattingEnabled = true;
			this->txParityBits->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"Odd", L"Even" });
			this->txParityBits->Location = System::Drawing::Point(112, 135);
			this->txParityBits->Name = L"txParityBits";
			this->txParityBits->Size = System::Drawing::Size(121, 21);
			this->txParityBits->TabIndex = 4;
			this->txParityBits->Text = L"None";
			// 
			// txStopBits
			// 
			this->txStopBits->FormattingEnabled = true;
			this->txStopBits->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"One", L"OnePointFive", L"Two" });
			this->txStopBits->Location = System::Drawing::Point(112, 108);
			this->txStopBits->Name = L"txStopBits";
			this->txStopBits->Size = System::Drawing::Size(121, 21);
			this->txStopBits->TabIndex = 3;
			this->txStopBits->Text = L"One";
			// 
			// txDataBits
			// 
			this->txDataBits->FormattingEnabled = true;
			this->txDataBits->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"5", L"6", L"7", L"8" });
			this->txDataBits->Location = System::Drawing::Point(112, 81);
			this->txDataBits->Name = L"txDataBits";
			this->txDataBits->Size = System::Drawing::Size(121, 21);
			this->txDataBits->TabIndex = 2;
			this->txDataBits->Text = L"8";
			// 
			// txBaudRate
			// 
			this->txBaudRate->FormattingEnabled = true;
			this->txBaudRate->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1200", L"2400", L"4800", L"9600", L"14400",
					L"19200", L"38400", L"56000", L"57600", L"115200", L"128000", L"256000"
			});
			this->txBaudRate->Location = System::Drawing::Point(112, 54);
			this->txBaudRate->Name = L"txBaudRate";
			this->txBaudRate->Size = System::Drawing::Size(121, 21);
			this->txBaudRate->TabIndex = 1;
			this->txBaudRate->Text = L"9600";
			// 
			// txPort
			// 
			this->txPort->FormattingEnabled = true;
			this->txPort->Location = System::Drawing::Point(112, 27);
			this->txPort->Name = L"txPort";
			this->txPort->Size = System::Drawing::Size(121, 21);
			this->txPort->TabIndex = 0;
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(4, 21);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(53, 19);
			this->btnOpen->TabIndex = 22;
			this->btnOpen->Text = L"OPEN";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// btnClose
			// 
			this->btnClose->Enabled = false;
			this->btnClose->Location = System::Drawing::Point(81, 21);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(53, 19);
			this->btnClose->TabIndex = 23;
			this->btnClose->Text = L"CLOSE";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnStartStopComm);
			this->groupBox3->Controls->Add(this->progressBar1);
			this->groupBox3->Controls->Add(this->btnClose);
			this->groupBox3->Controls->Add(this->btnOpen);
			this->groupBox3->Location = System::Drawing::Point(325, 235);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(254, 92);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			// 
			// btnStartStopComm
			// 
			this->btnStartStopComm->Enabled = false;
			this->btnStartStopComm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->btnStartStopComm->Location = System::Drawing::Point(138, 21);
			this->btnStartStopComm->Name = L"btnStartStopComm";
			this->btnStartStopComm->Size = System::Drawing::Size(112, 56);
			this->btnStartStopComm->TabIndex = 25;
			this->btnStartStopComm->Text = L"START COMMUNICATION";
			this->btnStartStopComm->UseVisualStyleBackColor = true;
			this->btnStartStopComm->Click += gcnew System::EventHandler(this, &MyForm::btnStartStopComm_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(5, 56);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(129, 21);
			this->progressBar1->TabIndex = 24;
			// 
			// textBoxData
			// 
			this->textBoxData->Location = System::Drawing::Point(30, 341);
			this->textBoxData->Multiline = true;
			this->textBoxData->Name = L"textBoxData";
			this->textBoxData->ReadOnly = true;
			this->textBoxData->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxData->Size = System::Drawing::Size(549, 112);
			this->textBoxData->TabIndex = 26;
			this->textBoxData->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxData_TextChanged);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// btnSearchPorts
			// 
			this->btnSearchPorts->Location = System::Drawing::Point(30, 268);
			this->btnSearchPorts->Name = L"btnSearchPorts";
			this->btnSearchPorts->Size = System::Drawing::Size(116, 59);
			this->btnSearchPorts->TabIndex = 27;
			this->btnSearchPorts->Text = L"Search Ports";
			this->btnSearchPorts->UseVisualStyleBackColor = true;
			this->btnSearchPorts->Click += gcnew System::EventHandler(this, &MyForm::btnSearchPorts_Click);
			// 
			// btnResetSettings
			// 
			this->btnResetSettings->Location = System::Drawing::Point(168, 268);
			this->btnResetSettings->Name = L"btnResetSettings";
			this->btnResetSettings->Size = System::Drawing::Size(116, 59);
			this->btnResetSettings->TabIndex = 28;
			this->btnResetSettings->Text = L"Reset Settings";
			this->btnResetSettings->UseVisualStyleBackColor = true;
			this->btnResetSettings->Click += gcnew System::EventHandler(this, &MyForm::btnResetSettings_Click);
			// 
			// btnCredits
			// 
			this->btnCredits->Location = System::Drawing::Point(483, 460);
			this->btnCredits->Name = L"btnCredits";
			this->btnCredits->Size = System::Drawing::Size(97, 24);
			this->btnCredits->TabIndex = 29;
			this->btnCredits->Text = L"Credits";
			this->btnCredits->UseVisualStyleBackColor = true;
			this->btnCredits->Click += gcnew System::EventHandler(this, &MyForm::btnCredits_Click);
			// 
			// textBoxPacketSize
			// 
			this->textBoxPacketSize->Location = System::Drawing::Point(112, 13);
			this->textBoxPacketSize->Name = L"textBoxPacketSize";
			this->textBoxPacketSize->Size = System::Drawing::Size(121, 20);
			this->textBoxPacketSize->TabIndex = 30;
			this->textBoxPacketSize->Text = L"1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Packet Size [Byte]";
			// 
			// groupBoxPacketSize
			// 
			this->groupBoxPacketSize->Controls->Add(this->label12);
			this->groupBoxPacketSize->Controls->Add(this->textBoxPacketSize);
			this->groupBoxPacketSize->Location = System::Drawing::Point(30, 210);
			this->groupBoxPacketSize->Name = L"groupBoxPacketSize";
			this->groupBoxPacketSize->Size = System::Drawing::Size(254, 40);
			this->groupBoxPacketSize->TabIndex = 31;
			this->groupBoxPacketSize->TabStop = false;
			// 
			// btnClearOutput
			// 
			this->btnClearOutput->Location = System::Drawing::Point(370, 460);
			this->btnClearOutput->Name = L"btnClearOutput";
			this->btnClearOutput->Size = System::Drawing::Size(97, 24);
			this->btnClearOutput->TabIndex = 32;
			this->btnClearOutput->Text = L"Clear Output";
			this->btnClearOutput->UseVisualStyleBackColor = true;
			this->btnClearOutput->Click += gcnew System::EventHandler(this, &MyForm::btnClearOutput_Click);
			// 
			// checkBoxAutoScroll
			// 
			this->checkBoxAutoScroll->AutoSize = true;
			this->checkBoxAutoScroll->Checked = true;
			this->checkBoxAutoScroll->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxAutoScroll->Location = System::Drawing::Point(226, 467);
			this->checkBoxAutoScroll->Name = L"checkBoxAutoScroll";
			this->checkBoxAutoScroll->Size = System::Drawing::Size(15, 14);
			this->checkBoxAutoScroll->TabIndex = 19;
			this->checkBoxAutoScroll->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(162, 466);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Auto Scroll";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// btnSaveSession
			// 
			this->btnSaveSession->Location = System::Drawing::Point(257, 460);
			this->btnSaveSession->Name = L"btnSaveSession";
			this->btnSaveSession->Size = System::Drawing::Size(97, 24);
			this->btnSaveSession->TabIndex = 33;
			this->btnSaveSession->Text = L"Save Session";
			this->btnSaveSession->UseVisualStyleBackColor = true;
			this->btnSaveSession->Click += gcnew System::EventHandler(this, &MyForm::btnSaveSession_Click);
			// 
			// checkBoxShowTime
			// 
			this->checkBoxShowTime->AutoSize = true;
			this->checkBoxShowTime->Location = System::Drawing::Point(131, 467);
			this->checkBoxShowTime->Name = L"checkBoxShowTime";
			this->checkBoxShowTime->Size = System::Drawing::Size(15, 14);
			this->checkBoxShowTime->TabIndex = 34;
			this->checkBoxShowTime->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(67, 468);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 13);
			this->label15->TabIndex = 35;
			this->label15->Text = L"Show Time";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 493);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->checkBoxShowTime);
			this->Controls->Add(this->btnSaveSession);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->checkBoxAutoScroll);
			this->Controls->Add(this->btnClearOutput);
			this->Controls->Add(this->groupBoxPacketSize);
			this->Controls->Add(this->btnCredits);
			this->Controls->Add(this->btnResetSettings);
			this->Controls->Add(this->btnSearchPorts);
			this->Controls->Add(this->textBoxData);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBoxTX);
			this->Controls->Add(this->groupBoxRX);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Serial Relayer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBoxRX->ResumeLayout(false);
			this->groupBoxRX->PerformLayout();
			this->groupBoxTX->ResumeLayout(false);
			this->groupBoxTX->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBoxPacketSize->ResumeLayout(false);
			this->groupBoxPacketSize->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
delegate void ShowIt();
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	array <String^>^ availablePorts = SerialPort::GetPortNames();
	rxPort->Items->AddRange(availablePorts);
	txPort->Items->AddRange(availablePorts);
}
private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!disable->Checked){
		try {
			if (rxPort->Text== txPort->Text) {
				throw(true);
			}
		}

		catch (bool arePortsSame) {
			MessageBox::Show("Receiver and transmitter ports can not be the same!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}


	{
		try {
			serialPort1->PortName = rxPort->Text;
			serialPort1->BaudRate = Convert::ToInt32(rxBaudRate->Text);
			serialPort1->DataBits = Convert::ToInt32(rxDataBits->Text);
			serialPort1->StopBits = (StopBits)Enum::Parse((StopBits::typeid), rxStopBits->Text);
			serialPort1->Parity = (Parity)Enum::Parse((Parity::typeid), rxParityBits->Text);
		}
		catch (UnauthorizedAccessException^ err) {
			MessageBox::Show(err->Message, "Error on RX Port: Unauthorized Access", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentOutOfRangeException^ err) {
			MessageBox::Show(err->Message, "Error on RX Port: Argument Out Of Range", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentException^ err) {
			MessageBox::Show(err->Message, "Error on RX Port: Argument", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (IO::IOException^ err) {
			MessageBox::Show(err->Message, "Error on RX Port: IO", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			serialPort1->ReceivedBytesThreshold = Convert::ToInt32(textBoxPacketSize->Text);
		}
		catch (ArgumentOutOfRangeException^ err) {
			MessageBox::Show(err->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			serialPort1->ReceivedBytesThreshold = 1;
			textBoxPacketSize->Text = "1";
		}

	}

	if(!disable->Checked){
		try {
			serialPort2->PortName = txPort->Text;
			serialPort2->BaudRate = Convert::ToInt32(txBaudRate->Text);
			serialPort2->DataBits = Convert::ToInt32(txDataBits->Text);
			serialPort2->StopBits = (StopBits)Enum::Parse((StopBits::typeid), txStopBits->Text);
			serialPort2->Parity = (Parity)Enum::Parse((Parity::typeid), txParityBits->Text);
		}
		catch (UnauthorizedAccessException^ err) {
			MessageBox::Show(err->Message, "Error on TX Port: Unauthorized Access", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentOutOfRangeException^ err) {
			MessageBox::Show(err->Message, "Error on TX Port: Argument Out Of Range", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentException^ err) {
			MessageBox::Show(err->Message, "Error on TX Port: Argument", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (IO::IOException^ err) {
			MessageBox::Show(err->Message, "Error on TX Port: IO", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			serialPort2->Open();
			serialPort2->DiscardOutBuffer();
		}
		catch (...) {
			MessageBox::Show("Error. Check parameters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (serialPort2->IsOpen) { serialPort2->Close(); }
			return;
		}
	}

	{
		try {
			serialPort1->Open();
			serialPort1->DiscardInBuffer();
		}
		catch (...) {
			MessageBox::Show("Error. Check parameters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (serialPort1->IsOpen) { serialPort1->Close(); }
			return;
		}
		
	}

	btnOpen->Enabled=false;
	btnSearchPorts->Enabled = false;
	btnResetSettings->Enabled = false;
	groupBoxPacketSize->Enabled = false;
	groupBoxRX->Enabled = false;
	groupBoxTX->Enabled = false;

	btnClose->Enabled = true;
	btnStartStopComm->Enabled = true;
	progressBar1->Value = 100;
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (serialPort1->IsOpen) {
			serialPort1->Close();
		}
	}
	catch (...) {
		MessageBox::Show("Error. Check parameters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		if (serialPort2->IsOpen) {
			serialPort2->Close();
		}
	
	btnOpen->Enabled = true;
	btnSearchPorts->Enabled = true;
	btnResetSettings->Enabled = true;
	groupBoxPacketSize->Enabled = true;
	groupBoxRX->Enabled = true;
	groupBoxTX->Enabled = true;

	btnClose->Enabled = false;
	btnStartStopComm->Enabled = false;
	progressBar1->Value = 0;
	
}
private: System::Void sameAsReceiver_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sameAsReceiver->Checked) {
		txBaudRate->Text = rxBaudRate->Text;
		txDataBits->Text = rxDataBits->Text;
		txStopBits->Text = rxStopBits->Text;
		txParityBits->Text = rxParityBits->Text;

		txBaudRate->Enabled = false;
		txDataBits->Enabled = false;
		txStopBits->Enabled = false;
		txParityBits->Enabled = false;
	}

	else {
		txBaudRate->Enabled = true;
		txDataBits->Enabled = true;
		txStopBits->Enabled = true;
		txParityBits->Enabled = true;
	}
}
private: System::Void btnSearchPorts_Click(System::Object^ sender, System::EventArgs^ e) {
	array <String^>^ availablePorts = SerialPort::GetPortNames();
	rxPort->Text="";
	txPort->Text="";
	rxPort->Items->Clear();
	txPort->Items->Clear();
	rxPort->Items->AddRange(availablePorts);
	txPort->Items->AddRange(availablePorts);
}
private: System::Void btnResetSettings_Click(System::Object^ sender, System::EventArgs^ e) {
	rxPort->Text = "";
	rxBaudRate->Text="9600";
	rxDataBits->Text = "8";
	rxStopBits->Text = "One";
	rxParityBits->Text = "None";

	txPort->Text = "";
	txBaudRate->Text = "9600";
	txDataBits->Text = "8";
	txStopBits->Text = "One";
	txParityBits->Text = "None";

	sameAsReceiver->Checked = false;
}
private: System::Void rxBaudRate_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sameAsReceiver->Checked) {
		txBaudRate->Text = rxBaudRate->Text;
	}
}
private: System::Void rxDataBits_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sameAsReceiver->Checked) {
		txDataBits->Text = rxDataBits->Text;
	}
}
private: System::Void rxStopBits_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sameAsReceiver->Checked) {
		txStopBits->Text = rxStopBits->Text;
	}
}
private: System::Void rxParityBits_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sameAsReceiver->Checked) {
		txParityBits->Text = rxParityBits->Text;
	}
}
private: System::Void btnCredits_Click(System::Object^ sender, System::EventArgs^ e) {
	Credits^ credits = gcnew Credits;
	credits->ShowDialog();
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Are you sure about that?", "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == (Windows::Forms::DialogResult::No)) {
	   e->Cancel = true;
	}
	if (serialPort1->IsOpen)serialPort1->Close();
	if (serialPort2->IsOpen)serialPort2->Close();
	delete canCommunicate;
	//delete serialPort1;
	//delete serialPort2;
}
private: System::Void disable_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (disable->Checked) {
		txPort->Enabled = false;
		txBaudRate->Enabled = false;
		txDataBits->Enabled = false;
		txStopBits->Enabled = false;
		txParityBits->Enabled = false;
		sameAsReceiver->Enabled = false;
	}

	else {
		txPort->Enabled = true;
		txBaudRate->Enabled = true;
		txDataBits->Enabled = true;
		txStopBits->Enabled = true;
		txParityBits->Enabled = true;
		sameAsReceiver->Enabled = true;
	}
}

private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	//ShowIt^ testDelegate = gcnew ShowIt(this, &MyForm::ShowData);
	//this->BeginInvoke(testDelegate);
	if(!(canCommunicate->CompareTo(true)))this->Invoke(gcnew System::EventHandler(this, &MyForm::ShowData));
}
//private: System::Void ShowData() {
private: System::Void ShowData(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt16(textBoxPacketSize->Text);
	array<Byte>^ dataIn = gcnew array<Byte>(size);
	if (checkBoxShowTime->Checked) {
		DateTime dt = DateTime::Now;
		textBoxData->Text += dt.ToLongTimeString() + "." + dt.Millisecond + " ->	";
	}
	serialPort1->Read(dataIn, 0, size);
	
	//String^ dataStr = System::BitConverter::ToString(dataIn);
	//String^ dataStr = ByteConverter(dataIn, size);
	/*for (int i = 0; i < size; i++) {
		textBoxData->Text +="["+System::BitConverter::ToString(dataIn)+"]";
	}*/
	//textBoxData->Text += "["+ByteConverter(dataIn,size)+"]\r\n";
	
	if (checkBoxAutoScroll->Checked) {
		for (int i = 0; i < size; i++) {
			textBoxData->AppendText("[" + String::Format("{0:X2}", dataIn[i]) + "]");
		}
		textBoxData->AppendText("\r\n");
	}
	else {
		for (int i = 0; i < size; i++) {
			textBoxData->Text += "[" + String::Format("{0:X2}", dataIn[i]) + "]";
		}
		textBoxData->Text += "\r\n";
	}
	

	if (!(disable->Checked)) {
		SendData(dataIn,size);
	}
	
}
private: System::Void SendData(array<Byte>^% dataIn, int size) {
	serialPort2->Write(dataIn,0,size);
}
private: System::Void textBoxData_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

/*private: System::String^ ByteConverter(array<Byte>^% data, int size) {
	String^ result = "";
	for(int i=0;i<size;i++)
	{
		result += String::Format("{0:X2}", data[i]);
	}
	return result;
}*/
private: System::Void btnClearOutput_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxData->Clear();
}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void btnSaveSession_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnStartStopComm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(canCommunicate->CompareTo(true))) {
		canCommunicate = false;
		btnClose->Enabled = true;
		btnStartStopComm->Text = "START COMMUNICATION";
	}
	else{
		canCommunicate = true;
		btnClose->Enabled = false;
		btnStartStopComm->Text = "STOP COMMUNICATION";
	}
}
};

}
