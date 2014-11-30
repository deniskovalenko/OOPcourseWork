#pragma once
#include "Figure.h"
#include "IDrawable.h"
#include "IMovable.h"
namespace CourseWork {
ref class Square : public Figure //, public IDrawable, public IMovable
{
private:
	double side;
public:
	Square(String^ name, Color color, double x, double y, double side);
	virtual void move(double dx, double dy) override;
	virtual void draw(Graphics^ g, Color^ color) override;
};

}