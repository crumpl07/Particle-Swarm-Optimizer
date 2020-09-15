#pragma once
#include "Vector.h";

class Swarm
{
private:


public:
	int popSize;
	double inertia = 0.8;
	Vector gBest;
	float socialComponent = 0.1;
	float congnitiveComponent = 0.1;

	Swarm(int, Vector);
	void InitializeSwarm(double xBound, double yBound, double zBound);
	void SetGlobalBest(Vector);
	Vector GetGlobalBest();
	double FitnessEval(Vector individual);

protected:

};