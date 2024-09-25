#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    if(M-N < 1){
        cout<<"Congratulations, you are within the speed limit!"<<"\n";   
    }else if(M - N >= 1 && M-N <= 20){
        cout<<"You are speeding and your fine is $100."<<"\n";
    }else if(M - N >= 21 && M-N <= 30){
        cout<<"You are speeding and your fine is $270."<<"\n";
    }else if(M - N >= 31){
        cout<<"You are speeding and your fine is $500."<<"\n";
    }
}