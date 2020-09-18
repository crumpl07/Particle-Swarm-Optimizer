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
	particles;

}

	//Initilizes the particles in the swarm
void Swarm::InitializeSwarm(double xBound, double yBound, double zBound)
{
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

double Swarm::FitnessEval(Vector individual, Vector endPoint)
{
	double eval;

	eval = individual.GetDistance(individual, endPoint);

	return eval;
}

Vector Swarm::UpdateVelocity(Vector velocity, Vector position, Vector gBest, Vector pBest)
{
	double temp = 0;
	temp = velocity.GetX() + 2.0 * (rand() / (RAND_MAX)) * (pBest.GetX() - position.GetX()) + 2.0 * (rand() / (RAND_MAX)) * (gBest.GetX() - position.GetX());
	velocity.SetX(temp);
	temp = velocity.GetY() + 2.0 * (rand() / (RAND_MAX)) * (pBest.GetY() - position.GetY()) + 2.0 * (rand() / (RAND_MAX)) * (gBest.GetY() - position.GetY());
	velocity.SetY(temp);
	temp = velocity.GetZ() + 2.0 * (rand() / (RAND_MAX)) * (pBest.GetZ() - position.GetZ()) + 2.0 * (rand() / (RAND_MAX)) * (gBest.GetZ() - position.GetZ());
	velocity.SetZ(temp);
}

Vector Swarm::UpdatePosition(Vector velocity, Vector position)
{
	double temp;
	temp = position.GetX() + velocity.GetX();
	position.SetX(temp);
	temp = position.GetY() + velocity.GetY();
	position.SetY(temp);
	temp = position.GetZ() + velocity.GetZ();
	position.SetZ(temp);
}