#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int b1, b2, d1, d2, j1, j2, bb = 0, dd = 0;
    cin>>b1>>b2;
    cin>>d1>>d2;
    cin>>j1>>j2;
    bb = max(abs(j1 - b1), abs(j2 - b2));
    dd = abs(j1 - d1) + abs(j2 - d2);
    if(bb < dd){
        cout<<"bessie"<<"\n";
    }else if(bb > dd){
        cout<<"daisy"<<"\n";
    }else{
        cout<<"tie"<<"\n";
    }
    return 0;
    
}