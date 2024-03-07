#include <iostream>
using namespace std;
int main(){
    int n;
    double a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        cout<<fixed;
        cout.precision(10);
        cout<<a/6<<"\n";
    }
}