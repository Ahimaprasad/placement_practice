#include<iostream>
using namespace std;
int main(){

    int n =0;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j = n;j>0;j--){
            if(i>=j-1){
                cout<<"#";
            }else{
                cout<<" ";
            }
        }cout<<"\n";

    }
    return 0;

}