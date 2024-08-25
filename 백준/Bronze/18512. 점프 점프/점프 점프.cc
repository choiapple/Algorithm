#include <iostream>
using namespace std;
int main(){
    int x, y, a, b;
    cin>>x>>y>>a>>b;
    int xp = a, yp = b, cnt = 0;
    while(xp < 10000 && yp < 10000){
        if(xp == yp){
            cout<<xp<<"\n";
            return 0;
        }
        if(xp > yp){
            yp += y;
        }else{
            xp += x;
        }
    }
    cout<<-1<<"\n";
    return 0;
}