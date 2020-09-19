#include <iostream>
#include "FunctionDec.h"
#include "Vector.h"
#include "Swarm.h"
#include <time.h>;


int main()
{
	int popSize = 10;
	Vector endPoint(7,7,7);
	Vector globalBest;
	double xbound, ybound, zbound, bestEval, inertia, sc, cc;
	xbound = 10;
	ybound = 10;
	zbound = 10;
	bestEval = 100;
	inertia = 0.8;
	sc = 1.8;
	cc = 1.8;
	bool x = true;

	Swarm swarm(popSize, endPoint);
	swarm.InitializeSwarm(xbound, ybound, zbound);

	while (x)
	{
		srand((unsigned) time(NULL));
		//Evaluate fitness of each individual
		for (int i = 0; i < popSize; i++)
		{
			//Set Global Best
			if (swarm.FitnessEval(swarm.particles[i].position, endPoint) < bestEval)
			{
				bestEval = swarm.FitnessEval(swarm.particles[i].position, endPoint);
				globalBest = swarm.particles[i].position;
				std::cout << "X: " << (globalBest.GetX()) << ", Y: " << globalBest.GetY() << ", Z = " << globalBest.GetZ() << std::endl;
			} 

			//Set Personal Best
			if (swarm.FitnessEval(swarm.particles[i].position, endPoint) < swarm.FitnessEval(swarm.particles[i].pBest, endPoint))
			{
				swarm.particles[i].pBest = swarm.particles[i].position;
			}
		}

		//End if the criteria has been met
		if (globalBest.GetX() == endPoint.GetX() && globalBest.GetY() == endPoint.GetY() && globalBest.GetZ() == endPoint.GetZ())
		{
			x = false;
		}

		//Update velocity and position
		for (int i = 0; i < popSize; i++)
		{
			swarm.particles[i].velocity = swarm.UpdateVelocity(swarm.particles[i].position, swarm.particles[i].velocity, swarm.gBest, swarm.particles[i].pBest, inertia, sc, cc);
			swarm.particles[i].position = swarm.UpdatePosition(swarm.particles[i].velocity, swarm.particles[i].velocity);
		}
	}
} 

