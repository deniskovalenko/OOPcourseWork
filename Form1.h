#pragma once
#include "Square.h"
#include "ImageContainer.h"

namespace CourseWork {

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
	private: System::Windows::Forms::PictureBox^  pictureWindow;
			 static Color^ tmpColor = Color::Blue;
	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  FigureType;
	private: System::Windows::Forms::GroupBox^  squareGroup;
	private: System::Windows::Forms::Button^  btn_sq_color;
	private: System::Windows::Forms::Label^  label_color1;
	private: System::Windows::Forms::TextBox^  square_side;
	private: System::Windows::Forms::Label^  label_square_side;
	private: System::Windows::Forms::TextBox^  square_y;
	private: System::Windows::Forms::TextBox^  square_x;
	private: System::Windows::Forms::Label^  label_y1;
	private: System::Windows::Forms::Label^  label_x1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  create_square;


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
			this->pictureWindow = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->FigureType = (gcnew System::Windows::Forms::ComboBox());
			this->squareGroup = (gcnew System::Windows::Forms::GroupBox());
			this->btn_sq_color = (gcnew System::Windows::Forms::Button());
			this->label_color1 = (gcnew System::Windows::Forms::Label());
			this->square_side = (gcnew System::Windows::Forms::TextBox());
			this->label_square_side = (gcnew System::Windows::Forms::Label());
			this->square_y = (gcnew System::Windows::Forms::TextBox());
			this->square_x = (gcnew System::Windows::Forms::TextBox());
			this->label_y1 = (gcnew System::Windows::Forms::Label());
			this->label_x1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->create_square = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureWindow))->BeginInit();
			this->squareGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureWindow
			// 
			this->pictureWindow->BackColor = System::Drawing::SystemColors::Window;
			this->pictureWindow->Location = System::Drawing::Point(377, 33);
			this->pictureWindow->Name = L"pictureWindow";
			this->pictureWindow->Size = System::Drawing::Size(239, 207);
			this->pictureWindow->TabIndex = 0;
			this->pictureWindow->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(216, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// FigureType
			// 
			this->FigureType->AccessibleDescription = L"";
			this->FigureType->FormattingEnabled = true;
			this->FigureType->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Square"});
			this->FigureType->Location = System::Drawing::Point(12, 12);
			this->FigureType->Name = L"FigureType";
			this->FigureType->Size = System::Drawing::Size(141, 21);
			this->FigureType->TabIndex = 3;
			// 
			// squareGroup
			// 
			this->squareGroup->Controls->Add(this->create_square);
			this->squareGroup->Controls->Add(this->btn_sq_color);
			this->squareGroup->Controls->Add(this->label_color1);
			this->squareGroup->Controls->Add(this->square_side);
			this->squareGroup->Controls->Add(this->label_square_side);
			this->squareGroup->Controls->Add(this->square_y);
			this->squareGroup->Controls->Add(this->square_x);
			this->squareGroup->Controls->Add(this->label_y1);
			this->squareGroup->Controls->Add(this->label_x1);
			this->squareGroup->Location = System::Drawing::Point(12, 61);
			this->squareGroup->Name = L"squareGroup";
			this->squareGroup->Size = System::Drawing::Size(141, 134);
			this->squareGroup->TabIndex = 4;
			this->squareGroup->TabStop = false;
			this->squareGroup->Text = L"Square";
			// 
			// btn_sq_color
			// 
			this->btn_sq_color->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btn_sq_color->Location = System::Drawing::Point(79, 85);
			this->btn_sq_color->Name = L"btn_sq_color";
			this->btn_sq_color->Size = System::Drawing::Size(56, 23);
			this->btn_sq_color->TabIndex = 7;
			this->btn_sq_color->UseVisualStyleBackColor = false;
			this->btn_sq_color->Click += gcnew System::EventHandler(this, &Form1::btn_sq_color_Click);
			// 
			// label_color1
			// 
			this->label_color1->AutoSize = true;
			this->label_color1->Location = System::Drawing::Point(13, 90);
			this->label_color1->Name = L"label_color1";
			this->label_color1->Size = System::Drawing::Size(31, 13);
			this->label_color1->TabIndex = 6;
			this->label_color1->Text = L"Color";
			// 
			// square_side
			// 
			this->square_side->Location = System::Drawing::Point(79, 61);
			this->square_side->Name = L"square_side";
			this->square_side->Size = System::Drawing::Size(56, 20);
			this->square_side->TabIndex = 5;
			// 
			// label_square_side
			// 
			this->label_square_side->AutoSize = true;
			this->label_square_side->Location = System::Drawing::Point(13, 64);
			this->label_square_side->Name = L"label_square_side";
			this->label_square_side->Size = System::Drawing::Size(28, 13);
			this->label_square_side->TabIndex = 4;
			this->label_square_side->Text = L"Side";
			// 
			// square_y
			// 
			this->square_y->Location = System::Drawing::Point(79, 37);
			this->square_y->Name = L"square_y";
			this->square_y->Size = System::Drawing::Size(56, 20);
			this->square_y->TabIndex = 3;
			// 
			// square_x
			// 
			this->square_x->Location = System::Drawing::Point(79, 11);
			this->square_x->Name = L"square_x";
			this->square_x->Size = System::Drawing::Size(56, 20);
			this->square_x->TabIndex = 2;
			// 
			// label_y1
			// 
			this->label_y1->AutoSize = true;
			this->label_y1->Location = System::Drawing::Point(10, 40);
			this->label_y1->Name = L"label_y1";
			this->label_y1->Size = System::Drawing::Size(51, 13);
			this->label_y1->TabIndex = 1;
			this->label_y1->Text = L"Center_Y";
			// 
			// label_x1
			// 
			this->label_x1->AutoSize = true;
			this->label_x1->Location = System::Drawing::Point(10, 16);
			this->label_x1->Name = L"label_x1";
			this->label_x1->Size = System::Drawing::Size(51, 13);
			this->label_x1->TabIndex = 0;
			this->label_x1->Text = L"Center_X";
			// 
			// create_square
			// 
			this->create_square->Location = System::Drawing::Point(18, 112);
			this->create_square->Name = L"create_square";
			this->create_square->Size = System::Drawing::Size(101, 21);
			this->create_square->TabIndex = 8;
			this->create_square->Text = L"Create";
			this->create_square->UseVisualStyleBackColor = true;
			this->create_square->Click += gcnew System::EventHandler(this, &Form1::create_square_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 349);
			this->Controls->Add(this->squareGroup);
			this->Controls->Add(this->FigureType);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureWindow);
			this->Name = L"Form1";
			this->Text = L"C";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureWindow))->EndInit();
			this->squareGroup->ResumeLayout(false);
			this->squareGroup->PerformLayout();
			this->ResumeLayout(false);

		}										
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				this->pictureWindow->Paint += gcnew System::Windows::Forms::PaintEventHandler( this, &Form1::pictureWindow_Paint );;
				this->pictureWindow->Refresh();
			
			 }

	private: System::Void pictureWindow_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 	 Graphics^ g = e->Graphics;
					 //Graphics::FromImage(pictureBox1->Image); // from image??
				//// Square^ s = gcnew Square("First Square", Color::Blue, 10, 20, 10);
				// s->draw(g, s->getColor());
				//  Square^ ss = gcnew Square("Second Square", Color::Red, 100, 100, 30);
				// ss->draw(g, ss->getColor());
				// s->move(5,10);
				// s->draw(g, s->getColor());
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Image container

				// ImageContainer::getContainer()->create(this->pictureBox1);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				
			    //ImageContainer::getContainer()->addFigure(gcnew Square(name, Color::Blue, 10, 20, 10));
				// s->draw(g, s->getColor());
				//ImageContainer::getContainer()->addFigure(gcnew Square("Second Square", Color::Red, 100, 100, 30));
				// ss->draw(g, ss->getColor());

				ImageContainer::getContainer()->reDraw(this->pictureWindow);
				//ImageContainer::getContainer()->getFigNames();
				// s->move(5,10);
				// s->draw(g, s->getColor());
				 
			 }
private: System::Void btn_sq_color_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 tmpColor=colorDialog1->Color;
				 btn_sq_color->BackColor=*tmpColor;
				// ImageContainer::getContainer()->SelectedObject()->setColor(colorDialog1->Color);
			 }
		 }
private: System::Void create_square_Click(System::Object^  sender, System::EventArgs^  e) {
			 double x = Convert::ToDouble(square_x->Text);
			 double y = Convert::ToDouble(square_y->Text);
			 double side = Convert::ToDouble(square_side->Text);
			 String^ name = ImageContainer::getContainer()->createName("square");
			 ImageContainer::getContainer()->addFigure(gcnew Square(name, *tmpColor, x, y, side));
			 ImageContainer::getContainer()->reDraw(this->pictureWindow);
		 }
};
}

