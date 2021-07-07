#include <bits/stdc++.h>
using namespace std;

#define MAX 5

struct que
{
    int f;
    int r;
    int size;
    int arr[MAX];
};

void enq(int a, que *q);
int dq(que *q);
bool isfull(que *q);
bool isempty(que *q);
void disp(que q);
void search(int n, que q);

int main()
{
    que q;
    q.r = -1;
    q.f = -1;
    q.size = 0;

    cout << "Enter Command \n";
    cout << "Enter '1' for enq \n"
         << "Enter '2' for dq \n";
    cout << "Enter '3' for search \n"
         << "Enter '4' for display \n";
    cout << "Enter '5' for quit \n";

    int flag = 1;
    while(flag)
    {
        cout << "Enter command : ";
        int c, n, val; cin >> c;
        switch (c)
        {
            case (5):
                flag = 0;
                break;
            case (1):
                cout << "Enter integer : ";
                cin >> n;
                enq(n, &q);
                break;
            case(2):
                val = dq(&q);
                if (val != -2)
                    cout << val << endl;
                break;
            case(3):
                cout << "Enter integer : ";
                cin >> n;
                search(n, q);
                break;
            case (4):
                disp(q);
            default:
                continue;
        }
    }
}

void enq(int a, que *q)
{
    if (!(isfull(q)))
    {
        q->r = (q->r + 1) % MAX;
        q->arr[q->r] = a;
        if (q->f == -1)
            q->f = 0;
        q->size += 1;
    }
    else
        cout << "queue Overflow" << "\n";
}

int dq(que *q)
{
    if (!(isempty(q)))
    {
        int val = q->arr[q->f];
        q->arr[q->f] = -1;
        q->f = (q->f + 1) % MAX;
        q->size--;
        return val;
    }
    else
    {
        cout << "queue underflow \n";
        return -2;
    }
}

bool isempty(que *q)
{
    if (q->size == 0)
        return true;
    else
        return false;
}

bool isfull(que *q)
{
    if (q->size == MAX)
        return true;
    return false;
}

void disp(que q)
{
    if (q.size == 0)
    {
        cout << "queue is empty \n";
        return;
    }

    cout << "queue is as \n";
    while (q.size != 0)
    {
        cout << q.arr[(q.f % MAX)] << endl;
        q.f++;
        q.size--;
    }
}
void search(int n, que q)
{
    while (q.f % MAX != q.r + 1)
    {
        if (q.arr[(q.f % MAX)] == n)
        {
            cout << "element present \n";
            return;
        }
        q.f++;
    }
    cout << "element NOT present \n";
}