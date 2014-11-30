#include "StdAfx.h"
#include "Square.h"

namespace CourseWork {

Square::Square(String^ name, Color color, double x, double y, double side) : Figure(name, color, gcnew Coordinates(x,y)) 
{
	this->side=side;
}
void Square::move(double dx, double dy){ 
	this->position = gcnew Coordinates(this->position->getX()+dx,this->position->getY()+dy);
}
void Square::draw( Graphics^ g, Color^ color) {
	PointF^ leftup = gcnew PointF(this->position->getX()-(this->side)/2, this->position->getY()+(this->side)/2 );
	PointF^ rightup = gcnew PointF(this->position->getX()+(this->side)/2, this->position->getY()+(this->side)/2 );

	PointF^ leftdown = gcnew PointF(this->position->getX()-(this->side)/2, this->position->getY()-(this->side)/2 );
	PointF^ rightdown = gcnew PointF(this->position->getX()+(this->side)/2, this->position->getY()-(this->side)/2 );

	g->DrawLine(gcnew Pen(*color), *leftup, *rightup);
	g->DrawLine(gcnew Pen(*color), *leftdown, *rightdown);
	g->DrawLine(gcnew Pen(*color), *leftup, *leftdown);
	g->DrawLine(gcnew Pen(*color), *rightup, *rightdown);
}

}