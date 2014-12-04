#include "StdAfx.h"
#include "FigureGroup.h"
namespace CourseWork {
FigureGroup::FigureGroup(String^ name):Figure(name, Color::Blue, gcnew Coordinates(0,0))
{
	group = gcnew List<Figure^>();
}
void FigureGroup::addFigure(Figure^ figure) {
	group->Add(figure->copy());
	if (group->Count==0) {this->setPosition(figure->getPosition());} else
	{this->setPosition(gcnew Coordinates((this->getPosition()->getX()+figure->getPosition()->getX())/2.0, (this->getPosition()->getY()+figure->getPosition()->getY())/2.0 ));}
}

void FigureGroup::restoreState() {
	this->position=this->init_position;
}
Figure^ FigureGroup::copy(){
	FigureGroup^ copy = gcnew FigureGroup(this->name);
	for each (Figure^ figure in group) {
		copy->addFigure(figure);
	}
	return copy;
}
void FigureGroup::move(double dx, double dy){
	for each (Figure^ figure in group) {
		figure->move(dx, dy);
	}
}
void FigureGroup::draw(Graphics^ g, Color^ color){
	for each (Figure^ figure in group) {
		figure->draw(g, figure->getColor());
	}
}
void FigureGroup::deform() {
for each (Figure^ fig in group) {
	fig->deform();}
}

void FigureGroup::unDeform() {
for each (Figure^ fig in group) {
	fig->unDeform();
}
}

bool FigureGroup::inComfortZone(Figure^ figure) {
	if (this==figure || figure==nullptr) {return false;}
	for each (Figure^ fig in group) {
		if (fig->inComfortZone(figure)) {return true;}
	}
	return false;
}
double FigureGroup::getComfortZone() {
		
	double sum = 0;
	for each (Figure^ fig in group) {
		sum+=fig->getComfortZone();
	}
	return sum;
}

void FigureGroup::forceColor(Color^ color) {
	for each (Figure^ fig in group) {
		fig->forceColor(color);
	}
}

void FigureGroup::restoreColor() {
	for each (Figure^ fig in group) {
		fig->restoreColor();
	}
}


}