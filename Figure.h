#pragma once
#include "Coordinates.h"
#include "IDrawable.h"
#include "IMovable.h"

using namespace System;
using namespace System::Drawing;

namespace CourseWork {
ref class  Figure abstract  : public IDrawable, public IMovable
{
protected:
	Coordinates^ position;
	Color color;
	String^ name;
	bool isSelected;
	bool isVisible;
public:
	virtual void move(double dx, double dy)=0;
	virtual void draw(Graphics^ g, Color^ color)=0;

	Figure(String^ name, Color color, Coordinates^ position);
	void setName(String^ newName);
	String^ getName();

	Color getColor();
	void setColor(Color c);

	Coordinates^ Position();
	void setPositon(Coordinates^ point);

	void unselect();
	void select();

	bool checkVisible();
	void setVisible(bool isVisible);
};

}