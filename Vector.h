#pragma once

class Vector
{
private:

public:
	//Variables
	double x;
	double y;
	double z;

	//Constructors
	Vector();
	Vector(double x, double y, double z);
	
	//Functions
	double GetDistance(Vector particle1, Vector particle2);
	void SetX(double x);
	double GetX();
	void SetY(double y);
	double GetY();
	void SetZ(double z);
	double GetZ();
	

protected:

};