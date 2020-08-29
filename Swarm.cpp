#include <iostream>

class Swarm
{
private:
	double socialComponent;
	double cognitiveComponent;

public:
	double globalBest[2];


	Swarm(double gBX, double gBY, double gBZ)
	{
		globalBest[0] = gBX;
		globalBest[1] = gBY;
		globalBest[2] = gBZ;

	}

	void InitializeSwarmX(double popSize)
	{
		Particle particle(rand% 10, rand% 10)
	}

	double* GetGlobalBest()
	{
		return globalBest;
	}

	void SetGlobalBest(double* newGlobalBest)
	{
		globalBest[0] = newGlobalBest[0];
		globalBest[1] = newGlobalBest[1];
		globalBest[2] = newGlobalBest[2];
	}
};