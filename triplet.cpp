#include <iostream>
using namespace std;
int * cmprtrp(int a[], int b[])
{
    int *pnt = new int[2];
    pnt[0] = 0;
    pnt[1] = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            pnt[0] += 1;
        }
        else if (a[i] < b[i])
        {
            pnt[1] += 1;
        }
        else
        {
        }
    }

    return pnt;
}
int main()
{
    int a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    int* n = cmprtrp(a, b);
    cout << n[0]<<" "<<n[1];
    delete[] n;
    return 0;
}