#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, answer;
    cin>>a>>b>>c;
    if(a == 0){
        answer = c * c - b;
    }else if(b == 0){
        answer = c * c - a;
    }else if(c == 0){
        answer = sqrt(a + b);
    }
    cout<<answer<<"\n";
    return 0;
}