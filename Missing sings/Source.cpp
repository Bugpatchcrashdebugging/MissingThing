#include<iostream>
#include"Missing.h"
int main()
{
	const int fullSize = 5;
	int massA[fullSize] = { 2,3,4,5,8 };
	int massB[fullSize-1] = { 2,3,4,5};
	MissingThin<int> MissingThinInMass;
	int missing = MissingThinInMass(massA, massB, fullSize);
	return 0;
}