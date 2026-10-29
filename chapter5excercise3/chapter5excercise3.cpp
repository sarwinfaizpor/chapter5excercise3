#include <iostream>
using namespace std;

int main()
{
	double speed;
	int hours;

	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;

	while (speed < 0)
	{
		cout << "Enter a speed of 0 or greater: ";
		cin >> speed;
	}

	cout << "How many hours has it traveled? ";
	cin >> hours;

	while (hours < 1)
	{
		cout << "Enter at least 1 hour: ";
		cin >> hours;
	}

	cout << "Hour\tMiles Traveled" << endl;
	cout << "------------------------" << endl;

	for (int hour = 1; hour <= hours; hour++)
	{
		double distance = speed * hour;
		cout << hour << "\t" << distance << endl;
	}

	return 0;
}
