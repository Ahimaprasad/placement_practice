#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * ar = new int[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    int min=ar[0],max=ar[0],minmax[2]={0,0};
    for (int i = 0; i < n; i++)
    {
        if(max<ar[i]){
            max=ar[i];minmax[0]+=1;
        }
        if (min > ar[i])
        {
            min = ar[i];
            minmax[1] += 1;
        }
    }

    for(int i=0;i<2;i++){
        cout<<minmax[i]<<" ";
    }
}
