#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int start = 0, end = n-1;
    int mid = (start + end)/2;
    
    if (input[mid] == val){
        return mid;
    }
    while (true) {
        if (input[mid] < val){
        	start = mid + 1;
        	mid = (start + end)/2;
            if(input[mid] == val)
                return mid;
        }
        else {
            end = mid - 1;
        	mid = (start + end)/2;
            if(input[mid] == val)
                return mid;
        }
        if (start > end)
            return -1;
    }
}

int main()
{
	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}