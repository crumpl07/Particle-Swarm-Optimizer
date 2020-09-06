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

double Vector::GetDistance(Vector particle1, Vector particle2)
{
	double x, y, z, distance;
	x = particle1.GetX() + particle2.GetX();
	y = particle1.GetY() + particle2.GetY();
	z = particle1.GetZ() + particle2.GetZ();
	x = std::pow(x,2);
	y = std::pow(y, 2);
	z = std::pow(z, 2);
	distance = x + y + z;
	distance = std::sqrt(distance);

	return distance;
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
