#include<bits/stdc++.h>
using namespace std;
int main(){

int a[26]={0};
string s;

cin>>s;

int n = s.length();

int i;
int j;
for(i=0;i<n;i++){
j = s[i]-'a';
a[j]++;
if(a[j]>=2){
cout<<"no"<<endl;
return 0;
}
}
cout<<"yes"<<endl;
return 0;
}


