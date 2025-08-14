#include <iostream>
using namespace std;
int main(){
    int s, e, answer = 0;
    cin>>s>>e;
    if(s%2 == 0){
        answer++;
    }else{
        s++;
        answer++;
    }
    if(e >= s && (e - s)%2 == 0){
        answer += (e-s)/2;
    }else if(e >= s && (e-s)%2 == 1){
        answer += (e-s)/2+1;
    }
    cout<<answer<<"\n";
}