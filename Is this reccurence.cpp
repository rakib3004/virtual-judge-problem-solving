#include<bits/stdc++.h>
using namespace std;
int main(){
int r,d;
int x[11];

cin>>r>>d>>x[0];

int i;
for(i=1;i<=10;i++){
x[i]=x[i-1]*r - d;
}
for(i=1;i<=10;i++){
cout<<x[i]<<endl;
}

}
