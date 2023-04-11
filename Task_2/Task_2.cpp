// Task_2. Write a function that determines the arithmetic mean of the elements of the array passed to it
//

#include <iostream>
using namespace std;

int Average(int arr[], int SIZE);
void OutputArray(int arr[], int SIZE);
void GenerateArray(int arr[], int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE];

	GenerateArray(arr, SIZE);
	OutputArray(arr, SIZE);

	cout << "\n\n\tAverage: " << Average(arr, SIZE) << "\n\n\n";
}

int Average(int arr[], int SIZE) //Calculate array average
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum / SIZE;
}

void OutputArray(int arr[], int SIZE) //Output array
{
	cout << "\n\n\t";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}

void GenerateArray(int arr[], int SIZE) // Generate array
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}
