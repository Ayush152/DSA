#include <iostream>
#include <string>
#define n 100

using namespace std;
class stack
{
private:
    char *arr;
    int top;

public:
    stack()
    {
        arr = new char[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    int print()
    {
        if (top == -1)
        {
            cout << "No element to print" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};

int prec(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string s)
{
    string res;
    stack st;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.print() != '(')
            {
                res += st.print();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && (prec(st.print()) > prec(s[i])))
            {
                res += st.print();
                st.pop();
            }

            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.print();
        st.pop();
    }

    return res;
}

int main()
{

    cout << infixtopostfix("(a*b/c-d)^e-f+g/f");

    return 0;
}