#include <iostream>
using namespace std;
int main(){
    int N, tmp, answer = 0;
    cin>>N;
    tmp = N/3;
    tmp -= 3;
    if(tmp == 0){
        cout<<1<<"\n";
    }else{
        for(int i=1; i<=tmp+1; i++){
            answer+= i;
        }
        cout<<answer<<"\n";
    }
}