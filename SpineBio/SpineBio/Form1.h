#pragma once

namespace SpineBio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	client_tcpsocket sock;

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
	private: System::Windows::Forms::TextBox^  textBoxStepSize;
	private: System::Windows::Forms::TextBox^  textBoxNumOfSteps;
	private: System::Windows::Forms::TextBox^  textBoxDwellTime;
	private: System::Windows::Forms::TextBox^  textBoxInitialTorqueTime;
	protected: 

	protected: 



	private: System::Windows::Forms::TextBox^  textBoxInitialTorque;

	private: System::Windows::Forms::TextBox^  textBoxRaiseTime;
	private: System::Windows::Forms::Label^  labelStepSize;
	private: System::Windows::Forms::Label^  labelNumOfSteps;
	private: System::Windows::Forms::Label^  labelRaiseTime;

	private: System::Windows::Forms::Label^  labelDwellTime;
	private: System::Windows::Forms::Label^  labelInitialTorqueTime;
	private: System::Windows::Forms::Label^  labelInitialTorque;
	private: System::Windows::Forms::GroupBox^  groupBoxStepSizeUnits;
	private: System::Windows::Forms::RadioButton^  radioButtonDeg;
	private: System::Windows::Forms::RadioButton^  radioButtonNm;
	private: System::Windows::Forms::Label^  labelUnloadingMethod;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  radioButtonSteps;
	private: System::Windows::Forms::RadioButton^  radioButtonControlled;
	private: System::Windows::Forms::Button^  buttonRun;

	private: System::Windows::Forms::Button^  buttonGetValues;
	private: System::Windows::Forms::Label^  labelQuasiStaticTesting;
	private: System::Windows::Forms::ProgressBar^  progressBar1;

	//private: System::Net::Sockets::TcpClient sock;


	private: System::Windows::Forms::Button^  buttonConnect;
	private: System::Windows::Forms::TextBox^  textBoxConnect;
	private: System::Windows::Forms::Button^  buttonSend;




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
			this->textBoxStepSize = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumOfSteps = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDwellTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxInitialTorqueTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxInitialTorque = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRaiseTime = (gcnew System::Windows::Forms::TextBox());
			this->labelStepSize = (gcnew System::Windows::Forms::Label());
			this->labelNumOfSteps = (gcnew System::Windows::Forms::Label());
			this->labelRaiseTime = (gcnew System::Windows::Forms::Label());
			this->labelDwellTime = (gcnew System::Windows::Forms::Label());
			this->labelInitialTorqueTime = (gcnew System::Windows::Forms::Label());
			this->labelInitialTorque = (gcnew System::Windows::Forms::Label());
			this->groupBoxStepSizeUnits = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonDeg = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNm = (gcnew System::Windows::Forms::RadioButton());
			this->labelUnloadingMethod = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonControlled = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSteps = (gcnew System::Windows::Forms::RadioButton());
			this->buttonRun = (gcnew System::Windows::Forms::Button());
			this->buttonGetValues = (gcnew System::Windows::Forms::Button());
			this->labelQuasiStaticTesting = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->textBoxConnect = (gcnew System::Windows::Forms::TextBox());
			this->buttonSend = (gcnew System::Windows::Forms::Button());
			this->groupBoxStepSizeUnits->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxStepSize
			// 
			this->textBoxStepSize->Location = System::Drawing::Point(108, 28);
			this->textBoxStepSize->Name = L"textBoxStepSize";
			this->textBoxStepSize->Size = System::Drawing::Size(100, 20);
			this->textBoxStepSize->TabIndex = 0;
			this->textBoxStepSize->Text = L"0";
			// 
			// textBoxNumOfSteps
			// 
			this->textBoxNumOfSteps->Location = System::Drawing::Point(108, 54);
			this->textBoxNumOfSteps->Name = L"textBoxNumOfSteps";
			this->textBoxNumOfSteps->Size = System::Drawing::Size(100, 20);
			this->textBoxNumOfSteps->TabIndex = 1;
			this->textBoxNumOfSteps->Text = L"0";
			// 
			// textBoxDwellTime
			// 
			this->textBoxDwellTime->Location = System::Drawing::Point(108, 80);
			this->textBoxDwellTime->Name = L"textBoxDwellTime";
			this->textBoxDwellTime->Size = System::Drawing::Size(100, 20);
			this->textBoxDwellTime->TabIndex = 2;
			this->textBoxDwellTime->Text = L"0";
			// 
			// textBoxInitialTorqueTime
			// 
			this->textBoxInitialTorqueTime->Location = System::Drawing::Point(108, 158);
			this->textBoxInitialTorqueTime->Name = L"textBoxInitialTorqueTime";
			this->textBoxInitialTorqueTime->Size = System::Drawing::Size(100, 20);
			this->textBoxInitialTorqueTime->TabIndex = 5;
			this->textBoxInitialTorqueTime->Text = L"0";
			// 
			// textBoxInitialTorque
			// 
			this->textBoxInitialTorque->Location = System::Drawing::Point(108, 132);
			this->textBoxInitialTorque->Name = L"textBoxInitialTorque";
			this->textBoxInitialTorque->Size = System::Drawing::Size(100, 20);
			this->textBoxInitialTorque->TabIndex = 4;
			this->textBoxInitialTorque->Text = L"0";
			// 
			// textBoxRaiseTime
			// 
			this->textBoxRaiseTime->Location = System::Drawing::Point(108, 106);
			this->textBoxRaiseTime->Name = L"textBoxRaiseTime";
			this->textBoxRaiseTime->Size = System::Drawing::Size(100, 20);
			this->textBoxRaiseTime->TabIndex = 3;
			this->textBoxRaiseTime->Text = L"0";
			// 
			// labelStepSize
			// 
			this->labelStepSize->AutoSize = true;
			this->labelStepSize->Location = System::Drawing::Point(52, 31);
			this->labelStepSize->Name = L"labelStepSize";
			this->labelStepSize->Size = System::Drawing::Size(50, 13);
			this->labelStepSize->TabIndex = 6;
			this->labelStepSize->Text = L"Step-size";
			// 
			// labelNumOfSteps
			// 
			this->labelNumOfSteps->AutoSize = true;
			this->labelNumOfSteps->Location = System::Drawing::Point(46, 57);
			this->labelNumOfSteps->Name = L"labelNumOfSteps";
			this->labelNumOfSteps->Size = System::Drawing::Size(56, 13);
			this->labelNumOfSteps->TabIndex = 7;
			this->labelNumOfSteps->Text = L"# of Steps";
			// 
			// labelRaiseTime
			// 
			this->labelRaiseTime->AutoSize = true;
			this->labelRaiseTime->Location = System::Drawing::Point(16, 109);
			this->labelRaiseTime->Name = L"labelRaiseTime";
			this->labelRaiseTime->Size = System::Drawing::Size(86, 13);
			this->labelRaiseTime->TabIndex = 9;
			this->labelRaiseTime->Text = L"Raise Time (sec)";
			// 
			// labelDwellTime
			// 
			this->labelDwellTime->AutoSize = true;
			this->labelDwellTime->Location = System::Drawing::Point(17, 83);
			this->labelDwellTime->Name = L"labelDwellTime";
			this->labelDwellTime->Size = System::Drawing::Size(85, 13);
			this->labelDwellTime->TabIndex = 8;
			this->labelDwellTime->Text = L"Dwell Time (sec)";
			// 
			// labelInitialTorqueTime
			// 
			this->labelInitialTorqueTime->AutoSize = true;
			this->labelInitialTorqueTime->Location = System::Drawing::Point(8, 161);
			this->labelInitialTorqueTime->Name = L"labelInitialTorqueTime";
			this->labelInitialTorqueTime->Size = System::Drawing::Size(94, 13);
			this->labelInitialTorqueTime->TabIndex = 11;
			this->labelInitialTorqueTime->Text = L"Initial Torque Time";
			// 
			// labelInitialTorque
			// 
			this->labelInitialTorque->AutoSize = true;
			this->labelInitialTorque->Location = System::Drawing::Point(34, 135);
			this->labelInitialTorque->Name = L"labelInitialTorque";
			this->labelInitialTorque->Size = System::Drawing::Size(68, 13);
			this->labelInitialTorque->TabIndex = 10;
			this->labelInitialTorque->Text = L"Initial Torque";
			// 
			// groupBoxStepSizeUnits
			// 
			this->groupBoxStepSizeUnits->Controls->Add(this->radioButtonDeg);
			this->groupBoxStepSizeUnits->Controls->Add(this->radioButtonNm);
			this->groupBoxStepSizeUnits->Location = System::Drawing::Point(214, 12);
			this->groupBoxStepSizeUnits->Name = L"groupBoxStepSizeUnits";
			this->groupBoxStepSizeUnits->Size = System::Drawing::Size(100, 48);
			this->groupBoxStepSizeUnits->TabIndex = 12;
			this->groupBoxStepSizeUnits->TabStop = false;
			this->groupBoxStepSizeUnits->Text = L"Units";
			// 
			// radioButtonDeg
			// 
			this->radioButtonDeg->AutoSize = true;
			this->radioButtonDeg->Location = System::Drawing::Point(51, 19);
			this->radioButtonDeg->Name = L"radioButtonDeg";
			this->radioButtonDeg->Size = System::Drawing::Size(45, 17);
			this->radioButtonDeg->TabIndex = 1;
			this->radioButtonDeg->TabStop = true;
			this->radioButtonDeg->Text = L"Deg";
			this->radioButtonDeg->UseVisualStyleBackColor = true;
			// 
			// radioButtonNm
			// 
			this->radioButtonNm->AutoSize = true;
			this->radioButtonNm->Location = System::Drawing::Point(6, 19);
			this->radioButtonNm->Name = L"radioButtonNm";
			this->radioButtonNm->Size = System::Drawing::Size(41, 17);
			this->radioButtonNm->TabIndex = 0;
			this->radioButtonNm->TabStop = true;
			this->radioButtonNm->Text = L"Nm";
			this->radioButtonNm->UseVisualStyleBackColor = true;
			// 
			// labelUnloadingMethod
			// 
			this->labelUnloadingMethod->AutoSize = true;
			this->labelUnloadingMethod->Location = System::Drawing::Point(8, 183);
			this->labelUnloadingMethod->Name = L"labelUnloadingMethod";
			this->labelUnloadingMethod->Size = System::Drawing::Size(94, 13);
			this->labelUnloadingMethod->TabIndex = 13;
			this->labelUnloadingMethod->Text = L"Unloading Method";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButtonControlled);
			this->panel1->Controls->Add(this->radioButtonSteps);
			this->panel1->Location = System::Drawing::Point(108, 184);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(139, 26);
			this->panel1->TabIndex = 14;
			// 
			// radioButtonControlled
			// 
			this->radioButtonControlled->AutoSize = true;
			this->radioButtonControlled->Location = System::Drawing::Point(58, 3);
			this->radioButtonControlled->Name = L"radioButtonControlled";
			this->radioButtonControlled->Size = System::Drawing::Size(72, 17);
			this->radioButtonControlled->TabIndex = 1;
			this->radioButtonControlled->TabStop = true;
			this->radioButtonControlled->Text = L"Controlled";
			this->radioButtonControlled->UseVisualStyleBackColor = true;
			// 
			// radioButtonSteps
			// 
			this->radioButtonSteps->AutoSize = true;
			this->radioButtonSteps->Location = System::Drawing::Point(3, 3);
			this->radioButtonSteps->Name = L"radioButtonSteps";
			this->radioButtonSteps->Size = System::Drawing::Size(52, 17);
			this->radioButtonSteps->TabIndex = 0;
			this->radioButtonSteps->TabStop = true;
			this->radioButtonSteps->Text = L"Steps";
			this->radioButtonSteps->UseVisualStyleBackColor = true;
			// 
			// buttonRun
			// 
			this->buttonRun->Location = System::Drawing::Point(214, 119);
			this->buttonRun->Name = L"buttonRun";
			this->buttonRun->Size = System::Drawing::Size(100, 33);
			this->buttonRun->TabIndex = 15;
			this->buttonRun->Text = L"Run";
			this->buttonRun->UseVisualStyleBackColor = true;
			this->buttonRun->Click += gcnew System::EventHandler(this, &Form1::buttonRun_Click);
			// 
			// buttonGetValues
			// 
			this->buttonGetValues->BackColor = System::Drawing::Color::Red;
			this->buttonGetValues->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonGetValues->Location = System::Drawing::Point(12, 222);
			this->buttonGetValues->Name = L"buttonGetValues";
			this->buttonGetValues->Size = System::Drawing::Size(298, 96);
			this->buttonGetValues->TabIndex = 16;
			this->buttonGetValues->Text = L"STOP";
			this->buttonGetValues->UseVisualStyleBackColor = false;
			// 
			// labelQuasiStaticTesting
			// 
			this->labelQuasiStaticTesting->AutoSize = true;
			this->labelQuasiStaticTesting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelQuasiStaticTesting->Location = System::Drawing::Point(36, 5);
			this->labelQuasiStaticTesting->Name = L"labelQuasiStaticTesting";
			this->labelQuasiStaticTesting->Size = System::Drawing::Size(172, 20);
			this->labelQuasiStaticTesting->TabIndex = 17;
			this->labelQuasiStaticTesting->Text = L"Quasi-Static Testing";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(214, 158);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 20);
			this->progressBar1->TabIndex = 18;
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(214, 66);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(100, 23);
			this->buttonConnect->TabIndex = 19;
			this->buttonConnect->Text = L"Connect";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &Form1::buttonConnect_Click);
			// 
			// textBoxConnect
			// 
			this->textBoxConnect->Enabled = false;
			this->textBoxConnect->Location = System::Drawing::Point(214, 95);
			this->textBoxConnect->Name = L"textBoxConnect";
			this->textBoxConnect->Size = System::Drawing::Size(100, 20);
			this->textBoxConnect->TabIndex = 20;
			this->textBoxConnect->Text = L"NC";
			// 
			// buttonSend
			// 
			this->buttonSend->Location = System::Drawing::Point(253, 184);
			this->buttonSend->Name = L"buttonSend";
			this->buttonSend->Size = System::Drawing::Size(57, 26);
			this->buttonSend->TabIndex = 21;
			this->buttonSend->Text = L"send";
			this->buttonSend->UseVisualStyleBackColor = true;
			this->buttonSend->Click += gcnew System::EventHandler(this, &Form1::buttonSend_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 330);
			this->Controls->Add(this->buttonSend);
			this->Controls->Add(this->textBoxConnect);
			this->Controls->Add(this->buttonConnect);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->labelQuasiStaticTesting);
			this->Controls->Add(this->buttonGetValues);
			this->Controls->Add(this->buttonRun);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelUnloadingMethod);
			this->Controls->Add(this->groupBoxStepSizeUnits);
			this->Controls->Add(this->labelInitialTorqueTime);
			this->Controls->Add(this->labelInitialTorque);
			this->Controls->Add(this->labelRaiseTime);
			this->Controls->Add(this->labelDwellTime);
			this->Controls->Add(this->labelNumOfSteps);
			this->Controls->Add(this->labelStepSize);
			this->Controls->Add(this->textBoxInitialTorqueTime);
			this->Controls->Add(this->textBoxInitialTorque);
			this->Controls->Add(this->textBoxRaiseTime);
			this->Controls->Add(this->textBoxDwellTime);
			this->Controls->Add(this->textBoxNumOfSteps);
			this->Controls->Add(this->textBoxStepSize);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBoxStepSizeUnits->ResumeLayout(false);
			this->groupBoxStepSizeUnits->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: bool setupSocket()
			 {
				 sock.open("192.168.1.2",10002);
				 this->textBoxConnect->Text = "Socket Open";
				 return sock.connected();
			 }

	public: bool stop(){
				char command2[] = "stop";
				return sendPLC(command2, 5);
			}

	private: bool sendPLC(char *buffer, size_t length){
				 size_t s;
				 if(sock.can_write())
				 {
					 s = sock.write(buffer,length);
				 }
				 if(s == length)
					 return true;
				 else
					return false;
			 }

	 private: String^ getPLC(){
				return "1";
				// sock.
			 }

	private: System::Void buttonRun_Click(System::Object^  sender, System::EventArgs^  e) {

			 }


	private: System::Void buttonConnect_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(setupSocket())
				 {
					 this->textBoxConnect->Text = "Connected";
				 }
				 else
				 {
					 this->textBoxConnect->Text = "Not Connected";
				 }
			 }
	private: System::Void buttonSend_Click(System::Object^  sender, System::EventArgs^  e) {
				 int count = 0;
				 while(sock.connected())
				 {
					 if(sock.can_write())
					 {
						 
						 //this->textBoxConnect->Text = "Passed can_write test";
						 char def[5];
						 def[0] = 255;
						 
						 def[1] = 1;
						
						 def[2] = 5;
						 sock.write(def, 5);
						 Sleep(2000);
						 //this->textBoxConnect->Text = count.ToString();
					 }
					 else
						 this->textBoxConnect->Text = "Failed can_write test";
				 }
				 this->textBoxConnect->Text = "Failed connection test";
			 }
};

}

