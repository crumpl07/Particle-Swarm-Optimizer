#include <iostream>
#include "Swarm.h";

Swarm::Swarm(int newPopSize, double newInertia, double* newGBest)
{
	popSize = newPopSize;
	inertia = newInertia;
	gBest = newGBest;
}

void Swarm::InitializeSwarm()
{
	
}

void Swarm::SetGlobalBest(double* newGB)
{
	
}

double* Swarm::GetGlobalBest()
{

}
