

#include<bits/stdc++.h>
using namespace std;


void iitcpc(){


}
int main(){

int x;
cin>>x;
int a[10];

int i=0;


for(i=0;i<10;i++){

    a[i]=0;
}

int p=0;

int b[4]={0};
int j=0;
while(x!=0){

    p=x%10;
    a[p]++;
b[j]=p;
    x=x/10;
j++;
}

for(i=0;i<2;i++){
   if(b[i]==b[i+1]&&b[i+1]==b[i+2]){
        cout<<"Yes"<<endl;
return 0;
   }
}

    cout<<"No"<<endl;


return 0;
}
