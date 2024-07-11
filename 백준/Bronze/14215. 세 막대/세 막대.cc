#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b, c, max_n = 0, answer = 0, tmp;
    cin>>a>>b>>c;
    max_n = max(a, max(b, c));
    tmp = (a + b + c) - max_n -1;
    if(tmp > max_n){
        answer = a + b + c;
    }else{
        answer = (a + b + c) - max_n + tmp;
    }
    cout<<answer<<"\n";
    return 0;
}