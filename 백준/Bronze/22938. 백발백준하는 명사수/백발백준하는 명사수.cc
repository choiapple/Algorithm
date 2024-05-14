#include <iostream>
using namespace std;
int main(){
    long long x, y, r, x1, y1, r1;
    cin>>x>>y>>r;
    cin>>x1>>y1>>r1;
    long tmp = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
    long tmp2 = (r1+r)*(r1+r);
    if(tmp2 > tmp){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}