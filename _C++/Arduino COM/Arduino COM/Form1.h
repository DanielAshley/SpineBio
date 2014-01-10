#pragma once

namespace ArduinoCOM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::IO::Ports::SerialPort^  arduino;
	protected: 
	private: System::Windows::Forms::Button^  Connect;
	private: System::Windows::Forms::TextBox^  ReadCOM;
	private: System::Windows::Forms::TextBox^  portValue;
	private: System::Windows::Forms::Timer^  continuousRead;
	private: System::Windows::Forms::Button^  buttonDisconnect;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->arduino = (gcnew System::IO::Ports::SerialPort(this->components));
			this->Connect = (gcnew System::Windows::Forms::Button());
			this->ReadCOM = (gcnew System::Windows::Forms::TextBox());
			this->portValue = (gcnew System::Windows::Forms::TextBox());
			this->continuousRead = (gcnew System::Windows::Forms::Timer(this->components));
			this->buttonDisconnect = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// arduino
			// 
			this->arduino->PortName = L"COM3";
			// 
			// Connect
			// 
			this->Connect->Location = System::Drawing::Point(12, 38);
			this->Connect->Name = L"Connect";
			this->Connect->Size = System::Drawing::Size(75, 23);
			this->Connect->TabIndex = 0;
			this->Connect->Text = L"Connect";
			this->Connect->UseVisualStyleBackColor = true;
			this->Connect->Click += gcnew System::EventHandler(this, &Form1::Connect_Click);
			// 
			// ReadCOM
			// 
			this->ReadCOM->Enabled = false;
			this->ReadCOM->Location = System::Drawing::Point(12, 67);
			this->ReadCOM->Name = L"ReadCOM";
			this->ReadCOM->Size = System::Drawing::Size(156, 20);
			this->ReadCOM->TabIndex = 1;
			this->ReadCOM->Text = L"Read";
			// 
			// portValue
			// 
			this->portValue->Location = System::Drawing::Point(12, 12);
			this->portValue->Name = L"portValue";
			this->portValue->Size = System::Drawing::Size(71, 20);
			this->portValue->TabIndex = 2;
			this->portValue->Text = L"COM3";
			// 
			// continuousRead
			// 
			this->continuousRead->Tick += gcnew System::EventHandler(this, &Form1::continuousRead_Tick);
			// 
			// buttonDisconnect
			// 
			this->buttonDisconnect->Location = System::Drawing::Point(93, 38);
			this->buttonDisconnect->Name = L"buttonDisconnect";
			this->buttonDisconnect->Size = System::Drawing::Size(75, 23);
			this->buttonDisconnect->TabIndex = 3;
			this->buttonDisconnect->Text = L"Disconnect";
			this->buttonDisconnect->UseVisualStyleBackColor = true;
			this->buttonDisconnect->Click += gcnew System::EventHandler(this, &Form1::buttonDisconnect_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->buttonDisconnect);
			this->Controls->Add(this->portValue);
			this->Controls->Add(this->ReadCOM);
			this->Controls->Add(this->Connect);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Connect_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->arduino->PortName = this->portValue->Text;
				 this->arduino->Open();
				 this->continuousRead->Enabled = true;
				 this->arduino->DiscardInBuffer();
			 }
	private: System::Void continuousRead_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->arduino->DiscardInBuffer();
				 while(this->arduino->ReadBufferSize != 0)
					 this->ReadCOM->Text = this->arduino->ReadLine();
			 }
	private: System::Void buttonDisconnect_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->continuousRead->Enabled = false;
				 this->arduino->Close();
			 }
};
}