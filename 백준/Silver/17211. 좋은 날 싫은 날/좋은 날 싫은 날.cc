#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double N, gi, a, b, c, d, e, f, tmpE, tmpF;
    cin>>N>>gi;
    cin>>a>>b>>c>>d;
    if(gi == 1){
        e = c;
        f = d;
    }else{
        e = a;
        f = b;
    }
    for(int i=1; i<N; i++){
        tmpE = (e * a) + (f * c);
        tmpF = (e * b) + (f * d);
        e = tmpE;
        f = tmpF;
    }
    e *= 1000;
    f *= 1000;
    cout<<(int)e<<"\n"<<(int)f<<"\n";
    return 0;
}