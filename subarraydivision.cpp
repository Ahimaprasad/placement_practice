//input size and array
//
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int d,m,front=0,rear=0,sum=0,cnt=0;
    cin>>d>>m;
    front = 0;
    rear=m;
    for(int i=0;i<n-m+1;i++){
        for(int j=front;j<rear && rear<=n;j++){
            sum+=arr[j];
        }
        
        if(sum==d)cnt++;
        sum=0;
        front++;rear++;
    }
cout<<cnt;
return 0;
}