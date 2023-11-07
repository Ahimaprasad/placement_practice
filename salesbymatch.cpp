#include<iostream>
using namespace std;
int main(){
    int n,temp,cnt=0;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        temp = arr[i];
        arr[i]=-1;
        if (temp == -1)continue;
        for(int j=0;j<n;j++){
            if(arr[j]==-1)continue;
            if(temp==arr[j]){
                arr[j]=-1;
                cnt++;
            }
        }
    }

    cout<<cnt;
}