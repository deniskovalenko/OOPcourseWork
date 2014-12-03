#include "StdAfx.h"
#include "ImageContainer.h"
#include "Square.h"
#include "FigureGroup.h"

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

	auto_move = false;

	timer = gcnew Timer();
	timer->Enabled = false;
	timer->Interval = 200;
	
	time = 0;
	speed = 2;
}

ImageContainer^ ImageContainer::getContainer() {
	if (inner !=nullptr) {
		return inner;
	} else {
		inner = gcnew ImageContainer();
	} return inner;
}

void ImageContainer::reDraw(PictureBox^ pictureBox) {
		handleIntersections();
	if(this->pictureBox!=nullptr)
		{
			this->pictureBox->Paint -= gcnew System::Windows::Forms::PaintEventHandler(this, &ImageContainer::pictureBox_Paint);
		}
		this->pictureBox = pictureBox;
		createScreen(this->pictureBox->Width, this->pictureBox->Height);
		this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ImageContainer::pictureBox_Paint);
		this->pictureBox->Refresh();
}

void ImageContainer::handleIntersections() {
	for each (Figure^ figure in figures) {
		if (figure!=current) {
			if (figure->inComfortZone(current)) {
				figure->deform();
				figure->forceColor(current->getColor()); //save to saved if not forsed yet, else only change, not save
			} else {
				figure->unDeform();
				figure->restoreColor();
			} 
		} else 	{
			for each (Figure^ figure in figures) {
				if(figure!=current) {
					if (!current->inComfortZone(figure)) {
						current->unDeform();
						current->restoreColor();
				}
		}	
		}
	}
	}

}
List<Figure^>^ ImageContainer::getAllFigures() {return figures;}
void ImageContainer::timer_Tick( System::Object^ sender, System::EventArgs^ e ) {
	if (auto_move) {
		current->move(speed,speed*speed);
		reDraw(this->pictureBox);
	}
}

void ImageContainer::autoMove(bool move) {
	if (move) {
		timer->Enabled = true;
		auto_move=true; 
		timer->Tick += gcnew System::EventHandler(this, &ImageContainer::timer_Tick);
	} else { timer->Enabled = false; 
			 auto_move=false;}
}

void ImageContainer::pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			for each(Figure^ fig in this->figures) {
			fig->draw(e->Graphics);
			}
		if(current!=nullptr)
			current->draw(e->Graphics);
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

void ImageContainer::setAllFigures( List<Figure^>^ list) {this->figures=list;}

void ImageContainer::groupFigures() {
		if(figures->Count!=0)
		{
			String^ name = "figGroup";
			int i = 1;
			while(getFigureByName(name+i.ToString())!=nullptr) {
				i++;
			}
			FigureGroup^ curGroup = gcnew FigureGroup(name+i.ToString());
			for each(Figure^ figure in figures) {
				curGroup->addFigure(figure); 
			}
			addFigure(curGroup);
		}
}

	int ImageContainer::pbWidth() {
		return this->pictureBox->Width; 
	}
	int ImageContainer::pbHeight() {
		return this->pictureBox->Height;
	}

	bool ImageContainer::getDrawTraces() {
		return traces;
	}
	void ImageContainer::setDrawTraces(bool traces) {
		this->traces = traces; 
	}


}