// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

#include<iostream>
using namespace std;
int absdiff(int **a, int m){
    int diff=0;
    int j = m-1;
for(int i = 0;i<m;i++){
diff = (a[i][i]-a[i][j])+diff;
j-=1;
}

return diff;
}
int main(){
int m=0;
cin>>m;
int ** mat = new int*[m];
for(int i=0;i<m;i++){
    mat[i]=new int[m];
}

for(int i = 0;i<m;i++)
for(int k = 0;k<m;k++){
    mat[i][k]=0;
    cin>>mat[i][k];
}
int diff = absdiff(mat,m);
if(diff<0){diff = diff * -1;}
cout<<diff;
return 0;
}