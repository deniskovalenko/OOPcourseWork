#include "StdAfx.h"
#include "Letter.h"
#include "ImageContainer.h"

namespace CourseWork {

Letter::Letter(String^ name, Color color, double x, double y, double size) : Figure(name, color, gcnew Coordinates(x,y)) {
	this->size=size;
	this->init_size=size;
}

Figure^ Letter::copy() {
	return gcnew Letter(this->name, this->color, this->position->getX(), this->position->getY(), this->size);
}
void Letter::move(double dx, double dy){ 
	this->position = gcnew Coordinates(this->position->getX()+dx,this->position->getY()+dy);
}

void Letter::draw( Graphics^ g, Color^ color) {
	if (checkVisible()) {
		Point^ center =ImageContainer::getContainer()->toScreen(position->getX(), position->getY());
		Point^ left    =ImageContainer::getContainer()->toScreen(position->getX()-size/2, position->getY());
		Point^ right   =ImageContainer::getContainer()->toScreen(position->getX()+size/2, position->getY());
		Point^ leftmiddle =ImageContainer::getContainer()->toScreen(position->getX()-size/4, position->getY());
		Point^ rightmiddle =ImageContainer::getContainer()->toScreen(position->getX()+size/4, position->getY());
		Point^ leftdown =ImageContainer::getContainer()->toScreen(position->getX()-size/4, position->getY()-size/3);
		Point^ rightdown =ImageContainer::getContainer()->toScreen(position->getX()+size/4, position->getY()-size/3);
		Point^ top =ImageContainer::getContainer()->toScreen(position->getX(), position->getY()+size/2);

		g->DrawLine(gcnew Pen(*color), *center , *left);
		g->DrawLine(gcnew Pen(*color), *center , *right);
		g->DrawLine(gcnew Pen(*color), *leftmiddle , *top);
		g->DrawLine(gcnew Pen(*color), *rightmiddle , *top);
		g->DrawLine(gcnew Pen(*color), *left , *leftdown);
		g->DrawLine(gcnew Pen(*color), *right , *rightdown);
	}
}

void Letter::restoreState() 
{
	this->color=init_color;
	this->position=init_position;
	this->size=init_size;
}
void Letter::deform() {}

void Letter::unDeform() {}

}