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
	private: System::Windows::Forms::GroupBox^  gb_actions;
	private: System::Windows::Forms::Button^  action_color;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  select_figure;
	private: System::Windows::Forms::Button^  change_btn;


	private: System::Windows::Forms::TextBox^  dy;
	private: System::Windows::Forms::TextBox^  dx;
	private: System::Windows::Forms::Button^  remove_figure;
	private: System::Windows::Forms::CheckBox^  visible;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btn_restore;




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
			this->FigureType = (gcnew System::Windows::Forms::ComboBox());
			this->squareGroup = (gcnew System::Windows::Forms::GroupBox());
			this->create_square = (gcnew System::Windows::Forms::Button());
			this->btn_sq_color = (gcnew System::Windows::Forms::Button());
			this->label_color1 = (gcnew System::Windows::Forms::Label());
			this->square_side = (gcnew System::Windows::Forms::TextBox());
			this->label_square_side = (gcnew System::Windows::Forms::Label());
			this->square_y = (gcnew System::Windows::Forms::TextBox());
			this->square_x = (gcnew System::Windows::Forms::TextBox());
			this->label_y1 = (gcnew System::Windows::Forms::Label());
			this->label_x1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->gb_actions = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_restore = (gcnew System::Windows::Forms::Button());
			this->visible = (gcnew System::Windows::Forms::CheckBox());
			this->remove_figure = (gcnew System::Windows::Forms::Button());
			this->change_btn = (gcnew System::Windows::Forms::Button());
			this->dy = (gcnew System::Windows::Forms::TextBox());
			this->dx = (gcnew System::Windows::Forms::TextBox());
			this->select_figure = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->action_color = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureWindow))->BeginInit();
			this->squareGroup->SuspendLayout();
			this->gb_actions->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureWindow
			// 
			this->pictureWindow->BackColor = System::Drawing::SystemColors::Window;
			this->pictureWindow->Location = System::Drawing::Point(187, 47);
			this->pictureWindow->Name = L"pictureWindow";
			this->pictureWindow->Size = System::Drawing::Size(368, 180);
			this->pictureWindow->TabIndex = 0;
			this->pictureWindow->TabStop = false;
			// 
			// FigureType
			// 
			this->FigureType->AccessibleDescription = L"";
			this->FigureType->FormattingEnabled = true;
			this->FigureType->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Square"});
			this->FigureType->Location = System::Drawing::Point(12, 47);
			this->FigureType->Name = L"FigureType";
			this->FigureType->Size = System::Drawing::Size(165, 21);
			this->FigureType->TabIndex = 3;
			this->FigureType->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::FigureType_SelectedIndexChanged);
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
			this->squareGroup->Location = System::Drawing::Point(12, 93);
			this->squareGroup->Name = L"squareGroup";
			this->squareGroup->Size = System::Drawing::Size(165, 134);
			this->squareGroup->TabIndex = 4;
			this->squareGroup->TabStop = false;
			this->squareGroup->Text = L"Square";
			this->squareGroup->Visible = false;
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
			// btn_sq_color
			// 
			this->btn_sq_color->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btn_sq_color->Location = System::Drawing::Point(79, 85);
			this->btn_sq_color->Name = L"btn_sq_color";
			this->btn_sq_color->Size = System::Drawing::Size(56, 23);
			this->btn_sq_color->TabIndex = 7;
			this->btn_sq_color->UseVisualStyleBackColor = false;
			this->btn_sq_color->Click += gcnew System::EventHandler(this, &Form1::btn_color_create);
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
			this->square_side->Text = L"10";
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
			this->square_y->Text = L"0";
			// 
			// square_x
			// 
			this->square_x->Location = System::Drawing::Point(79, 11);
			this->square_x->Name = L"square_x";
			this->square_x->Size = System::Drawing::Size(56, 20);
			this->square_x->TabIndex = 2;
			this->square_x->Text = L"0";
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
			// gb_actions
			// 
			this->gb_actions->Controls->Add(this->groupBox1);
			this->gb_actions->Controls->Add(this->visible);
			this->gb_actions->Controls->Add(this->remove_figure);
			this->gb_actions->Controls->Add(this->change_btn);
			this->gb_actions->Controls->Add(this->dy);
			this->gb_actions->Controls->Add(this->dx);
			this->gb_actions->Controls->Add(this->select_figure);
			this->gb_actions->Controls->Add(this->label3);
			this->gb_actions->Controls->Add(this->label2);
			this->gb_actions->Controls->Add(this->action_color);
			this->gb_actions->Controls->Add(this->label1);
			this->gb_actions->Location = System::Drawing::Point(602, 47);
			this->gb_actions->Name = L"gb_actions";
			this->gb_actions->Size = System::Drawing::Size(166, 293);
			this->gb_actions->TabIndex = 5;
			this->gb_actions->TabStop = false;
			this->gb_actions->Text = L"Actions";
			this->gb_actions->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_restore);
			this->groupBox1->Location = System::Drawing::Point(6, 223);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(154, 64);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			// 
			// btn_restore
			// 
			this->btn_restore->Location = System::Drawing::Point(6, 10);
			this->btn_restore->Name = L"btn_restore";
			this->btn_restore->Size = System::Drawing::Size(70, 21);
			this->btn_restore->TabIndex = 0;
			this->btn_restore->Text = L"Restore";
			this->btn_restore->UseVisualStyleBackColor = true;
			this->btn_restore->Click += gcnew System::EventHandler(this, &Form1::btn_restore_Click);
			// 
			// visible
			// 
			this->visible->AutoSize = true;
			this->visible->Checked = true;
			this->visible->CheckState = System::Windows::Forms::CheckState::Checked;
			this->visible->Location = System::Drawing::Point(13, 57);
			this->visible->Name = L"visible";
			this->visible->Size = System::Drawing::Size(55, 17);
			this->visible->TabIndex = 16;
			this->visible->Text = L"visible";
			this->visible->UseVisualStyleBackColor = true;
			this->visible->CheckedChanged += gcnew System::EventHandler(this, &Form1::visible_CheckedChanged);
			// 
			// remove_figure
			// 
			this->remove_figure->Location = System::Drawing::Point(31, 194);
			this->remove_figure->Name = L"remove_figure";
			this->remove_figure->Size = System::Drawing::Size(88, 23);
			this->remove_figure->TabIndex = 15;
			this->remove_figure->Text = L"Remove";
			this->remove_figure->UseVisualStyleBackColor = true;
			this->remove_figure->Click += gcnew System::EventHandler(this, &Form1::remove_figure_Click);
			// 
			// change_btn
			// 
			this->change_btn->Location = System::Drawing::Point(31, 166);
			this->change_btn->Name = L"change_btn";
			this->change_btn->Size = System::Drawing::Size(88, 23);
			this->change_btn->TabIndex = 14;
			this->change_btn->Text = L"Apply";
			this->change_btn->UseVisualStyleBackColor = true;
			this->change_btn->Click += gcnew System::EventHandler(this, &Form1::change_btn_Click);
			// 
			// dy
			// 
			this->dy->Location = System::Drawing::Point(79, 109);
			this->dy->Name = L"dy";
			this->dy->Size = System::Drawing::Size(69, 20);
			this->dy->TabIndex = 12;
			this->dy->Text = L"0";
			// 
			// dx
			// 
			this->dx->Location = System::Drawing::Point(79, 83);
			this->dx->Name = L"dx";
			this->dx->Size = System::Drawing::Size(69, 20);
			this->dx->TabIndex = 11;
			this->dx->Text = L"0";
			// 
			// select_figure
			// 
			this->select_figure->FormattingEnabled = true;
			this->select_figure->Location = System::Drawing::Point(13, 20);
			this->select_figure->Name = L"select_figure";
			this->select_figure->Size = System::Drawing::Size(106, 21);
			this->select_figure->TabIndex = 10;
			this->select_figure->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::select_figure_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Move_Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Move_X";
			// 
			// action_color
			// 
			this->action_color->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->action_color->Location = System::Drawing::Point(79, 135);
			this->action_color->Name = L"action_color";
			this->action_color->Size = System::Drawing::Size(69, 23);
			this->action_color->TabIndex = 8;
			this->action_color->UseVisualStyleBackColor = false;
			this->action_color->Click += gcnew System::EventHandler(this, &Form1::action_color_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Color";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 418);
			this->Controls->Add(this->gb_actions);
			this->Controls->Add(this->squareGroup);
			this->Controls->Add(this->FigureType);
			this->Controls->Add(this->pictureWindow);
			this->Name = L"Form1";
			this->Text = L"C";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureWindow))->EndInit();
			this->squareGroup->ResumeLayout(false);
			this->squareGroup->PerformLayout();
			this->gb_actions->ResumeLayout(false);
			this->gb_actions->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}										
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Image container

				// ImageContainer::getContainer()->create(this->pictureBox1);
			 }
private: System::Void btn_color_create(System::Object^  sender, System::EventArgs^  e) {
			  if(colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 tmpColor=colorDialog1->Color;
				 btn_sq_color->BackColor=*tmpColor;
				//action_color->BackColor=*tmpColor;
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
			 ComboboxUpdate();
			 gb_actions->Visible=true;
		 }


	private: void ComboboxUpdate()
			{
				select_figure->Items->Clear();
				select_figure->Items->AddRange(ImageContainer::getContainer()->getFigNames()->ToArray());
				if(select_figure->Items->Count!=0)
				{
					select_figure->SelectedIndex = select_figure->Items->Count-1;
					ImageContainer::getContainer()->selectByName(select_figure->SelectedItem->ToString());
				} else {select_figure->Text=""; }
			}
private: System::Void FigureType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (FigureType->SelectedItem->ToString()=="Square") 
				{squareGroup->Visible=true;}
		 }

private: System::Void remove_figure_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageContainer::getContainer()->deleteCurrent();
			 ImageContainer::getContainer()->reDraw(this->pictureWindow);
			 ComboboxUpdate();
		 }

private: System::Void change_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 double deltax = Convert::ToDouble(dx->Text);
			 double deltay = Convert::ToDouble(dy->Text);
		if (ImageContainer::getContainer()->getCurrent()!=nullptr) {
			 Figure^ current = ImageContainer::getContainer()->getCurrent(); 
			 current->setColor(*tmpColor);
			 current->move(deltax,deltay);
			 ImageContainer::getContainer()->reDraw(this->pictureWindow);
		}
}
private: System::Void select_figure_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(select_figure->SelectedIndex!=-1)
			 { 
				 ImageContainer::getContainer()->selectByName(select_figure->SelectedItem->ToString());
			 }
			 else
			 {
				ImageContainer::getContainer()->unselect();
			 }
		 }
private: System::Void visible_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			ImageContainer::getContainer()->getCurrent()->setVisible(visible->Checked);
			ImageContainer::getContainer()->reDraw(this->pictureWindow);
		 }
private: System::Void btn_restore_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if (ImageContainer::getContainer()->getCurrent()!=nullptr) {
				 ImageContainer::getContainer()->getCurrent()->restoreState();
				ImageContainer::getContainer()->reDraw(this->pictureWindow);
			 }
		 }
private: System::Void action_color_Click(System::Object^  sender, System::EventArgs^  e) {
			   if(colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 tmpColor=colorDialog1->Color;
				 action_color->BackColor=*tmpColor;
				 ImageContainer::getContainer()->getCurrent()->setColor(colorDialog1->Color);			 
			     ImageContainer::getContainer()->reDraw(this->pictureWindow);
			 }
		 }
};

}

