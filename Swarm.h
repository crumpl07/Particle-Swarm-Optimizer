#pragma once
#include <vector>
#include "Vector.h";
#include "Particle.h"

class Swarm
{
private:


public:
	//Variables
	int popSize;
	double inertia = 0.8;
	Vector gBest;
	double socialComponent = 0.1;
	double congnitiveComponent = 0.1;
	std::vector<Particle> particles;

	//Functions
	Swarm(int newPopSize, Vector endPoint);
	void InitializeSwarm(double xBound, double yBound, double zBound);
	void SetGlobalBest(Vector);
	Vector GetGlobalBest();
	double FitnessEval(Vector individual, Vector endPoint);
	Vector UpdateVelocity(Vector velocity, Vector position, Vector gBest, Vector pBest);
	Vector UpdatePosition(Vector velocity, Vector position);

protected:

};