#pragma once
#include "Coordinates.h"
using namespace System;
using namespace System::Drawing;

ref class Figure
{
protected:
	Coordinates^ position;
	Color color;
	String^ name;
public:
	void setName(String^ newName);
	String^ getName();

	Color getColor();
	void setColor(Color c);

	Coordinates^ Position();
	void setPositon(Coordinates^ point);
};

