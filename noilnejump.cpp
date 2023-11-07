#include<iostream>
using namespace std;
int main(){
int x1,x2,v1,v2;
cin >> x1 >> v1 >> x2 >> v2;
if(x1>x2&&v1>=v2){
    cout<<"NO";
}
else if (x1 < x2 && v1 <= v2){
    cout<<"NO";
}else{
    int tempv,tempx;
    tempv = v1 - v2;
    tempx = x2-x1;

    if(tempv<0){tempv=-1*tempv;}
    if(tempx<0)tempx=-1*tempx;

     if (((tempx) % (tempv)) != 0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
}