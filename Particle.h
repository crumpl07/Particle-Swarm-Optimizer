#pragma once
#include "Vector.h"

class Particle
{
private:

public:
	double* pBest;

	Particle(double *);
	Vector position();
	Vector velocity();

protected:

};