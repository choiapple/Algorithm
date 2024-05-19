#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f, tmp, tmp2;
    cin>>a>>b>>c>>d>>e>>f;
    tmp = ((e * c) - (b * f)) / ((a * e) - (b * d));
    tmp2 = ((d * c) - (f * a)) / ((b * d) - (e * a));
    cout<<tmp<<" "<<tmp2<<"\n";
    return 0;
}