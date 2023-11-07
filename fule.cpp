#include <iostream>
using namespace std;
int main()
{
    int n, t, min = 0, flag = 0;
    cin >> t;
    int *o = new int[t];

    for (int i = 0; i < t; i++)
    {
        o[i] = 0;
        flag = 0;
        cin >> n;
        int *price = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> price[j];
        }

        min = price[0];
        for (int j = 0; j < n; j++)
        {
            if (min > price[j])
            {
                min = price[j];
            }
        }
        int *need = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> need[j];
            if (min == price[j])
            {
                flag = 1;
            }
            if (flag == 1)
            {
                need[j] = need[j] * min;
            }
            else
                need[j] = need[j] * price[j];
            o[i] = o[i] + need[j];
        }

        delete [] need;
        delete [] price;
    }
    for (int i = 0; i < t; i++)
    {
        cout << o[i] << "\n";
    }
}