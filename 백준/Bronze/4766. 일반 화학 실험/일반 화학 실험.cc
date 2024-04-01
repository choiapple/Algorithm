#include <iostream>
using namespace std;
int main(){
    double cur;
    double next;
    cin>>cur;
    while(true){
        cin>>next;
        if(next == 999) break;
        cout<<fixed;
        cout.precision(2);
        cout<<next-cur<<"\n";
        cur = next;
    }
}