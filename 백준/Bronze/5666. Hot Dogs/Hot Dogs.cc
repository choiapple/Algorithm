#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    double a, b, answer;
    while(cin>>a>>b){
        answer = a/b;
        cout<<fixed;
        cout.precision(2);
        cout<<answer<<"\n";
    }
    
}