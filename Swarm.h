#pragma once
#include "Vector.h";

class Swarm
{
private:


public:
	int popSize;
	double inertia;
	double* gBest;
	float socialComponent;
	float congnitiveComponent;

	Swarm(int, double, double*, float, float);
	void InitializeSwarm(double xBound, double yBound, double zBound);
	void SetGlobalBest(double*);
	Vector GetGlobalBest();
	double FitnessEval(Vector individual);

protected:

};