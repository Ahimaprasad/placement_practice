#include<iostream>
using namespace std;
int main(){
    int n;
    int temp,temp2;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>temp;
        temp2= ((temp/5)+1)*5;
        if (temp2-temp<3 && temp>37){
            arr[i] = temp2;
        }else{
            arr[i]=temp;
        } 
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}