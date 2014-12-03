#include "StdAfx.h"
#include "Figure.h"
#include "ImageContainer.h"

namespace CourseWork {

Figure::Figure(String^ name, Color color, Coordinates^ position) {
	this->name=name;
	this->color=color;
	this->position=position;
	this->isVisible=true;
	this->init_position=position;
	this->init_color=color;
	this->canvas = gcnew Bitmap(ImageContainer::getContainer()->pbWidth(), ImageContainer::getContainer()->pbHeight());
	this->isDeformed = false;
	this->color_forced = false;
	this->saved_color=color;
}

Color Figure::getColor() {
	return this->color;
}

void Figure::setColor(Color cl) {
	this->color=cl;
	this->saved_color=cl;
}

String^ Figure::getName() {
	return this->name;
}

void Figure::setName(String^ name) {
	this->name=name;
}

Coordinates^ Figure::getPosition() {
	return this->position;
}
void Figure::setPosition(Coordinates^ point) {
	this->position=point;
}

void Figure::select()
{
	this->isSelected = true;
}

void Figure::unselect()
{
	this->isSelected = false;
}

bool Figure::checkVisible()
{
	return this->isVisible;
}

void Figure::setVisible(bool isVisible)
{
	this->isVisible = isVisible;
}

void Figure::draw( Graphics^ g )
	{
		if(isVisible)
		{
			if(ImageContainer::getContainer()->getDrawTraces())
			{
				Graphics^ g_tmp = Graphics::FromImage((Image^)canvas);
				draw(g_tmp,this->color);
				g->DrawImage((Image^)canvas,0,0);
			}
			else
			{
				draw(g,this->color);
			}
		}
	}

double Figure::distTo(Figure^ figure) {
	return  (this->getPosition())->distTo(figure->getPosition());
}

void Figure::forceColor(Color^ color) {
	if (!color_forced) {
		saved_color=this->color; 
		this->color_forced=true;
	}
		this->color=*color;		 
}

void Figure::restoreColor() {
	this->color=saved_color;
	color_forced=false;
}

}