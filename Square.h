#pragma once
#include "Figure.h"
using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace CourseWork {
[Serializable]
ref class Square : public Figure //, public IDrawable, public IMovable
{
private:
	double side;
	double init_side;
public:
	virtual void restoreState() override;
	Square(String^ name, Color color, double x, double y, double side);
	virtual void move(double dx, double dy) override;
	virtual void draw(Graphics^ g, Color^ color) override;
	virtual Figure^ copy() override;
	virtual void deform() override;
	virtual void unDeform() override;
	virtual bool  inComfortZone(Figure^ figure) override;
	virtual double getComfortZone() override;
};

}