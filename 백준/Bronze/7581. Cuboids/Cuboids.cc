#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d;
    while(true){
        cin>>a>>b>>c>>d;
        if(a == 0 && b == 0 && c == 0 && d == 0){
            break;
        }
        if(a != 0){
            cout<<a<<" ";
        }else{
            cout<<d/(b*c)<<" ";
        }
        if(b != 0){
            cout<<b<<" ";
        }else{
            cout<<d/(a*c)<<" ";
        }
        if(c != 0){
            cout<<c<<" ";
        }else{
            cout<<d/(a*b)<<" ";
        }
        if(d != 0){
            cout<<d<<"\n";
        }else{
            cout<<a*b*c<<"\n";
        }
    }
}