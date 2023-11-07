#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int pos = 0, neg = 0, zer = 0;
    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] > 0)
        {
            pos++;
        }
        else if (p[i] < 0)
        {
            neg++;
        }
        else
        {
            zer++;
        }
    }


    // Convert the counts to floating-point types before division
    float pr = static_cast<float>(pos) / n;
    float nr = static_cast<float>(neg) / n;
    float zr = static_cast<float>(zer) / n;

    cout << pr << "\n"
         << nr << "\n"
         << zr << "\n";

    delete[] p; // Deallocate the dynamically allocated memory

    return 0;
}
