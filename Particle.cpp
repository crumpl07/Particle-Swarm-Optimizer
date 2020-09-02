#include "Particle.h"
#include <iostream>

Particle::Particle(double* newPBest)
	:
	position(),
	velocity()
{
	pBest = newPBest;
}