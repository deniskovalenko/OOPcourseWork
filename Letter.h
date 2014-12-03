#pragma once
#include "Figure.h"
using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace CourseWork {
[Serializable]
ref class Letter :
public Figure {
private:
	double size;
	double init_size;
public:
	virtual void restoreState() override;
	Letter(String^ name, Color color, double x, double y, double size);
	virtual void move(double dx, double dy) override;
	virtual void draw(Graphics^ g, Color^ color) override;
	virtual Figure^ copy() override;
	virtual void deform() override;
	virtual void unDeform() override;

	virtual bool inComfortZone(Figure^ figure) override;

	virtual double getComfortZone() override;
};

}
