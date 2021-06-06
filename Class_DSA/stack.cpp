#include <bits/stdc++.h>

using namespace std;

int main()
{
    int stack[100], n = 100, top = -1;
    cout << "Here is the menu driven program for the implementation of stack\n\n";
    int k;
    cout << "Enter 1. for pushing element in the stack" << endl
         << "Enter 2. for popping an element from the stack" << endl
         << "Enter 3. to display elements in the stack" << endl
         << "Enter 4. to search for an element in the stack" << endl
         << "Enter 5. to exit the program" << endl;

    while (1)
    {
        cin >> k;
        bool flag = false;
        int m;

        if (k == 1)
        {

            cout << "Enter the number to push in stack" << endl;
            cin >> m;
            if (top > n - 1)
            {
                cout << "Stack Overflow" << endl;
            }
            else
            {
                top++;
                stack[top] = m;
            }
        }

        else if (k == 2)
        {
            cout << "Last Most element is popped" << endl;
            if (top < 0)
            {
                cout << "stack underflow" << endl;
            }
            else
            {
                cout << "Popped element is: " << stack[top] << endl;
                top--;
            }
        }
        else if (k == 3)
        {
            if (top >= 0)
            {
                cout << "Your stack is: ";
                for (int i = top; i >= 0; i--)
                {
                    cout << stack[i] << " ";
                }
            }
            else
            {
                cout << "Stack is empty" << endl;
            }
        }
        else if (k == 4)
        {
            cout << "Input the key to be found ";
            int key;
            cin >> key;

            if (top == -1)
            {
                cout << "Stack is empty . Therefore , element is not found\n";
            }
            else
            {
                for (int i = top; i > -1; i--)
                {
                    if (stack[i] == key)
                    {
                        flag = true;
                        cout << "Element is found and index of element is " << i << endl;;
                    }
                }
                if (flag == false)
                    cout << "Element not found" << endl;
            }
        }
        else if (k == 5)
        {
            exit(0);
        }
    }
    return 0;
}