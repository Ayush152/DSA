#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void creat(int A[],int n)
{
	cout<<"Enter the elements of the array : \n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}

void sort(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				swap(&A[i],&A[j]);
			}
		}
	}
}

void display(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}

int main()
{
	int *A,n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	A=new int[n];
	creat(A,n);
	sort(A,n);
	display(A,n);

	return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin >> n;

// 	int *arr = new int[n];
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];

// 	int counter = 0;
// 	while (counter < n - 1)
// 	{
// 		for (int i = 0; i < n - 1 - counter; i++)
// 		{
// 			if (arr[i + 1] < arr[i])
// 			{
// 				int temp = arr[i + 1];
// 				arr[i + 1] = arr[i];
// 				arr[i] = temp;
// 			}
// 		}
// 		counter ++;
// 	}
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";

// 	cout << endl;

// 	return 0;
// }