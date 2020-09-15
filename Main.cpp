#include <iostream>
#include "FunctionDec.h"
#include "Vector.h"
#include "Swarm.h"


int main()
{
	int popSize = 10;
	Vector globalBest(10,10,10);
	double xbound, ybound, zbound;
	xbound = 10;
	ybound = 10;
	zbound = 10;

	Swarm hello(popSize, globalBest);
	
	//Steps
	//1. Initialize x randomly
	//2. Initialize V randomly
	hello.InitializeSwarm(xbound, ybound, zbound);
	//3. Evaluate fitness of each individual
	for (int i = 0; i < popSize; i++)
	{
		
	}
	//4. Initialize Pbest: best location
	//5. Initialize Gbest with the best fitness
	//6. Repeat until a certain criteria has been met
} 