#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;

 cin>>n;

 int a[n];

 int i=0;

 for(i=0;i<n;i++){

 cin>>a[i];
}

int flag=1;

 for(i=0;i<n;i++){

 if(a[i]){
    cout<<"HARD";
    flag=0;
    break;

 }
}
if(flag){
    cout<<"EASY";
}

return 0;
}
