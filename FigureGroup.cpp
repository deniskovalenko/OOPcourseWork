#include "StdAfx.h"
#include "FigureGroup.h"

namespace CourseWork {
FigureGroup::FigureGroup(String^ name):Figure(name, Color::Blue, gcnew Coordinates(0,0))
{
	group = gcnew List<Figure^>();
}
void FigureGroup::addFigure(Figure^ figure) {
	group->Add(figure->copy());
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
void FigureGroup::deform() {}

void FigureGroup::unDeform() {}


}