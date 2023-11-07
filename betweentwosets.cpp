#include<iostream>
using namespace std;


int search(int *arr,int n,int m){ 
    for(int i = 0;i<n;i++){
        if(arr[i]==m){
            return 1;
        }       
    }
    return 0;
}

int main(){

int n , m;
cin>>n>>m;
int * a = new int[n];
int * b = new int[m];
int * c = new int[n*m];
int * temp = new int[n*m];


for (int i =0;i<n;i++){
    cin>>a[i];
}
for (int i = 0; i < m; i++)
{
    cin >> b[i];
}
int k =0,cnt=0;
for (int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int x =b[j]/a[i];
        if(b[j]%a[i]!=0){cout<<0;return 0;}
        else{
            if(x%a[i]==0 && x>=a[n-1] && x<=b[0]){
                if(cnt==0)
                {
                    cout<<x<<"\n";
                    temp[cnt] = x;
                    cnt++;
                }
               
                else{
                   if (search(temp,cnt,x)==0){
                       cout << x << "\n";
                       temp[cnt] = x;
                       cnt++;
                   }
                }
                }
        }
    }
}
cout<<cnt;



}