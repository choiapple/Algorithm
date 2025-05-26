#include <iostream>
using namespace std;
int main(){
    double c, b, tmp;
    cin>>c>>b;
    tmp = c / b;
    cout<<fixed;
    cout.precision(7);
    cout<<tmp<<"\n";
    return 0;
}