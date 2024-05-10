#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N%2 == 0){
        cout<<(N/2+1)*(N/2+1)<<"\n";
    }else{
        cout<<(N/2+2)*(N/2+1)<<"\n";
    }
}