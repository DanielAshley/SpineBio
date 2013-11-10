#pragma once

#include "stdafx.h"

namespace spineBio004 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace ZedGraph;
 
	void CreateGraph(String^ fileName);

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonLoadFile;
	protected: 

	private: System::Windows::Forms::Button^  buttonSendValues;
	private: System::Windows::Forms::Button^  buttonGetValues;
	protected: 


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::TextBox^  textStepSize;
	private: System::Windows::Forms::TextBox^  textNumOfSteps;
	private: System::Windows::Forms::RadioButton^  radioStepSizeNm;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textDwellTime;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textRaiseTime;
	private: System::Windows::Forms::TextBox^  textInitialTorque;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textInitialTorqueTime;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioUnloadingMethodControlled;

	private: System::Windows::Forms::RadioButton^  radioUnloadingMethodSteps;

	private: System::Windows::Forms::TextBox^  textPreLoadFile;
	private: System::Windows::Forms::RadioButton^  radioStepSizeDeg;
	private: System::Windows::Forms::GroupBox^  groupBoxStepSizeUnits;
	private: System::Windows::Forms::Panel^  panelUnloadingMethodChoices;
	private: System::Windows::Forms::Button^  buttonSaveFile;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  buttonCreateGraph;





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
			this->buttonLoadFile = (gcnew System::Windows::Forms::Button());
			this->buttonSendValues = (gcnew System::Windows::Forms::Button());
			this->buttonGetValues = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textStepSize = (gcnew System::Windows::Forms::TextBox());
			this->textNumOfSteps = (gcnew System::Windows::Forms::TextBox());
			this->radioStepSizeNm = (gcnew System::Windows::Forms::RadioButton());
			this->radioStepSizeDeg = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textDwellTime = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textRaiseTime = (gcnew System::Windows::Forms::TextBox());
			this->textInitialTorque = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textInitialTorqueTime = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioUnloadingMethodControlled = (gcnew System::Windows::Forms::RadioButton());
			this->radioUnloadingMethodSteps = (gcnew System::Windows::Forms::RadioButton());
			this->textPreLoadFile = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxStepSizeUnits = (gcnew System::Windows::Forms::GroupBox());
			this->panelUnloadingMethodChoices = (gcnew System::Windows::Forms::Panel());
			this->buttonSaveFile = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonCreateGraph = (gcnew System::Windows::Forms::Button());
			this->groupBoxStepSizeUnits->SuspendLayout();
			this->panelUnloadingMethodChoices->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonLoadFile
			// 
			this->buttonLoadFile->Location = System::Drawing::Point(12, 260);
			this->buttonLoadFile->Name = L"buttonLoadFile";
			this->buttonLoadFile->Size = System::Drawing::Size(60, 23);
			this->buttonLoadFile->TabIndex = 0;
			this->buttonLoadFile->Text = L"Load";
			this->buttonLoadFile->UseVisualStyleBackColor = true;
			this->buttonLoadFile->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// buttonSendValues
			// 
			this->buttonSendValues->Location = System::Drawing::Point(50, 221);
			this->buttonSendValues->Name = L"buttonSendValues";
			this->buttonSendValues->Size = System::Drawing::Size(59, 35);
			this->buttonSendValues->TabIndex = 1;
			this->buttonSendValues->Text = L"Send Values";
			this->buttonSendValues->UseVisualStyleBackColor = true;
			this->buttonSendValues->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// buttonGetValues
			// 
			this->buttonGetValues->Location = System::Drawing::Point(144, 221);
			this->buttonGetValues->Name = L"buttonGetValues";
			this->buttonGetValues->Size = System::Drawing::Size(59, 35);
			this->buttonGetValues->TabIndex = 2;
			this->buttonGetValues->Text = L"Get Values";
			this->buttonGetValues->UseVisualStyleBackColor = true;
			this->buttonGetValues->Click += gcnew System::EventHandler(this, &Form1::buttonGetValues_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Step-size";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"# of Steps";
			// 
			// textStepSize
			// 
			this->textStepSize->Location = System::Drawing::Point(103, 33);
			this->textStepSize->Name = L"textStepSize";
			this->textStepSize->Size = System::Drawing::Size(100, 20);
			this->textStepSize->TabIndex = 8;
			this->textStepSize->Text = L"0";
			// 
			// textNumOfSteps
			// 
			this->textNumOfSteps->Location = System::Drawing::Point(103, 59);
			this->textNumOfSteps->Name = L"textNumOfSteps";
			this->textNumOfSteps->Size = System::Drawing::Size(100, 20);
			this->textNumOfSteps->TabIndex = 9;
			this->textNumOfSteps->Text = L"0";
			// 
			// radioStepSizeNm
			// 
			this->radioStepSizeNm->AutoSize = true;
			this->radioStepSizeNm->Checked = true;
			this->radioStepSizeNm->Location = System::Drawing::Point(6, 19);
			this->radioStepSizeNm->Name = L"radioStepSizeNm";
			this->radioStepSizeNm->Size = System::Drawing::Size(41, 17);
			this->radioStepSizeNm->TabIndex = 10;
			this->radioStepSizeNm->TabStop = true;
			this->radioStepSizeNm->Text = L"Nm";
			this->radioStepSizeNm->UseVisualStyleBackColor = true;
			// 
			// radioStepSizeDeg
			// 
			this->radioStepSizeDeg->AutoSize = true;
			this->radioStepSizeDeg->Location = System::Drawing::Point(47, 19);
			this->radioStepSizeDeg->Name = L"radioStepSizeDeg";
			this->radioStepSizeDeg->Size = System::Drawing::Size(43, 17);
			this->radioStepSizeDeg->TabIndex = 11;
			this->radioStepSizeDeg->Text = L"deg";
			this->radioStepSizeDeg->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Dwell time (sec)";
			// 
			// textDwellTime
			// 
			this->textDwellTime->Location = System::Drawing::Point(103, 85);
			this->textDwellTime->Name = L"textDwellTime";
			this->textDwellTime->Size = System::Drawing::Size(100, 20);
			this->textDwellTime->TabIndex = 13;
			this->textDwellTime->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Raise time (sec)";
			// 
			// textRaiseTime
			// 
			this->textRaiseTime->Location = System::Drawing::Point(103, 111);
			this->textRaiseTime->Name = L"textRaiseTime";
			this->textRaiseTime->Size = System::Drawing::Size(100, 20);
			this->textRaiseTime->TabIndex = 15;
			this->textRaiseTime->Text = L"0";
			// 
			// textInitialTorque
			// 
			this->textInitialTorque->Location = System::Drawing::Point(103, 137);
			this->textInitialTorque->Name = L"textInitialTorque";
			this->textInitialTorque->Size = System::Drawing::Size(100, 20);
			this->textInitialTorque->TabIndex = 16;
			this->textInitialTorque->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Initial Torque";
			// 
			// textInitialTorqueTime
			// 
			this->textInitialTorqueTime->Location = System::Drawing::Point(103, 163);
			this->textInitialTorqueTime->Name = L"textInitialTorqueTime";
			this->textInitialTorqueTime->Size = System::Drawing::Size(100, 20);
			this->textInitialTorqueTime->TabIndex = 18;
			this->textInitialTorqueTime->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Initial Torque Time";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 192);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Unloading Method";
			// 
			// radioUnloadingMethodControlled
			// 
			this->radioUnloadingMethodControlled->AutoSize = true;
			this->radioUnloadingMethodControlled->Location = System::Drawing::Point(61, 3);
			this->radioUnloadingMethodControlled->Name = L"radioUnloadingMethodControlled";
			this->radioUnloadingMethodControlled->Size = System::Drawing::Size(72, 17);
			this->radioUnloadingMethodControlled->TabIndex = 22;
			this->radioUnloadingMethodControlled->Text = L"Controlled";
			this->radioUnloadingMethodControlled->UseVisualStyleBackColor = true;
			// 
			// radioUnloadingMethodSteps
			// 
			this->radioUnloadingMethodSteps->AutoSize = true;
			this->radioUnloadingMethodSteps->Checked = true;
			this->radioUnloadingMethodSteps->Location = System::Drawing::Point(3, 3);
			this->radioUnloadingMethodSteps->Name = L"radioUnloadingMethodSteps";
			this->radioUnloadingMethodSteps->Size = System::Drawing::Size(52, 17);
			this->radioUnloadingMethodSteps->TabIndex = 21;
			this->radioUnloadingMethodSteps->TabStop = true;
			this->radioUnloadingMethodSteps->Text = L"Steps";
			this->radioUnloadingMethodSteps->UseVisualStyleBackColor = true;
			// 
			// textPreLoadFile
			// 
			this->textPreLoadFile->Location = System::Drawing::Point(144, 262);
			this->textPreLoadFile->Name = L"textPreLoadFile";
			this->textPreLoadFile->Size = System::Drawing::Size(155, 20);
			this->textPreLoadFile->TabIndex = 23;
			this->textPreLoadFile->Text = L"testingValues.txt";
			this->textPreLoadFile->TextChanged += gcnew System::EventHandler(this, &Form1::textPreLoadFile_TextChanged);
			// 
			// groupBoxStepSizeUnits
			// 
			this->groupBoxStepSizeUnits->Controls->Add(this->radioStepSizeNm);
			this->groupBoxStepSizeUnits->Controls->Add(this->radioStepSizeDeg);
			this->groupBoxStepSizeUnits->Location = System::Drawing::Point(209, 12);
			this->groupBoxStepSizeUnits->Name = L"groupBoxStepSizeUnits";
			this->groupBoxStepSizeUnits->Size = System::Drawing::Size(96, 41);
			this->groupBoxStepSizeUnits->TabIndex = 24;
			this->groupBoxStepSizeUnits->TabStop = false;
			this->groupBoxStepSizeUnits->Text = L"Units";
			// 
			// panelUnloadingMethodChoices
			// 
			this->panelUnloadingMethodChoices->Controls->Add(this->radioUnloadingMethodSteps);
			this->panelUnloadingMethodChoices->Controls->Add(this->radioUnloadingMethodControlled);
			this->panelUnloadingMethodChoices->Location = System::Drawing::Point(103, 189);
			this->panelUnloadingMethodChoices->Name = L"panelUnloadingMethodChoices";
			this->panelUnloadingMethodChoices->Size = System::Drawing::Size(153, 26);
			this->panelUnloadingMethodChoices->TabIndex = 25;
			// 
			// buttonSaveFile
			// 
			this->buttonSaveFile->Location = System::Drawing::Point(78, 260);
			this->buttonSaveFile->Name = L"buttonSaveFile";
			this->buttonSaveFile->Size = System::Drawing::Size(60, 23);
			this->buttonSaveFile->TabIndex = 26;
			this->buttonSaveFile->Text = L"Save";
			this->buttonSaveFile->UseVisualStyleBackColor = true;
			this->buttonSaveFile->Click += gcnew System::EventHandler(this, &Form1::buttonSaveFile_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(28, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(172, 20);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Quasi-Static Testing";
			// 
			// buttonCreateGraph
			// 
			this->buttonCreateGraph->Location = System::Drawing::Point(221, 78);
			this->buttonCreateGraph->Name = L"buttonCreateGraph";
			this->buttonCreateGraph->Size = System::Drawing::Size(75, 37);
			this->buttonCreateGraph->TabIndex = 28;
			this->buttonCreateGraph->Text = L"Create Graph";
			this->buttonCreateGraph->UseVisualStyleBackColor = true;
			this->buttonCreateGraph->Click += gcnew System::EventHandler(this, &Form1::buttonCreateGraph_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(308, 291);
			this->Controls->Add(this->buttonCreateGraph);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonSaveFile);
			this->Controls->Add(this->panelUnloadingMethodChoices);
			this->Controls->Add(this->groupBoxStepSizeUnits);
			this->Controls->Add(this->textPreLoadFile);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textInitialTorqueTime);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textInitialTorque);
			this->Controls->Add(this->textRaiseTime);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textDwellTime);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textNumOfSteps);
			this->Controls->Add(this->textStepSize);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonGetValues);
			this->Controls->Add(this->buttonSendValues);
			this->Controls->Add(this->buttonLoadFile);
			this->Name = L"Form1";
			this->Text = L"Quasi-Static Testing";
			this->groupBoxStepSizeUnits->ResumeLayout(false);
			this->groupBoxStepSizeUnits->PerformLayout();
			this->panelUnloadingMethodChoices->ResumeLayout(false);
			this->panelUnloadingMethodChoices->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::string fileName;
			 fileName=msclr::interop::marshal_as< std::string >(textPreLoadFile->Text);
			 std::ifstream file_in(fileName.c_str());
			 std::string line;
			 if(file_in.is_open())
			 {
				 std::getline(file_in, line);
				 System::String^ rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textStepSize->Text = rtn;
				 
				 std::getline(file_in, line);				 
				 if(line == "0")
					 radioStepSizeNm->Checked = true;
				 else
					 radioStepSizeDeg->Checked = true;

				 // textNumOfSteps
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textNumOfSteps->Text = rtn;

				 // textDwellTime
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textDwellTime->Text = rtn;

				 // textRaiseTime
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textRaiseTime->Text = rtn;

				 // textInitialTorque
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textInitialTorque->Text = rtn;

				 // textInitialTorqueTime
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textInitialTorqueTime->Text = rtn;

				 std::getline(file_in, line);
				 if(line == "0")
					 radioUnloadingMethodSteps->Checked = true;
				 else
					 radioUnloadingMethodControlled->Checked = true;
			 }
			 else
			 {
				 textStepSize->Text = "0";
				 radioStepSizeNm->Checked = true;
				 textNumOfSteps->Text = "0";
				 textDwellTime->Text = "0";
				 textRaiseTime->Text = "0";
				 textInitialTorque->Text = "0";
				 textInitialTorqueTime->Text = "0";
				 radioUnloadingMethodSteps->Checked = true;
			 }			 
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
/*
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::ofstream file_out("outputValues.txt");
			 if(file_out.is_open())
			 {
				 std::string rtn=msclr::interop::marshal_as< std::string >( textBox1->Text);
				 file_out << rtn << std::endl;
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::ifstream file_in("outputValues.txt");
			 if(file_in.is_open())
			 {
				 std::string rtn;
				 file_in >> rtn;
				 textBox1->Text=msclr::interop::marshal_as< System::String^ >( rtn);
			 }

		 }
*/
private: System::Void textPreLoadFile_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::ofstream file_out("controller.txt");
			 if(file_out.is_open())
			 {
				 // textStepSize
				 std::string rtn=msclr::interop::marshal_as< std::string >( textStepSize->Text);
				 file_out << rtn << std::endl;

				 if(radioStepSizeNm->Checked)
				 {
					 // radioStepSizeNm
					 file_out << "0" << std::endl;
				 }
				 else if(radioStepSizeDeg->Checked)
				 {
					 // radioStepSizeDeg
					 file_out << "1" << std::endl;
				 }
				 else
				 {
					 file_out << "0" << std::endl;
				 }

				 // textNumOfSteps
				 rtn=msclr::interop::marshal_as< std::string >( textNumOfSteps->Text);
				 file_out << rtn << std::endl;

				 // textDwellTime
				 rtn=msclr::interop::marshal_as< std::string >( textDwellTime->Text);
				 file_out << rtn << std::endl;

				 // textRaiseTime
				 rtn=msclr::interop::marshal_as< std::string >( textRaiseTime->Text);
				 file_out << rtn << std::endl;

				 // textInitialTorque
				 rtn=msclr::interop::marshal_as< std::string >( textInitialTorque->Text);
				 file_out << rtn << std::endl;

				 // textInitialTorqueTime
				 rtn=msclr::interop::marshal_as< std::string >( textInitialTorqueTime->Text);
				 file_out << rtn << std::endl;

				 if(radioUnloadingMethodSteps->Checked)
				 {
					 // radioUnloadingMethodSteps
					 file_out << "0" << std::endl;
				 }
				 else if(radioUnloadingMethodControlled->Checked)
				 {
					 // radioUnloadingMethodControlled
					 file_out << "1" << std::endl;
				 }
				 else
				 {
					 file_out << "0" << std::endl;
				 }
			 }
		 }
private: System::Void buttonSaveFile_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::string fileName;
			 fileName=msclr::interop::marshal_as< std::string >(textPreLoadFile->Text);
			 std::ofstream file_out(fileName.c_str());
			 
			 if(file_out.is_open())
			 {
				 // textStepSize
				 std::string rtn=msclr::interop::marshal_as< std::string >( textStepSize->Text);
				 file_out << rtn << std::endl;

				 if(radioStepSizeNm->Checked)
				 {
					 // radioStepSizeNm
					 file_out << "0" << std::endl;
				 }
				 else if(radioStepSizeDeg->Checked)
				 {
					 // radioStepSizeDeg
					 file_out << "1" << std::endl;
				 }
				 else
				 {
					 file_out << "0" << std::endl;
				 }

				 // textNumOfSteps
				 rtn=msclr::interop::marshal_as< std::string >( textNumOfSteps->Text);
				 file_out << rtn << std::endl;

				 // textDwellTime
				 rtn=msclr::interop::marshal_as< std::string >( textDwellTime->Text);
				 file_out << rtn << std::endl;

				 // textRaiseTime
				 rtn=msclr::interop::marshal_as< std::string >( textRaiseTime->Text);
				 file_out << rtn << std::endl;

				 // textInitialTorque
				 rtn=msclr::interop::marshal_as< std::string >( textInitialTorque->Text);
				 file_out << rtn << std::endl;

				 // textInitialTorqueTime
				 rtn=msclr::interop::marshal_as< std::string >( textInitialTorqueTime->Text);
				 file_out << rtn << std::endl;

				 if(radioUnloadingMethodSteps->Checked)
				 {
					 // radioUnloadingMethodSteps
					 file_out << "0" << std::endl;
				 }
				 else if(radioUnloadingMethodControlled->Checked)
				 {
					 // radioUnloadingMethodControlled
					 file_out << "1" << std::endl;
				 }
				 else
				 {
					 file_out << "0" << std::endl;
				 }
			 }
		 }
private: System::Void buttonGetValues_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::ifstream file_in("controller.txt");
			 std::string line;
			 if(file_in.is_open())
			 {
				 std::getline(file_in, line);
				 System::String^ rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textStepSize->Text = rtn;
				 
				 std::getline(file_in, line);				 
				 if(line == "0")
					 radioStepSizeNm->Checked = true;
				 else
					 radioStepSizeDeg->Checked = true;

				 // textNumOfSteps
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textNumOfSteps->Text = rtn;

				 // textDwellTime
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textDwellTime->Text = rtn;

				 // textRaiseTime
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textRaiseTime->Text = rtn;

				 // textInitialTorque
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textInitialTorque->Text = rtn;

				 // textInitialTorqueTime
				 std::getline(file_in, line);
				 rtn=msclr::interop::marshal_as< System::String^ >( line );
				 textInitialTorqueTime->Text = rtn;

				 std::getline(file_in, line);
				 if(line == "0")
					 radioUnloadingMethodSteps->Checked = true;
				 else
					 radioUnloadingMethodControlled->Checked = true;
			 }
			 else
			 {
				 //#Debug - This will trigger if the controller.txt file isn't present
			 }
		 }
private: System::Void buttonCreateGraph_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateGraph("TestGraph.png");
		 }
};


void CreateGraph(String^ fileName)
	{
		// Create a GraphPane is really all you have to do
		// when using ZedGraph in a console application
		RectangleF rect = RectangleF( 0, 0, 640, 480 );
		GraphPane ^myPane = gcnew GraphPane( rect, "Quasi-Static", "X Titel", "Y Titel" );

		// Make up some data points based on the Sine function
		PointPairList ^list = gcnew PointPairList();
		PointPairList ^list2 = gcnew PointPairList();
		float StepSize;
		bool StepSizeNm;
		int NumOfSteps;
		float DwellTime;
		float RaiseTime;
		float InitialTorque;
		float InitialTorqueTime;
		bool UnloadingMethodSteps;

		// Get values from saved controller file
		std::ifstream file_in("controller.txt");
		std::string line;
		if(file_in.is_open())
		{
			std::getline(file_in, line);
			StepSize = atof(line.c_str());

			std::getline(file_in, line);				 
			if(line == "0")
				StepSizeNm = true;
			else
				StepSizeNm = false;

			// textNumOfSteps
			std::getline(file_in, line);
			NumOfSteps = atoi(line.c_str());

			// textDwellTime
			std::getline(file_in, line);
			DwellTime = atof(line.c_str());

			// textRaiseTime
			std::getline(file_in, line);
			RaiseTime = atof(line.c_str());

			// textInitialTorque
			std::getline(file_in, line);
			InitialTorque = atof(line.c_str());

			// textInitialTorqueTime
			std::getline(file_in, line);
			InitialTorqueTime = atof(line.c_str());

			std::getline(file_in, line);
			if(line == "0")
				UnloadingMethodSteps = true;
			else
				UnloadingMethodSteps = false;
		}
		else
		{
			//#Debug - This will trigger if the controller.txt file isn't present
		}
		
		double time=0.0;
		double expectedTorque = 0.0;
		list->Add( time, expectedTorque );

		time += InitialTorqueTime;
		expectedTorque += InitialTorque;
		list->Add( time, expectedTorque );

		int numSteps = NumOfSteps;
		while(numSteps > 0)
		{
			time += DwellTime;
			list->Add( time, expectedTorque );

			time += RaiseTime;
			expectedTorque += StepSize;
			list->Add( time, expectedTorque );
			
			numSteps--;
		}

		time += DwellTime;
		list->Add( time, expectedTorque );

		if(UnloadingMethodSteps)
		{
			numSteps = NumOfSteps;
			while(numSteps > 0)
			{
				time += RaiseTime;
				expectedTorque -= StepSize;
				list->Add( time, expectedTorque );
			
				time += DwellTime;
				list->Add( time, expectedTorque );
				numSteps--;
			}
		}
		else
		{
			time += (DwellTime+RaiseTime)*NumOfSteps;
			expectedTorque -= StepSize*NumOfSteps;
			list->Add( time, expectedTorque );
		}
		time += DwellTime;
		list->Add( time, expectedTorque );




		list2->Add( time, expectedTorque );
		
		
		

		// Set the titles and axis labels
		myPane->Title->Text = L"Quasi-Static Testing";
		myPane->XAxis->Title->Text = L"Time(sec)";
		if(StepSizeNm)
			myPane->YAxis->Title->Text = L"Torque(Nm)";
		else
			myPane->YAxis->Title->Text = L"Torque(Deg)";
		
		// Generate a red curve with diamond symbols, and "Alpha" in the legend
		LineItem ^myCurve = myPane->AddCurve( L"Actual",
			list, Color::Red, SymbolType::Diamond );
		// Fill the symbols with white
		myCurve->Symbol->Fill = gcnew Fill( Color::White );
	 
		// Generate a blue curve with circle symbols, and "Beta" in the legend
		myCurve = myPane->AddCurve( L"Planned",
			list2, Color::Blue, SymbolType::Circle );
		// Fill the symbols with white
		myCurve->Symbol->Fill = gcnew Fill( Color::White );
		// Associate this curve with the Y2 axis
		myCurve->IsY2Axis = true;
	 
		// Show the x axis grid
		myPane->XAxis->MajorGrid->IsVisible = true;
	 
		// Make the Y axis scale red
		myPane->YAxis->Scale->FontSpec->FontColor = Color::Red;
		myPane->YAxis->Title->FontSpec->FontColor = Color::Red;
		// turn off the opposite tics so the Y tics don't show up on the Y2 axis
		myPane->YAxis->MajorTic->IsOpposite = false;
		myPane->YAxis->MinorTic->IsOpposite = false;
		// Don't display the Y zero line
		myPane->YAxis->MajorGrid->IsZeroLine = false;
		// Align the Y axis labels so they are flush to the axis
		myPane->YAxis->Scale->Align = AlignP::Inside;
		// Manually set the axis range
		expectedTorque = StepSize*NumOfSteps*1.2;
		myPane->YAxis->Scale->Min = -1;
		myPane->YAxis->Scale->Max = expectedTorque;

		time = (DwellTime+RaiseTime)*2*NumOfSteps*1.3;
		myPane->XAxis->Scale->Min = -1;
		myPane->XAxis->Scale->Max = time;


		// Enable the Y2 axis display
		myPane->Y2Axis->IsVisible = true;
		// Make the Y2 axis scale blue
		myPane->Y2Axis->Scale->FontSpec->FontColor = Color::Blue;
		myPane->Y2Axis->Title->FontSpec->FontColor = Color::Blue;
		// turn off the opposite tics so the Y2 tics don't show up on the Y axis
		myPane->Y2Axis->MajorTic->IsOpposite = false;
		myPane->Y2Axis->MinorTic->IsOpposite = false;
		// Display the Y2 axis grid lines
		myPane->Y2Axis->MajorGrid->IsVisible = true;
		// Align the Y2 axis labels so they are flush to the axis
		myPane->Y2Axis->Scale->Align = AlignP::Inside;
	 
		// Fill the axis background with a gradient
		myPane->Chart->Fill = gcnew Fill( Color::White, Color::LightGray, 45.0f );
	 
		Bitmap^ bm = gcnew Bitmap( 1, 1 );
		Graphics^ g = Graphics::FromImage( bm );
		myPane->AxisChange( g );
		// Retrieve the image
		Image^ img = myPane->GetImage();
		// Save image as PNG
		img->Save(fileName, ImageFormat::Png);//, ImageFormat::Bmp);
	}

}

