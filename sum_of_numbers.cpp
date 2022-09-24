#include <iostream>
using namespace std;
int get_sum(int a, int b)
{
    int s = 0;
    if (a == b)
        return a;
    else if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            s += i;
        }
    }
    else
    {
        cout << "b<a";
        for (int i = a; i >= b; i--)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    cout << get_sum(0, -1);
    return 0;
}