#include <iostream>
using namespace std;
int main()
{
    int n, k, sum = 0, cnt = 0;
    cin >> n;    cin >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i+1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if (sum % k == 0)
                cnt++;
        }
    }
    cout<<cnt;
}
