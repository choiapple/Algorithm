#include <iostream>
using namespace std;
int main(){
    int N, J = 0, O = 0, I = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int n=0; n<N; n++){
        if(s[n] == 'J') J++;
        else if(s[n] == 'O') O++;
        else I++;
    }
    for(int i=0; i<J; i++){
        cout<<"J";
    }
    for(int i=0; i<O; i++){
        cout<<"O";
    }
    for(int i=0; i<I; i++){
        cout<<"I";
    }
    return 0;
}