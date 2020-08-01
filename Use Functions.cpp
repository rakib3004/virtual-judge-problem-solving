#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c,d;

cin>>a>>b>>c>>d;

int maxA= 0;
maxA = max(maxA,a);
maxA = max(maxA,b);
maxA = max(maxA,c);
maxA = max(maxA,d);
cout<<maxA<<endl;
return 0;

}
