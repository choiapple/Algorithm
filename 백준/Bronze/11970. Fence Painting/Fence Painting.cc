#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, arr[101] = {0, }, s, e, answer = 0;
    cin>>a>>b>>c>>d;
    for(int i=a; i<b; i++){
        arr[i] = 1;
    }
    for(int i=c; i<d; i++){
        arr[i] = 1;
    }
    if(a < c){
        s = a;
    }else{
        s = c;
    }
    if(b > d){
        e = b;
    }else{
        e = d;
    }
    for(int i=s; i<=e; i++){
        if(arr[i] == 1) answer++;
    }
    cout<<answer<<"\n";
    return 0;
}