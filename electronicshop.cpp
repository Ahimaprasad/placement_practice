#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swaped = false;
        for (int j = 0; j < n - i + 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swaped = true;
        }
        if (swaped == false)
        {
            break;
        }
    }
}

void heapify(int arr[], int n, int i)
{
    int lar = i;
    int l = i * 2 + 1;
    int r = i * 2 + 2;

    if (l < n && arr[l] > arr[lar])
    {
        lar = l;
    }
    if (r < n && arr[r] > arr[lar])
    {
        lar = r;
    }
    if (lar != i)
    {
        swap(arr[lar], arr[i]);
        heapify(arr, n, i);
    }
}

void heapsort(int arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int b, n, m, temp, p1 = 0, p2 = 0;
    cin >> b >> n >> m;
    int *key = new int[n];
    int *drive = new int[m];

    for (int i = 0; i < n; i++)
    {
        cin >> key[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> drive[i];
    };

    bubblesort(key, n);
   heapsort(drive, m);
    temp = -1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            if (key[i] + drive[k] <= b)
            {
                p1 = key[i];
                p2 = drive[k];
                if(p1+p2>temp){
                    temp=p1+p2;
                }
                
            }
        }
    }
    cout << temp;
}
