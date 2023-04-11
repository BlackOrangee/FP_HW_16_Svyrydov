// Task 3. Write a function that determines the number of positive, negative and zero elements of the array passed to it.
//

#include <iostream>
using namespace std;

int DeterminateNumber(int arr[], int SIZE, int menu);
void OutputArray(int arr[], int SIZE);

int main()
{
	int menu = 0;
	const int SIZE = 10;
	int arr[SIZE] = { 5, 3, -2, 0, -4, 6, 0, -9, 4, 10 };

	OutputArray(arr, SIZE);

	while (true)
	{	//User menu
		cout << "\n\n\t1 -- Determinate number of positive elements\n\t2 -- Determinate number of zero elements\n\t3 -- Determinate number of negative elements\n\t0 -- Exit\n\n\t"; cin >> menu;
		if (menu == 0)
		{
			return 0;
		}
		cout << "\n\t" << DeterminateNumber(arr, SIZE, menu);	//Show chosen option
	}
}

int DeterminateNumber(int arr[], int SIZE, int menu)
{
	int positive = 0;
	int zero = 0;
	int negative = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			positive++;	//Determinate number of positive elements
		}
		if (arr[i] == 0)
		{
			zero++;	//Determinate number of zero elements
		}
		if (arr[i] < 0)
		{
			negative++;	//Determinate number of negative elements
		}
	}
	switch (menu) //Return option
	{
	case 1:
		return positive;
	case 2:
		return zero;
	case 3:
		return negative;
	default:
		break;
	}
}

void OutputArray(int arr[], int SIZE) //Output array
{
	cout << "\n\n\t";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}
