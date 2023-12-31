#include <iostream>
using namespace std;
int A, B, T, answer;
int GCD(int a, int b){
    int x, y, z;
    if(a > b){
        x = a;
        y = b;
    }else{
        x = b;
        y = a;
    }
    while(true){
        z = x%y;
        if(z == 0) break;
        x = y;
        y = z;
    }
    return y;
}
int main(){
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>A>>B;
        answer = GCD(A, B);
        cout<<answer<<"\n";
    }
    
}