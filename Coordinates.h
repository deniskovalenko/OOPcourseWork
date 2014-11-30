#pragma once
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
};

