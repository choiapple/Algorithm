#include <iostream>
using namespace std;
int gcd(int x, int y){
    int a, b, c;
    if(x > y){
        a = x;
        b = y;
    }else{
        a = y;
        b = x;
    }
    while(true){
        c = a%b;
        if(c == 0){
            break;
        }
        a = b;
        b = c;
    }
    return b;
}
int main(){
    int n, m;
    char c;
    cin>>n>>c>>m;
    int k = gcd(n, m);
    cout<<n/k<<":"<<m/k<<"\n";
}