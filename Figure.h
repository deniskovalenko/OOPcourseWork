#pragma once
#include "Coordinates.h"
using namespace System;
using namespace System::Drawing;
namespace CourseWork {
ref class Figure
{
protected:
	Coordinates^ position;
	Color color;
	String^ name;
public:
	Figure(String^ name, Color color, Coordinates^ position);
	void setName(String^ newName);
	String^ getName();

	Color getColor();
	void setColor(Color c);

	Coordinates^ Position();
	void setPositon(Coordinates^ point);
};

}