#include<iostream>
#include<string>
using namespace std;
int main(){

    string n1 = "New string 2";
    string n2 = "n1";
    cout<< n1.append(n2);
    cout<<n1.length()<<" "<<n2<<endl;
    return 0;
}
