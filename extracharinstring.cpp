#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

class Sollu{
public:
    int minExtraChar( string s, vector<string> &dictionary)
    {
        sort(dictionary.begin(),dictionary.end());
        reverse(dictionary.begin(),dictionary.end());
        int temp = 0;
        vector<string>::iterator it;
        for (it = dictionary.begin(); it != dictionary.end(); it++)
        {
            temp = s.find(*it);
            if(temp!=-1){
                string u = *it;
                for (int i = temp; i < temp + u.length() ;i++){
                    s[i]='4';
                }
            }
           
        }
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '4')
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    vector<string> strVector = {"code", "leet", "C++", "Vectors"};
    Sollu s;
    cout<<s.minExtraChar("leetscode", strVector);
}