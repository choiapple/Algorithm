#include <iostream>
using namespace std;
int main(){
    int m, n, answer = 0;
    cin>>m;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(10 - i >= 1 && 10 - i <= m){
            answer++;
        }
    }
    if(answer == 1){
        cout<<"There is 1 way to get the sum 10."<<"\n";
    }else{
        cout<<"There are "<<answer<<" ways to get the sum 10."<<"\n";
    }
}