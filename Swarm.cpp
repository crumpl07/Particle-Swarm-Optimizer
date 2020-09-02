#include <iostream>
#include "Swarm.h";

Swarm::Swarm(int newPopSize, double newInertia, double* newGBest, float sc, float cc)
{
	popSize = newPopSize;
	inertia = newInertia;
	gBest = newGBest;
	socialComponent = sc;
	congnitiveComponent = cc;
}

void Swarm::InitializeSwarm()
{
	
}

double FitnessEval(Vector)
{

}

void Swarm::SetGlobalBest(double* newGB)
{
	
}

double* Swarm::GetGlobalBest()
{

}
