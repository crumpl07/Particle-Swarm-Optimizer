#pragma once

class Swarm
{
private:
	float socialComponent;
	float congnitiveComponent;

public:
	int popSize;
	double inertia;
	double* gBest;

	Swarm(int, double, double*);
	void InitializeSwarm();
	void SetGlobalBest(double*);
	double* GetGlobalBest();

protected:

};