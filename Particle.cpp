#include "Particle.h"
#include <iostream>


Particle::Particle(Vector newPBest)
	:
	position(),
	velocity()
{
	pBest = newPBest;
}

Particle::Particle(double xBound, double yBound, double zBound)
{
	position.SetX((static_cast<double>(rand()) / static_cast <double> (RAND_MAX)) * xBound);
	position.SetY((static_cast<double>(rand()) / static_cast <double> (RAND_MAX)) * yBound);
	position.SetZ((static_cast<double>(rand()) / static_cast <double> (RAND_MAX)) * zBound);

	velocity.SetX((static_cast<double>(rand()) / static_cast <double> (RAND_MAX)) * xBound);
	velocity.SetY((static_cast<double>(rand()) / static_cast <double> (RAND_MAX)) * yBound);
	velocity.SetZ((static_cast<double>(rand()) / static_cast <double> (RAND_MAX)) * zBound);
}