#pragma once
#include "Figure.h"
namespace CourseWork {
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
};

}