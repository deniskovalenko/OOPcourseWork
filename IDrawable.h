#pragma once
using namespace System;
using namespace System::Drawing;
namespace CourseWork {
interface class IDrawable
{
public:
	virtual void draw(Graphics^ g, Color^ color)=0;
};

}