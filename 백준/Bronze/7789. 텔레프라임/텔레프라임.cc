#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string O, L; 
    int flag = 0;
    cin>>O>>L;
    for(int i=2; i<=sqrt(stoi(O)); i++){
        if(stoi(O)%i == 0) flag = 1;
    }
    L = L + O;
    for(int i=2; i<=sqrt(stoi(L)); i++){
        if(stoi(L)%i == 0) flag = 1;
    }
    if(flag == 1){
        cout<<"No"<<"\n";
    }else{
        cout<<"Yes"<<"\n";
    }
    return 0;
}