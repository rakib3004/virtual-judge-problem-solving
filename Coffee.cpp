#include<bits/stdc++.h>
using namespace std;
int main(){

string s;

cin>>s;

int m=0;

if(s[2]==s[3]){
m++;
}
if(s[4]==s[5]){
m++;
}

if(m==2){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;

}

return 0;
}
