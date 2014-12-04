#include "StdAfx.h"
#include "Square.h"
#include "ImageContainer.h"
#include "math.h"
using namespace System;
namespace CourseWork {

Square::Square(String^ name, Color color, double x, double y, double side) : Figure(name, color, gcnew Coordinates(x,y)) 
{
	this->side=side;
	this->init_side=side;
}

Figure^ Square::copy() {
	return gcnew Square(this->name, this->color, this->position->getX(), this->position->getY(), this->side);
}

void Square::move(double dx, double dy){ 
	this->position = gcnew Coordinates(this->position->getX()+dx,this->position->getY()+dy);
}
void Square::draw( Graphics^ g, Color^ color) {
	if (checkVisible()) {

	Point^ screenLeftup = ImageContainer::getContainer()->toScreen(this->position->getX()-(this->side)/2, this->position->getY()+(this->side)/2);
	Point^ screenRightup = ImageContainer::getContainer()->toScreen(this->position->getX()+(this->side)/2, this->position->getY()+(this->side)/2 );
	Point^ screenLeftdown = ImageContainer::getContainer()->toScreen(this->position->getX()-(this->side)/2, this->position->getY()-(this->side)/2 );
	Point^ screenRightdown = ImageContainer::getContainer()->toScreen(this->position->getX()+(this->side)/2, this->position->getY()-(this->side)/2 );

	g->DrawLine(gcnew Pen(*color), *screenLeftup, *screenRightup);
	g->DrawLine(gcnew Pen(*color), *screenLeftdown, *screenRightdown);
	g->DrawLine(gcnew Pen(*color), *screenLeftup, *screenLeftdown);
	g->DrawLine(gcnew Pen(*color), *screenRightup, *screenRightdown);
	}
}
void Square::restoreState() 
{
	this->color=init_color;
	this->position=init_position;
	this->side=init_side;
}

	bool Square::inComfortZone(Figure^ figure) {
		if (this==figure || figure==nullptr) { return false; }
		return (this->distTo(figure) < this->getComfortZone()+figure->getComfortZone());
	}
	double Square::getComfortZone() {
		return 1.4*side/2;
	}

void Square::deform() {
	if (!isDeformed) {
		this->side=(4.0/3.0)*side;
		isDeformed=true;
	}
}

void Square::unDeform() {
	if (isDeformed) {
	this->side=(3.0/4.0)*side;
	isDeformed=false; 
	}
}

}