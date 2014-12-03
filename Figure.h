#pragma once
#include "Coordinates.h"
#include "IDrawable.h"
#include "IMovable.h"

using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Drawing;

namespace CourseWork {
[Serializable]
ref class  Figure abstract  : public IDrawable, public IMovable
{
protected:
	Coordinates^ position;
	Color color;
	String^ name;
	bool isSelected;
	bool isVisible;
	bool color_forced;
	Color saved_color;
	bool isDeformed;
	Bitmap^ canvas;
	Color init_color;
	Coordinates^ init_position;
public:

	virtual void restoreState()=0;
	void draw(Graphics^ g);
	virtual void move(double dx, double dy)=0;
	virtual void draw(Graphics^ g, Color^ color)=0;
	virtual Figure^ copy()=0;
	virtual void forceColor(Color^ color);
	virtual void restoreColor();
	virtual void deform()=0;
	virtual void unDeform()=0;
	

	Figure(String^ name, Color color, Coordinates^ position);
	void setName(String^ newName);
	String^ getName();

	Color getColor();
	void setColor(Color c);

	Coordinates^ getPosition();
	void setPosition(Coordinates^ point);

	void unselect();
	void select();

	bool checkVisible();
	void setVisible(bool isVisible);

	double distTo(Figure^ figure);
	
	virtual bool inComfortZone(Figure^ figure)=0; 

	virtual double getComfortZone()=0;

};

}