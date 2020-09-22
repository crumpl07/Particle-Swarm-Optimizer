#pragma once
#include "Vector.h"

class Particle
{
private:

public:
	//Constructors 
	Particle();
	Particle(Vector newPBest);
	Particle(double xbound, double ybound, double zbound);
	Vector position;
	Vector velocity;
	Vector pBest;

protected:

};