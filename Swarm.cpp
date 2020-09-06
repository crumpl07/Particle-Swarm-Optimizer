#include <iostream>
#include <vector>
#include "Swarm.h";
#include "Particle.h";


Swarm::Swarm(int newPopSize, double newInertia, double* newGBest, float sc, float cc)
{
	popSize = newPopSize;
	inertia = newInertia;
	gBest = newGBest;
	socialComponent = sc;
	congnitiveComponent = cc;
}

void Swarm::InitializeSwarm(double xBound, double yBound, double zBound)
{
	std::vector<Particle> particles;
	for (int i = 10; i < 10; i++)
	{
		particles.push_back(Particle(xBound, yBound, zBound));
	}
}

void Swarm::SetGlobalBest(double* newGB)
{
	
}

Vector Swarm::GetGlobalBest()
{
	Vector globalBest;
	return globalBest;
}

double Swarm::FitnessEval(Vector individual)
{
	double eval;
	return eval;
}