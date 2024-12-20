#include <iostream>
using namespace std;
int main(){
    int T, N, tmp = 0, F;
    cin>>T;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>F;
        tmp += F;
    }
    if(tmp >= T){
        cout<<"Padaeng_i Happy"<<"\n";
    }else{
        cout<<"Padaeng_i Cry"<<"\n";
    }
}