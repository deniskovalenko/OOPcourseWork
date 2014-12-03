#pragma once
#include "Figure.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;



namespace CourseWork {
[Serializable]
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

	virtual void deform() override;
	virtual void unDeform() override;

	virtual bool inComfortZone(Figure^ figure) override;

	virtual double getComfortZone() override;

	virtual void forceColor(Color^ color) override;
	virtual void restoreColor() override;

};

}