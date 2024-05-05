#include <iostream>
using namespace std;
int main(){
    int a, b;
    string s;
    int k = 0;
    while(true){
        k++;
        cin>>a>>s>>b;
        if(s == "E") break;
        if(s == ">"){
            if(a > b){
                cout<<"Case "<<k<<": true"<<"\n";
            }else{
                cout<<"Case "<<k<<": false"<<"\n";
            }
        }else if(s == ">="){
            if(a >= b){
                cout<<"Case "<<k<<": true"<<"\n";
            }else{
                cout<<"Case "<<k<<": false"<<"\n";
            }
        }else if(s == "<"){
            if(a < b){
                cout<<"Case "<<k<<": true"<<"\n";
            }else{
                cout<<"Case "<<k<<": false"<<"\n";
            }
        }else if(s == "<="){
            if(a <= b){
                cout<<"Case "<<k<<": true"<<"\n";
            }else{
                cout<<"Case "<<k<<": false"<<"\n";
            }
        }else if(s == "=="){
            if(a == b){
                cout<<"Case "<<k<<": true"<<"\n";
            }else{
                cout<<"Case "<<k<<": false"<<"\n";
            }
        }else if(s == "!="){
            if(a != b){
                cout<<"Case "<<k<<": true"<<"\n";
            }else{
                cout<<"Case "<<k<<": false"<<"\n";
            }
        }
    }
}