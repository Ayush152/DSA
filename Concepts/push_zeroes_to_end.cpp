#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int n)
{
    int k = 0;
    for (int i=0; i<n; i++){
        if (input [i] != 0){
            input [k] = input [i];
            k++;
        } 
    }
    while (k < n){
        input [k] = 0;
        k++;
    }
}

int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}