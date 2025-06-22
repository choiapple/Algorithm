#include <iostream>
using namespace std;
int main(){
    double d1, d2, d3, a, b, c;
    cin>>d1>>d2>>d3;
    b = (d1 - d2 + d3) / 2;
    a = d1 - b;
    c = d2 - a;
    cout<<fixed;
    cout.precision(1);
    if(c > 0 && b > 0 && a > 0){
        cout<<1<<"\n";
        cout<<a<<" "<<b<<" "<<c;
    }else{
        cout<<-1<<"\n";
    }
    return 0;
}