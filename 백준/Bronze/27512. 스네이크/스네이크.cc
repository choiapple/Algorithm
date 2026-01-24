#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    if(N%2 == 0 || M%2 == 0){
        cout<<N*M;
    }else{
        cout<<N*M-1;
    }
    return 0;
}