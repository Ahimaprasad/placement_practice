#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
string inttostr(int a){
stringstream ss;
ss.clear();
ss<<a;
string r;
ss>>r;
return r;
}

int strtoint(string a)
{
stringstream ss;
ss.clear();
ss << a;
int r;
ss >> r;
return r;
}

int main()
{
 string s ;
 cin>>s;
int hr = strtoint(s.substr(0,2));
string am("AM");
string pm("PM");
string HR;
string z("0");
if (am.compare(s.substr(8, 2)) == 0)
{
if(hr==12){
    HR = "00";
}else if(hr==11){
    HR = "11";
}else{
    HR = z.append(inttostr(hr));
}
}
else if (pm.compare(s.substr(8, 2))==0){
    if(hr==12){
        HR= "12";
    }
    else{
        HR=inttostr(hr+12);
    }
}
 cout <<HR<<s.substr(2,6);
 return 0;
}