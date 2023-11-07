#include<iostream>
using namespace std;
int main(){
    int s,t,a,b,m,n;
    int temp,acnt=0,ocnt=0;
    cin>>s>>t>>a>>b>>m>>n;
    int *aarr = new int[m];
    int *oarr = new int[n];
    for(int i=0;i<m;i++){
        
        cin>>temp;
        if(temp+a>=s && temp+a<=t){
            acnt++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (b+temp >= s && b+temp <= t)
        {
            ocnt++;
        }
    }
    cout<<acnt<<"\n"<<ocnt;


return 0;
}