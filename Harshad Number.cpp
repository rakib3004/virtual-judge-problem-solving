#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;

int m =0;

int n1=n;

while(n1!=0){
m = m+(n1%10);
n1=n1/10;

}
if(!(n%m)){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;

}

return 0;
}
