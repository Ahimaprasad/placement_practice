#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
int k,index;
    int cnt[5]={0,0,0,0,0};
    // map<int, int> m;
    for (int i=0;i<n;i++)
    {
        cin >> k;
        cnt[k]+=1;        // m[arr[i]]=1;
    }
    int max=cnt[0];
for(int i=0;i<5;i++){
if(max<cnt[i]){max=cnt[i],index=i;}
}

cout<<index;

// int index=0;
    // for(int i=0;i<n;i++){
    //     index=arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(index==arr[j]){
    //             m[index]+=1;
    //         }
    //     }

    // }

// map<int,int>::iterator max=m.begin();

// for(map<int,int>::iterator it =m.begin();it!=m.end();++it){
//     if(max->second<it->second){
//         max=it;
//     }
//     } 
     
//    cout<<max->first;

}