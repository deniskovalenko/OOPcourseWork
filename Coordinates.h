#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
namespace CourseWork {
[Serializable]
ref class Coordinates
{
private:
	double x;
	double y;	
public:

	Coordinates(double x, double y);
	Coordinates(Coordinates^ clone);	
	double getX();
	double getY();
	void setX(double x);
	void setY(double y);

	double distTo(Coordinates^ coord);
};

}