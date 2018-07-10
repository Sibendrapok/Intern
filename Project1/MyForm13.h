#pragma once
//#include "MyForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;


	/// <summary>
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
	public:
		MyForm13()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MyForm13(System::Windows::Forms::Form ^ form1)
		{
			InitializeComponent();
			//

			form = form1;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label1;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  button2;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
			System::Windows::Forms::Form ^ form;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SUm of the NUmbers :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm13::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(80, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Press to find sum:";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::button1_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm13::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &MyForm13::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MyForm13::backgroundWorker1_RunWorkerCompleted);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(67, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 60);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Click to get Answer in Form1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::button2_Click);
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm13";
			this->Text = L"MyForm13";
			this->Load += gcnew System::EventHandler(this, &MyForm13::MyForm13_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->backgroundWorker1->RunWorkerAsync();
				 


				
			 }
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
				 
				 int sum=0;
					 for (int i=1;i<=10;i++)
				 {   
					  sum+=i;
					  
					 this->backgroundWorker1->ReportProgress(sum);
				 }
				  
			 }
	private: System::Void backgroundWorker1_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
				 this->label1->Text=(e->ProgressPercentage).ToString();
				 
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
		
			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			// MyForm^ f1 = gcnew MyForm(this->label1->Text);
			// form->Show();
				//// Mytextboxtext(this->label1->Text);
		     
		 }



private: System::Void MyForm13_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}
