#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	
	const int SIZE = 10; // setting variable
	int arr[SIZE]; // make a massive
	bool alreadyThere; // setting variable
	srand(time(NULL));

	for (int i = 0; i != SIZE;)
	{
		alreadyThere = false;

		int newRandomValue = rand() % 20;
		
		for (int j = 0; j != i; j++)
		{

			if (arr[j] == newRandomValue)
			{
				alreadyThere = true;
			}
			
		}

		if (!alreadyThere)
		{
			arr[i] = newRandomValue;
			i++;
		}
	}

	for (int i = 0; i != SIZE; i++)
	{
		cout << arr[i]<<" ";
	}
}