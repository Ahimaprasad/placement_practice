#include<iostream>
using namespace std;
int main(){

    int y,d,m;
    cin>>y;
    if(y>1918){
        if(y%400==0 || (y%100!=0 && y%4==0)){
           d= 255-(31 + 29 + 31 + 30 + 31 + 30 + 31 + 30);
           m=9;
        }else{
           d = 255 - (31 + 28 + 31 + 30 + 31 + 30 + 31 + 30);
           m = 9;
        }

    }
    else if(y<1918){

        if ( y % 4 == 0)
        {
           d = 255 - (31 + 29 + 31 + 30 + 31 + 30 + 31 + 30);
           m = 9;
        }
        else
        {
           d = 255 - (31 + 28 + 31 + 30 + 31 + 30 + 31 + 30);
           m = 9;
        }
    }
    else{

        d = 255 - (31 + 28 + 31 + 30 + 31 + 30 + 31 + 30)+13;
        m = 9;
    }
    cout<<d<<"."<<0<<m<<"."<<y;

}