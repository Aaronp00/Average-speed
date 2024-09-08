#include <iostream>

#include <iomanip>

using namespace std;

int main()

{

	double DistanceXtoY;

	double DistanceYtoZ;

	double TimeXtoY;

	double TimeYtoZ;

	std::cout << "What's Distance between X and Y in KM: ";// This is  where the user would input the distance in kilometres.If its 35Kilometers then user should put 35. 

	std::cin >> DistanceXtoY;

	std::cout << "What's the distance between Y and Z in KM:";

	std::cin >> DistanceYtoZ;

	std::cout << " The time taken from X to Y in hours?: "; // This is where the user should input the time taken in hours. If it took 40minutes then the user should put 0.4, if it took 1hr20minutes then the user should put 1.4

	std::cin >> TimeXtoY;

	std::cout << " The time taken from Y to Z in hours?:";

	std::cin >> TimeYtoZ;

	double Distancetotal = DistanceXtoY + DistanceYtoZ; // Adding both of the distances will give us the tiotal of both distances 

	double Timetotal = TimeXtoY + TimeYtoZ;// Adding both of the times will give us the total of both times

	double Averagespeed = Distancetotal / Timetotal; // By dividing both totals , this will give me an average of both inputs

	std::cout << "Average speed was " << Averagespeed << "Km/H" << endl; // This is the layout of my output

	return 0;

}