#include "StdAfx.h"
#include "ImageContainer.h"
#include "Square.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

namespace CourseWork {


ImageContainer::ImageContainer(void)
{
	figures = gcnew List<Figure^>();
}

ImageContainer^ ImageContainer::getContainer() {
	if (inner !=nullptr) {
		return inner;
	} else {
		inner = gcnew ImageContainer();
	} return inner;
}

void ImageContainer::reDraw(PictureBox^ pictureBox) {
	if(this->pictureBox!=nullptr)
		{
			this->pictureBox->Paint -= gcnew System::Windows::Forms::PaintEventHandler(this, &ImageContainer::pictureBox_Paint);
		}
		this->pictureBox = pictureBox;
		this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ImageContainer::pictureBox_Paint);
		this->pictureBox->Refresh();
}

void ImageContainer::pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			for each(Figure^ fig in this->figures) {
			fig->draw(e->Graphics, fig->getColor());
			}
		/*if(selected!=nullptr)
			selected->Paint(e->Graphics);*/
	}
void ImageContainer::addFigure(Figure^ figure) {
		for each(Figure^ fig in this->figures) {
			if(fig->getName() == figure->getName())
			{
				throw gcnew Exception("Figure duplicate");
			}
		}
		figures->Add(figure);
}

List<String^>^ ImageContainer::getFigNames() {
	List<String^>^ names = gcnew List<String^>();
		for each(Figure^ fig in this->figures)
			names->Add(fig->getName());
		return names;
}

String^ ImageContainer::createName(String^ figureType) {
	List<String^>^ tmp = getFigNames();
	int count = 1;
		while(tmp->Contains(figureType+count.ToString()))
			count++;
		return figureType + count.ToString();
}

}