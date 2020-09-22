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

void Swarm::InitializeSwarm(double xBound, double yBound, double zBound)
{
	for(int i = 0; i < 10; i++)
	{
		particles.push_back(Particle(xBound, yBound, zBound));
	}
}

void Swarm::SetGlobalBest(Vector newGB)
{
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

	temp = (velocity.GetX() * inertia) + (sc * RandomNumber() * (pBest.GetX() - position.GetX())) + (cc * RandomNumber() * (gBest.GetX() - position.GetX()));
	if (velocity.GetX() < 0 || velocity.GetX() > 10)
	{
		temp = abs(std::fmod(temp, 10));
	}
	velocity.SetX(temp);

	temp = (velocity.GetY() * inertia) + (sc * RandomNumber() * (pBest.GetY() - position.GetY())) + (cc * RandomNumber() * (gBest.GetY() - position.GetY()));
	if (velocity.GetY() < 0 || velocity.GetY() > 10)
	{
		temp = abs(std::fmod(temp, 10));
	}
	velocity.SetY(temp);

	temp = (velocity.GetZ() * inertia) + (sc * RandomNumber() * (pBest.GetZ() - position.GetZ())) + (cc * RandomNumber() * (gBest.GetZ() - position.GetZ()));
	if (velocity.GetZ() < 0 || velocity.GetZ() > 10)
	{
		temp = abs(std::fmod(temp, 10));
	}
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

double Swarm::RandomNumber()
{
	return ((double)rand() / RAND_MAX);
}