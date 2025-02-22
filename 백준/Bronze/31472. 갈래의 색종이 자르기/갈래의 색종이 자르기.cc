#include <iostream>
using namespace std;
int main(){
    int W, n = 2;
    cin>>W;
    while(true){
        if(n * n / 2 == W){
            cout<<n*4<<"\n";
            return 0;
        }
        n += 2;
    }
}