#include<bits/stdc++.h>
using namespace std;
int main(){

string a,b,c;
cin>>a>>b>>c;

int m,n;

m=a.length();
m--;
n=b.length();
n--;

if(a[m]==b[0]){
if(b[n]==c[0]){
cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;

}
else
cout<<"NO"<<endl;
return 0;
}
