#include<iostream>
using namespace std;

void print(int **arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int **mirror(int **arr)
{
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        temp = arr[i][0];
        arr[i][0] = arr[i][2];
        arr[i][2] = temp;
    }
    return arr;
}

void rotate(int **arr)
{
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

cout<<"\n";
print(arr);

    
}


int main(){

   int ** arr = new int* [3];
   for(int i=0;i<3;i++)
   {
    arr[i] =new int[3];
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
   }

    rotate(arr);
   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        cout << arr[i][j]<<" ";
    }
    cout<<"\n";
   }
}