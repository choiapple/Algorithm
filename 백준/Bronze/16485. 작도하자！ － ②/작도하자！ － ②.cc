#include <iostream>
using namespace std;
int main(){
    double c, b, tmp;
    cin>>c>>b;
    if(c > b){
        tmp = c / b;
    }else{
        tmp = b / c;
    }
    cout<<fixed;
    cout.precision(6);
    cout<<tmp<<"\n";
    return 0;
}