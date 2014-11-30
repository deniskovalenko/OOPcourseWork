#pragma once
#include "Figure.h"
namespace CourseWork {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


ref class ImageContainer
{
private:
	static ImageContainer^ inner = nullptr;
	List<Figure^>^ figures;
	PictureBox^ pictureBox;
	
public:
	static ImageContainer^ getContainer();

	void create(PictureBox^ pictureBox);
	
	void pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e);
	
	ImageContainer(void);

	void addFigure(Figure^ figure);

	List<String^>^ getFigNames();
};

}