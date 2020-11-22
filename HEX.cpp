#include<bits/stdc++.h>
using namespace std;


void iitcpc(){


}
int main(){

string a,b;
int a1=0,b1=0;
cin>>a>>b;



string d[6]={"A","B","C","D","E","F"};

int e=10;
int i=0;
for(i=0;i<6;i++){
    if(a==d[i]){

       a1=e+i;

    }
        if(b==d[i]){

       b1=e+i;

    }
}

if(a1>b1){
    cout<<">"<<endl;
}

else if(a1<b1){
    cout<<"<"<<endl;
}
else if(a1==b1){
    cout<<"="<<endl;
}






return 0;
}
