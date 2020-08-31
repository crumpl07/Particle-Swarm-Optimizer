#include <iostream>
#include "Vector.h"


Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(double nx, double ny, double nz)
{
	x = nz;
	y = ny;
	z = nz;
}

void Vector::SetX(double newX)
{
	x = newX;
}

double Vector::GetX()
{
	return x;
}

void Vector::SetY(double newY)
{
	y = newY;
}

double Vector::GetY()
{
	return y;
}

void Vector::SetZ(double newZ)
{
	z = newZ;
}

double Vector::GetZ()
{
	return z;
}
