#pragma once
#include "ZavdClass.h"

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxX;
	private: System::Windows::Forms::TextBox^ textBoxY;
	private: System::Windows::Forms::TextBox^ textBoxZ;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBoxB;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(91, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Число X:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Число Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Число Z:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Значення a:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Значення b:";
			// 
			// textBoxX
			// 
			this->textBoxX->Location = System::Drawing::Point(178, 33);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(100, 22);
			this->textBoxX->TabIndex = 6;
			// 
			// textBoxY
			// 
			this->textBoxY->Location = System::Drawing::Point(178, 68);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(100, 22);
			this->textBoxY->TabIndex = 7;
			// 
			// textBoxZ
			// 
			this->textBoxZ->Location = System::Drawing::Point(178, 102);
			this->textBoxZ->Name = L"textBoxZ";
			this->textBoxZ->Size = System::Drawing::Size(100, 22);
			this->textBoxZ->TabIndex = 8;
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(178, 151);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(100, 22);
			this->textBoxA->TabIndex = 9;
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(178, 180);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(100, 22);
			this->textBoxB->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->textBoxZ);
			this->Controls->Add(this->textBoxY);
			this->Controls->Add(this->textBoxX);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = System::Convert::ToDouble(textBoxX->Text);
		double y = System::Convert::ToDouble(textBoxY->Text);
		double z = System::Convert::ToDouble(textBoxZ->Text);
		ZavdClass Zavd;
		Zavd.Fn_b(x, y, z);
		Zavd.Fn_a(x, y, z);
	    textBoxA->Text = System::Convert::ToString(Zavd.geta());
		textBoxB->Text = System::Convert::ToString(Zavd.getb());
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
