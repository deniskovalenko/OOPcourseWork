#pragma once
#include "Figure.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Drawing;
namespace CourseWork {
ref class FigureGroup :
public Figure
{
private:
	List<Figure^>^ group;

public:
	FigureGroup(String^ name);
	
	void addFigure(Figure^ figure);
	
	virtual Figure^ copy() override;
	virtual void move(double dx, double dy) override;
	virtual void draw(Graphics^ g, Color^ color) override;
	virtual void restoreState() override;


};

}