#include "StdAfx.h"
#include "Coordinates.h"
#include "math.h"
using namespace System;

namespace CourseWork {


	Coordinates::Coordinates(double x, double y) {
		this->x=x;
		this->y=y;
	}
	Coordinates::Coordinates(Coordinates^ clone) {
		this->x = clone->x;
		this->y = clone->y;
	}
	
	double Coordinates::getX()
	{
		return x;
	}

	double Coordinates::getY()
	{
		return y;
	}

	void Coordinates::setX( double x )
	{
		this->x = x;
	}

	void Coordinates::setY( double y )
	{
		this->y = y;
	}

	double Coordinates::distTo(Coordinates^ coord) {
		return sqrt(pow((this->x - coord->x),2.0) + pow((this->y - coord->y),2.0) );
	}

}