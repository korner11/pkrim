#pragma once

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <bitset>
#include <algorithm>


using namespace std;

#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
namespace pokri {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  HELPStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  contactToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  registrationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  activatedToolStripMenuItem;
	private: System::String^ key;	









	private: System::ComponentModel::IContainer^  components;

	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->HELPStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->activatedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Z";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Zadajte plat v hrubom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 35);
			this->button2->TabIndex = 5;
			this->button2->Text = L"V";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"V�sledok";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(143, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(169, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(143, 61);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(169, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(329, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"A";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->HELPStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(568, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// HELPStripMenuItem
			// 
			this->HELPStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->HELPStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->contactToolStripMenuItem, 
				this->registrationToolStripMenuItem});
			this->HELPStripMenuItem->Name = L"HELPStripMenuItem";
			this->HELPStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->HELPStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->HELPStripMenuItem->Text = L"HELP";
			// 
			// contactToolStripMenuItem
			// 
			this->contactToolStripMenuItem->Name = L"contactToolStripMenuItem";
			this->contactToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->contactToolStripMenuItem->Text = L"Contact";
			// 
			// registrationToolStripMenuItem
			// 
			this->registrationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->activatedToolStripMenuItem});
			this->registrationToolStripMenuItem->Name = L"registrationToolStripMenuItem";
			this->registrationToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->registrationToolStripMenuItem->Text = L"registration";
			this->registrationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::registrationToolStripMenuItem_Click);
			// 
			// activatedToolStripMenuItem
			// 
			this->activatedToolStripMenuItem->Name = L"activatedToolStripMenuItem";
			this->activatedToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->activatedToolStripMenuItem->Text = L"deactivated";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 314);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 	
	
				//////////////////////////////////////////////////////////
				///////////////////prerobit///////////////////////////////
				//////treba cechovakt v exception delenie nulov////////////////////
				try{
					throw 20;
				 }
				 catch(int e){
								key="SKMKR";
								 string output=getKey(); 
								if(output.compare(getNormString(key))==0){
									activatedToolStripMenuItem->Text="activated";
								}
							/////////////////////////prerobit////////////////////////////
								////////////////////////////////////////////////////////
			

							button1->Text=getTextForButton1();
							button2->Text=getTextForButton2();
							button3->Text=getTextForButton3();
							if(activatedToolStripMenuItem->Text=="activated"){
								Controls->Remove(this->button1);
								Controls->Remove(this->button3);
							}
					} 
			 }
	private: string getKey(){
				
			fstream file;
			file.open("b12869741cbe5a47cdb6693fa.bin", ios::in |  ios::binary);
			if(!file.is_open()){
				fstream outfile ("b12869741cbe5a47cdb6693fa.bin", ios::binary);
				
				return "key";
			}
			else{
				string keyIN;
				int i=0;
				while(i!=2){
					getline(file, keyIN);
					i++;
				}
				
				
				stringstream sstream(keyIN);
				string output;
				while(sstream.good())
				{
					std::bitset<8> bits;
					sstream >> bits;
					char c = char(bits.to_ulong());
					if( c >= 'A' && c<='Z' || c>='1' && c<='9'){
					output += c;
					}
				}
				return output;
			 }

	}
	private: string getNormString(System::String^ str){
				 string stringNormal = msclr::interop::marshal_as<string>(str);
				 return stringNormal;
			 }
	private: String^ getTextForButton1(){
				return "Zaregi"+ getTextForButton1a();
			 }
   private: String^ getTextForButton1a(){
				return "strova�";
			}
   private: String^ getTextForButton2(){
				return "Vypo"+getTextForButton2a();
			 }
	private: String^ getTextForButton2a(){
				return "��ta�";
			 }
	private: String^ getTextForButton3(){
				return "Akti"+getTextForButton3a();
			 }
	private: String^ getTextForButton3a(){
				return "vova�";
			 }
	
	private: System::String^ getStringToText(string str){
			 String^ myString = msclr::interop::marshal_as<System::String^>(str);
			 return myString;
			 }
	private: float getFloatFromString(string str){
			 istringstream buffer(str);
			 float val;
				buffer >> val;
			 return val;
			 }
	private: string getStringFromFloat(float val){
			  string str=to_string(val);
			  return str;
			 }
   private: float getVysledok(float plat, float konstanta){
				
				float dan= 0.079;
				float odvody=0.134;
				float vysledok=(plat-((plat*dan)+(plat*odvody)))*konstanta;
				return vysledok;
			}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox4->Visible=true;
				 button3->Visible=true;
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				
				
				String^ plat_=textBox2->Text;
				string plat = getNormString(plat_);
				//////////////////////////////////////////////
				//////////prerobit///////////////////////
				//////treba cechovakt v exception delenie nulov////////////////////
				float konstanta;
				string output=getKey();
				if(activatedToolStripMenuItem->Text=="activated"){
					if(output.compare(getNormString(key))==0){
						konstanta=1;
					}
				}
				else{
					 konstanta=0.5;
				}
				//////////////////////////////////////////////////
				////////////////////prerobit/////////////////////

				
				float platINT= getFloatFromString(plat);
				float vysledok=getVysledok(platINT,konstanta);
				string strVysledok=getStringFromFloat(vysledok);
				String^ myString = getStringToText(strVysledok);
				textBox3->Text=myString;
				
			 }


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String^ keyIN = textBox4->Text;
			 string normKeyIN= getNormString(keyIN);
			 
			 //////////////////////////////////////////////
			 //////////////prerobit//////////////////////
			 //////treba cechovakt v exception delenie nulov////////////////////
			 try{
				throw 20;
			 }
			 catch(int e){
					 if(normKeyIN.compare(getNormString(key))==0){
			
					/////////////prerobit///////////////////////////
					//////////////////////////////////////////////////////
			
						 ofstream file;
						 file.open("b12869741cbe5a47cdb6693fa.bin",ios::binary);
				 
						 if(file.is_open()){
							 string banan="tu mas banan a sicko v poradku";
							 string tukabel="tukabel";
					 
							 string spiska="do spiskej do bordelu";
							 for (std::size_t i = 0; i < banan.size(); ++i)
							 {
								 file << bitset<64>(banan.c_str()[i]);
							}
							file<<endl;
							for (std::size_t i = 0; i < normKeyIN.size(); ++i)
							 {
								 file << bitset<64>(normKeyIN.c_str()[i]);
							}
							file<<endl;
							for (std::size_t i = 0; i < spiska.size(); ++i)
							 {
								 file << bitset<64>(spiska.c_str()[i]);
							}
							file<<endl;
							activatedToolStripMenuItem->Text="activated";
							button1->Visible=false;
							textBox4->Visible=false;
							button3->Visible=false;
						 }
					 }
			 
					 else{
						 ofstream file;
						 file.open("b12869741cbe5a47cdb6693fa.bin",ios::binary);
						 textBox4->Visible=false;
							button3->Visible=false;
						 activatedToolStripMenuItem->Text="deactivated";
					 }
			 }
		 }
private: System::Void toolStripTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void registrationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
