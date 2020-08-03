#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;

cin>>t;

while(t--){
int n,x,y;

cin>>n>>x>>y;

int i;

for(i=1;(x*i)<n;i++){

if((x*i)%y==0){
continue;
}
else{
cout<<(x*i)<<" ";
}
}
cout<<endl;
}

    return 0;
}

