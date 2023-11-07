#include<iostream>
using namespace std;
int main(){
    int n,k,sum=0,bill,m;
    cin>>n>>k;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>m;
        if(i!=k){sum+=m;}
    }
    cin>>bill;
    if(sum/2  !=bill){
        cout<<bill-(sum/2);
    }else{
        cout << "Bon Appetit";
    }

}