#include <iostream>
#include <vector>
#include "Swarm.h";
#include "Particle.h";


Swarm::Swarm(int newPopSize, Vector endPoint)
{
	popSize = newPopSize;
	endPoint = endPoint;
	congnitiveComponent = .1;
	socialComponent = .1;
	inertia = .8;
}

	//Initilizes the particles in the swarm
void Swarm::InitializeSwarm(double xBound, double yBound, double zBound)
{
	std::vector<Particle> particles;
	for(int i = 0; i < 10; i++)
	{
		particles.push_back(Particle(xBound, yBound, zBound));
	}
}

void Swarm::SetGlobalBest(Vector newGB)
{
	//Set gbest to the particle closest to the goal.
	gBest = newGB;
}

Vector Swarm::GetGlobalBest()
{
	return gBest;
}

double Swarm::FitnessEval(Vector individual)
{
	double eval = 0;
	/*find the distance between each particle and the 
	goal. This distance will be captured as a double and
	returned as the fitness value. THe lower the value the
	better the evaluation.*/


	return eval;
}