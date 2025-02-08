#pragma once
#include "ExpressionLogic.h"
#include <msclr/marshal_cppstd.h>
namespace Project {

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
	private: System::Windows::Forms::TextBox^ txtInput;
	private: System::Windows::Forms::TextBox^ txtOutput;








	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnEvaluatePostfix;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPostfix;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtInfixOutput;
	private: System::Windows::Forms::Button^ btnPostfixToInfix;
	private: System::Windows::Forms::Button^ btnConvert;
	private: System::Windows::Forms::Button^ btnEvaluate;







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
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEvaluatePostfix = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPostfix = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtInfixOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnPostfixToInfix = (gcnew System::Windows::Forms::Button());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnEvaluate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(878, 133);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(221, 26);
			this->txtInput->TabIndex = 0;
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(878, 205);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(221, 26);
			this->txtOutput->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MintCream;
			this->label3->Location = System::Drawing::Point(550, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 48);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Enter Infix Expression:\r\n\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MintCream;
			this->label4->Location = System::Drawing::Point(697, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Output:\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MintCream;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(559, 434);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 41);
			this->label1->TabIndex = 8;
			this->label1->Text = L"POSTFIX TO INFIX CONVERSION";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// btnEvaluatePostfix
			// 
			this->btnEvaluatePostfix->BackColor = System::Drawing::Color::MintCream;
			this->btnEvaluatePostfix->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEvaluatePostfix->Location = System::Drawing::Point(1084, 709);
			this->btnEvaluatePostfix->Name = L"btnEvaluatePostfix";
			this->btnEvaluatePostfix->Size = System::Drawing::Size(151, 49);
			this->btnEvaluatePostfix->TabIndex = 7;
			this->btnEvaluatePostfix->Text = L"Evaluate";
			this->btnEvaluatePostfix->UseVisualStyleBackColor = false;
			this->btnEvaluatePostfix->Click += gcnew System::EventHandler(this, &Form1::btnEvaluatePostfix_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MintCream;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(580, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(540, 41);
			this->label2->TabIndex = 9;
			this->label2->Text = L"INFIX TO POSTFIX CONVERSION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MintCream;
			this->label5->Location = System::Drawing::Point(530, 535);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Enter Postfix Expression:";
			// 
			// txtPostfix
			// 
			this->txtPostfix->Location = System::Drawing::Point(878, 533);
			this->txtPostfix->Name = L"txtPostfix";
			this->txtPostfix->Size = System::Drawing::Size(221, 26);
			this->txtPostfix->TabIndex = 4;
			this->txtPostfix->TextChanged += gcnew System::EventHandler(this, &Form1::txtPostfix_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::MintCream;
			this->label6->Location = System::Drawing::Point(697, 616);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Output:";
			// 
			// txtInfixOutput
			// 
			this->txtInfixOutput->Location = System::Drawing::Point(878, 616);
			this->txtInfixOutput->Name = L"txtInfixOutput";
			this->txtInfixOutput->Size = System::Drawing::Size(221, 26);
			this->txtInfixOutput->TabIndex = 5;
			this->txtInfixOutput->TextChanged += gcnew System::EventHandler(this, &Form1::txtInfixOutput_TextChanged);
			// 
			// btnPostfixToInfix
			// 
			this->btnPostfixToInfix->BackColor = System::Drawing::Color::MintCream;
			this->btnPostfixToInfix->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPostfixToInfix->Location = System::Drawing::Point(501, 708);
			this->btnPostfixToInfix->Name = L"btnPostfixToInfix";
			this->btnPostfixToInfix->Size = System::Drawing::Size(142, 50);
			this->btnPostfixToInfix->TabIndex = 6;
			this->btnPostfixToInfix->Text = L"Convert";
			this->btnPostfixToInfix->UseVisualStyleBackColor = false;
			this->btnPostfixToInfix->Click += gcnew System::EventHandler(this, &Form1::btnPostfixToInfix_Click);
			// 
			// btnConvert
			// 
			this->btnConvert->BackColor = System::Drawing::Color::MintCream;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvert->Location = System::Drawing::Point(501, 294);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(142, 50);
			this->btnConvert->TabIndex = 2;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = false;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// btnEvaluate
			// 
			this->btnEvaluate->BackColor = System::Drawing::Color::MintCream;
			this->btnEvaluate->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEvaluate->Location = System::Drawing::Point(1084, 294);
			this->btnEvaluate->Name = L"btnEvaluate";
			this->btnEvaluate->Size = System::Drawing::Size(151, 50);
			this->btnEvaluate->TabIndex = 3;
			this->btnEvaluate->Text = L"Evaluate";
			this->btnEvaluate->UseVisualStyleBackColor = false;
			this->btnEvaluate->Click += gcnew System::EventHandler(this, &Form1::btnEvaluate_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1369, 788);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEvaluatePostfix);
			this->Controls->Add(this->btnPostfixToInfix);
			this->Controls->Add(this->txtInfixOutput);
			this->Controls->Add(this->txtPostfix);
			this->Controls->Add(this->btnEvaluate);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Expression Converter";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			std::string infix = msclr::interop::marshal_as<std::string>(txtInput->Text);
			std::string postfix = infixToPostfix(infix);
			txtOutput->Text = gcnew String(postfix.c_str());
		}
		catch (std::exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void btnEvaluate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			std::string infix = msclr::interop::marshal_as<std::string>(txtInput->Text);
			int result = evaluateInfix(infix);
			txtOutput->Text = "Result: " + result.ToString();
		}
		catch (std::exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void btnPostfixToInfix_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string postfix = msclr::interop::marshal_as<std::string>(txtPostfix->Text);
	try {
		std::string infix = postfixToInfix(postfix);
		txtInfixOutput->Text = gcnew String(infix.c_str());
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnEvaluatePostfix_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string postfix = msclr::interop::marshal_as<std::string>(txtPostfix->Text);
	try {
		int result = evaluatePostfix(postfix);
		txtInfixOutput->Text = result.ToString();
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtPostfix_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtInfixOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
