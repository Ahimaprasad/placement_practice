#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    long long int temp = 0;
    long long int *ptr = new long long int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

   long long int min = sum - ptr[4];
    long long int max = sum - ptr[0];
    cout << min << " " << max;
    delete[] ptr;
    return 0;
}