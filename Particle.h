#pragma once
#include "Vector.h"

class Particle
{
private:

public:
	Particle();
	Particle(Vector newPBest);
	Particle(double xbound, double ybound, double zbound);
	Vector position;
	Vector velocity;
	Vector pBest;

protected:

};