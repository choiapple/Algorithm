#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, result;
    for(int a=1; a<=100; a++){
        for(int b=2; b<=100; b++){
            for(int c=b; c<=100; c++){
                for(int d=c; d<=100; d++){
                    result = b*b*b + c*c*c + d*d*d;
                    if(a*a*a == result){
                        cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")\n";
                    }
                }
            }
        }
    }
}