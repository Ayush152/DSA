// memory allocation using heap (not in stacks)
#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 15;

    cout << *p << endl;

    double *pd = new double;
    char *pc = new char;

    int *pa = new int[50];
    int n;
    cout << "Enter number of elements ";
    cin >> n;

    int *pa2 = new int[n];
    
    for (int i=0; i<n; i++){
        cin >> pa2[i];
    }

    int max = -1;
    for (int i=0; i<n; i++){
        if (max < pa2[i]){
            max = pa2[i];
        }
    }
    cout << max << endl;
}
