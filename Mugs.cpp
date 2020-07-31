#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int i;
int a;
int sum=0;
int maxA=0;
for(i=0;i<n;i++){
cin>>a;
sum= sum+a;
maxA =max(maxA,a);
}

if(sum-maxA<=m){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
return 0;

}
