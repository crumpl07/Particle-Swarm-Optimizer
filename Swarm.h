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
	void InitializeSwarm();
	void SetGlobalBest(double*);
	double* GetGlobalBest();
	double FitnessEval(Vector);

protected:

};