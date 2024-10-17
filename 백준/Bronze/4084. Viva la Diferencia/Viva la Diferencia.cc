#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d, tmp, k;
    while(true){
        cin>>a>>b>>c>>d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;
        k = 0;
        while(true){
            if(a == b && b == c && c == d) break;
            tmp = abs(a - b);
            b = abs(b - c);
            c = abs(c - d);
            d = abs(d - a);
            a = tmp;
            k++;
        }
        cout<<k<<"\n";
    }
}