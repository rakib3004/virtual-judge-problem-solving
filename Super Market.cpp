#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;

cin>>n>>m;
int a,b;
int i;

double minA = INT_MAX;
for(i=0;i<n;i++){
cin>>a>>b;
double c = (double)a/(double)b;
minA = min(minA,c);
}

    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    std::cout <<(minA*m)<<endl;
return 0;

}
