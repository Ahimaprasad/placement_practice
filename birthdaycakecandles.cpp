#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = a[0];
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (l > a[i])
        {
        }
        else if (l < a[i])
        {
            l = a[i];
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}