#include <iostream>
using namespace std;
int main(){
    int cnt=0,height=0,n;
    char temp;
    cin>>n;
    // char * arr = new char[n];
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        if(temp=='D'){
            
            height--;
            
            if(height+1 == 0 && height ==-1){
                cnt++;
            }
        
        }else if(temp=='U'){
            
            height++;}
    }
    cout<<cnt;
}
