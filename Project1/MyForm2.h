#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;


	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		OdbcConnection ^cn;
		OdbcCommand ^cm;
		OdbcDataAdapter ^da;
		DataTable ^dt;
		OdbcDataReader ^dr;

	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			cn = gcnew OdbcConnection("dsn=MyDsn");
			cn->Open();
			cm = cn->CreateCommand();
			dt = gcnew DataTable();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(484, 170);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(330, 127);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 33);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 33);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add New";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(145, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(301, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(145, 68);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(301, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(301, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Subject or Category";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Book Title";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Author Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bood ID";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 186);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(483, 144);
			this->dataGridView1->TabIndex = 7;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 340);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm2";
			this->Text = L"Insert Records";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) 
	{
				 cm->CommandText = "SELECT * FROM BOOK";
				 da = gcnew OdbcDataAdapter(cm);
				 da->Fill(dt);
				 dataGridView1->DataSource = dt;
				 dataGridView1->Enabled=false;

	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox1->Text = "";
			 this->textBox2->Text = "";
			 this->textBox3->Text = "";
			 this->textBox4->Text = "";
			 int LastId;
			 cm->CommandText = "SELECT BOOK_ID FROM BOOK ORDER BY BOOK_ID DESC";
			 dr = cm->ExecuteReader();
			 if (dr->Read())
			 {
				 LastId = Convert::ToInt32( dr->GetString(0))+1;
			 }
			 else
			 {
				 LastId = 1;
			 }
			 this->textBox1->Text = Convert::ToString(LastId);
			 this->textBox1->Enabled = false;
			 this->button1->Enabled = false;
			 this->button2->Enabled = true;
			 this->textBox2->Focus();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->textBox2->Text->Trim()->Length == 0)
			 {
				 MessageBox::Show("Author Name Shouldn't be NULL ");
				 this->textBox2->Focus();
				 return;
			 }
			 if (this->textBox3->Text->Trim()->Length == 0)
			 {
				 MessageBox::Show("Book Title Shouldn't be NULL ");
				 this->textBox3->Focus();
				 return;
			 }
			 if (this->textBox4->Text->Trim()->Length == 0)
			 {
				 MessageBox::Show("Book Type or Subject Shouldn't be NULL ");
				 this->textBox4->Focus();
				 return;
			 }
			 String ^bt, ^au, ^sb;
			 int ^bid = Convert::ToInt32(this->textBox1->Text);
			 au = this->textBox2->Text;
			 bt = this->textBox3->Text;
			 sb = this->textBox4->Text;
			 if (!dr->IsClosed) dr->Close();
			 String ^Cmd = "INSERT INTO BOOK (BOOK_ID, AUTHOR, TITLE, SUBJECT) VALUES (" + bid + ", '" + au + "', '" + bt + "', '" + sb +"')" ;
			 cm->CommandText = Cmd;
			 cm->ExecuteNonQuery();
			 this->textBox1->Enabled = true;
			 this->button1->Enabled = true;
			 this->button2->Enabled = false;
			 this->textBox1->Text = "";
			 this->textBox2->Text = "";
			 this->textBox3->Text = "";
			 this->textBox4->Text = "";
			 this->textBox1->Focus();
			 cm->CommandText = "SELECT * FROM BOOK";
			 da = gcnew OdbcDataAdapter(cm);
			 da->Fill(dt);
			 dataGridView1->DataSource = dt;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
}
};
}
