#include "StdAfx.h"
#include "Figure.h"
namespace CourseWork {

Figure::Figure(String^ name, Color color, Coordinates^ position) {
	this->name=name;
	this->color=color;
	this->position=position;
}

Color Figure::getColor() {
	return this->color;
}

void Figure::setColor(Color cl) {
	this->color=cl;
}

String^ Figure::getName() {
	return this->name;
}

void Figure::setName(String^ name) {
	this->name=name;
}

Coordinates^ Figure::Position() {
	return this->position;
}
void Figure::setPositon(Coordinates^ point) {
	this->position=point;
}
}