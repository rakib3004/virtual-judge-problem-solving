#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,c;
cin>>n>>m>>c;
int count=0;
 int a[n][m]={0};

 int b[m]={0};
 int result[n]={0};;

int i,j;

for(j=0;j<m;j++){
cin>>b[j];
}
for(i=0;i<n;i++){
for(j=0;j<m;j++){
cin>>a[i][j];
result[i]=a[i][j]*b[j]+result[i];
}
result[i]=result[i]+c;
if(result[i]>0){
count++;
}
}
cout<<count<<endl;

return 0;

}
