#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a, b, c;
    cin>>a>>b>>c;
    a = abs(a);
    b = abs(b);
    c -= a+b;
    if(c >= 0 && c%2==0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}