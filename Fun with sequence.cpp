#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;

cin>>n;
int a[n];

int i;
int x=0,y=0;
for(i=0;i<n;i++){
cin>>a[i];
x+=a[i];
}
x/=n;
cin>>m;


int b[m];

for(i=0;i<m;i++){
cin>>b[i];
y+=b[i];
}
y/=m;
if(x>y){
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
}
else{
for(i=0;i<m;i++){
cout<<b[i]<<" ";

}

}

    return 0;
}


