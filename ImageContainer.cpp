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
	
	current = nullptr;

	imageCenter = gcnew Coordinates(0,0);

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
		createScreen(this->pictureBox->Width, this->pictureBox->Height);
		this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ImageContainer::pictureBox_Paint);
		this->pictureBox->Refresh();
}

void ImageContainer::pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			for each(Figure^ fig in this->figures) {
			fig->draw(e->Graphics, fig->getColor());
			}
		if(current!=nullptr)
			current->draw(e->Graphics, current->getColor());
	}
void ImageContainer::addFigure(Figure^ figure) {
		for each(Figure^ fig in this->figures) {
			if(fig->getName() == figure->getName())
			{
				throw gcnew Exception("Figure duplicate");
			}
		}
		figures->Add(figure);
		selectByName(figure->getName());
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

void ImageContainer::selectByName( String^ name )
{
	if(current!=nullptr)
		{current->unselect();}
	Figure^ tmp = getFigureByName(name);
	if(tmp != nullptr)
		{tmp->select();}
	current = tmp;
}

void ImageContainer::unselect()
{
	if(current!=nullptr) 
		{current->unselect();}
	current = nullptr;
}
Figure^ ImageContainer::getFigureByName(String^ name) {
		for each(Figure^ figure in figures)
		{
			if(figure->getName() == name)
			{
				return figure;
			}
		}
		return nullptr;
}

Figure^ ImageContainer::getCurrent() {
	return current;
}
void ImageContainer::deleteCurrent() {
	if(current!=nullptr)
		{
			deleteByName(current->getName());
		}
}

void ImageContainer::deleteByName(String^ name) {
	for(int i = 0; i<figures->Count; i++)
		{
			if(figures[i]->getName() == name)
			{
				if (figures[i]==current) {
				current=nullptr;
			}
				figures->RemoveAt(i);
				break;
			}
		}
}

void ImageContainer::createScreen(int width, int height) {
	this->imageCenter = gcnew Coordinates(width/2, height/2);
}

Point^ ImageContainer::toScreen(double x, double y) {
	x+=imageCenter->getX();
	y= -y;
	y+=imageCenter->getY();
	return gcnew Point(x,y);
} 

}