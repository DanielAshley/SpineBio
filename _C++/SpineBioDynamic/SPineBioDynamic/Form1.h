#pragma once


namespace SPineBioDynamic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  buttonConnect;
	protected: 
	private: System::Windows::Forms::Button^  buttonPreStart;
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::Label^  labelAmplitude;
	private: System::Windows::Forms::TextBox^  textBoxAmplitude;
	private: System::Windows::Forms::GroupBox^  groupBoxStepSizeUnits;
	private: System::Windows::Forms::RadioButton^  radioButtonDeg;
	private: System::Windows::Forms::RadioButton^  radioButtonNm;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxNumOfCycles;
	private: System::Windows::Forms::TextBox^  textBoxCycleTime;
	private: System::Windows::Forms::Label^  labelCycleTime;
	private: System::Windows::Forms::TextBox^  textBoxInitialTorque;
	private: System::Windows::Forms::Label^  labelInitialTorque;
	private: System::Windows::Forms::TextBox^  textBoxRaiseTime;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelDynamicTesting;

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
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->buttonPreStart = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelAmplitude = (gcnew System::Windows::Forms::Label());
			this->textBoxAmplitude = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxStepSizeUnits = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonDeg = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNm = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxNumOfCycles = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCycleTime = (gcnew System::Windows::Forms::TextBox());
			this->labelCycleTime = (gcnew System::Windows::Forms::Label());
			this->textBoxInitialTorque = (gcnew System::Windows::Forms::TextBox());
			this->labelInitialTorque = (gcnew System::Windows::Forms::Label());
			this->textBoxRaiseTime = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelDynamicTesting = (gcnew System::Windows::Forms::Label());
			this->groupBoxStepSizeUnits->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(188, 78);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(75, 23);
			this->buttonConnect->TabIndex = 0;
			this->buttonConnect->Text = L"Connect";
			this->buttonConnect->UseVisualStyleBackColor = true;
			// 
			// buttonPreStart
			// 
			this->buttonPreStart->Location = System::Drawing::Point(188, 107);
			this->buttonPreStart->Name = L"buttonPreStart";
			this->buttonPreStart->Size = System::Drawing::Size(75, 23);
			this->buttonPreStart->TabIndex = 1;
			this->buttonPreStart->Text = L"Pre-Start";
			this->buttonPreStart->UseVisualStyleBackColor = true;
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(188, 136);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 2;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			// 
			// labelAmplitude
			// 
			this->labelAmplitude->AutoSize = true;
			this->labelAmplitude->Location = System::Drawing::Point(12, 45);
			this->labelAmplitude->Name = L"labelAmplitude";
			this->labelAmplitude->Size = System::Drawing::Size(53, 13);
			this->labelAmplitude->TabIndex = 3;
			this->labelAmplitude->Text = L"Amplitude";
			// 
			// textBoxAmplitude
			// 
			this->textBoxAmplitude->Location = System::Drawing::Point(82, 42);
			this->textBoxAmplitude->Name = L"textBoxAmplitude";
			this->textBoxAmplitude->Size = System::Drawing::Size(100, 20);
			this->textBoxAmplitude->TabIndex = 4;
			// 
			// groupBoxStepSizeUnits
			// 
			this->groupBoxStepSizeUnits->Controls->Add(this->radioButtonDeg);
			this->groupBoxStepSizeUnits->Controls->Add(this->radioButtonNm);
			this->groupBoxStepSizeUnits->Location = System::Drawing::Point(188, 24);
			this->groupBoxStepSizeUnits->Name = L"groupBoxStepSizeUnits";
			this->groupBoxStepSizeUnits->Size = System::Drawing::Size(100, 48);
			this->groupBoxStepSizeUnits->TabIndex = 13;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"# of Cycles";
			// 
			// textBoxNumOfCycles
			// 
			this->textBoxNumOfCycles->Location = System::Drawing::Point(82, 68);
			this->textBoxNumOfCycles->Name = L"textBoxNumOfCycles";
			this->textBoxNumOfCycles->Size = System::Drawing::Size(100, 20);
			this->textBoxNumOfCycles->TabIndex = 15;
			// 
			// textBoxCycleTime
			// 
			this->textBoxCycleTime->Location = System::Drawing::Point(82, 94);
			this->textBoxCycleTime->Name = L"textBoxCycleTime";
			this->textBoxCycleTime->Size = System::Drawing::Size(100, 20);
			this->textBoxCycleTime->TabIndex = 17;
			// 
			// labelCycleTime
			// 
			this->labelCycleTime->AutoSize = true;
			this->labelCycleTime->Location = System::Drawing::Point(12, 97);
			this->labelCycleTime->Name = L"labelCycleTime";
			this->labelCycleTime->Size = System::Drawing::Size(59, 13);
			this->labelCycleTime->TabIndex = 16;
			this->labelCycleTime->Text = L"Cycle Time";
			// 
			// textBoxInitialTorque
			// 
			this->textBoxInitialTorque->Location = System::Drawing::Point(82, 120);
			this->textBoxInitialTorque->Name = L"textBoxInitialTorque";
			this->textBoxInitialTorque->Size = System::Drawing::Size(100, 20);
			this->textBoxInitialTorque->TabIndex = 19;
			// 
			// labelInitialTorque
			// 
			this->labelInitialTorque->AutoSize = true;
			this->labelInitialTorque->Location = System::Drawing::Point(12, 123);
			this->labelInitialTorque->Name = L"labelInitialTorque";
			this->labelInitialTorque->Size = System::Drawing::Size(68, 13);
			this->labelInitialTorque->TabIndex = 18;
			this->labelInitialTorque->Text = L"Initial Torque";
			// 
			// textBoxRaiseTime
			// 
			this->textBoxRaiseTime->Location = System::Drawing::Point(82, 146);
			this->textBoxRaiseTime->Name = L"textBoxRaiseTime";
			this->textBoxRaiseTime->Size = System::Drawing::Size(100, 20);
			this->textBoxRaiseTime->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Raise Time";
			// 
			// labelDynamicTesting
			// 
			this->labelDynamicTesting->AutoSize = true;
			this->labelDynamicTesting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDynamicTesting->Location = System::Drawing::Point(12, 9);
			this->labelDynamicTesting->Name = L"labelDynamicTesting";
			this->labelDynamicTesting->Size = System::Drawing::Size(141, 20);
			this->labelDynamicTesting->TabIndex = 22;
			this->labelDynamicTesting->Text = L"Dynamic Testing";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 185);
			this->Controls->Add(this->labelDynamicTesting);
			this->Controls->Add(this->textBoxRaiseTime);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxInitialTorque);
			this->Controls->Add(this->labelInitialTorque);
			this->Controls->Add(this->textBoxCycleTime);
			this->Controls->Add(this->labelCycleTime);
			this->Controls->Add(this->textBoxNumOfCycles);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBoxStepSizeUnits);
			this->Controls->Add(this->textBoxAmplitude);
			this->Controls->Add(this->labelAmplitude);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->buttonPreStart);
			this->Controls->Add(this->buttonConnect);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBoxStepSizeUnits->ResumeLayout(false);
			this->groupBoxStepSizeUnits->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
 
};
}

