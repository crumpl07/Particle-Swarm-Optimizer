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

Vector Swarm::UpdateVelocity(Vector velocity, Vector position, Vector gBest, Vector pBest, double inertia, double cc, double sc)
{
	double temp = 0;
	temp = (velocity.GetX() * inertia) + (sc * ((double)rand() / RAND_MAX) * (pBest.GetX() - velocity.GetX())) + (sc * ((double)rand() / RAND_MAX) * (gBest.GetX() - velocity.GetX()));
	velocity.SetX(temp);
	temp = (velocity.GetY() * inertia) + (sc * ((double)rand() / RAND_MAX) * (pBest.GetY() - velocity.GetY())) + (sc * ((double)rand() / RAND_MAX) * (gBest.GetY() - velocity.GetY()));
	velocity.SetY(temp);
	temp = (velocity.GetZ() * inertia) + (sc * ((double)rand() / RAND_MAX) * (pBest.GetZ() - velocity.GetZ())) + (sc * ((double)rand() / RAND_MAX) * (gBest.GetZ() - velocity.GetZ()));
	velocity.SetZ(temp);
	return velocity;
}

Vector Swarm::UpdatePosition(Vector velocity, Vector position)
{
	double temp = 0;
	temp = position.GetX() + velocity.GetX();
	position.SetX(temp);
	temp = position.GetY() + velocity.GetY();
	position.SetY(temp);
	temp = position.GetZ() + velocity.GetZ();
	position.SetZ(temp);
	return position;
}