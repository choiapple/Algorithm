#include <iostream>
using namespace std;
int main(){
    int b, w, half, otherHalf, answer = 0;
    cin>>b>>w;
    for(int i=1; i<150; i++){
        half = (i * i) / 2;
        otherHalf = (i * i) - half;
        if((b >= half) && (w >= otherHalf)){
                answer = i;
        }else if((b >= otherHalf) && (w >= half)){
            answer = i;
        }
    }
    if(answer == 0){
        cout<<"Impossible"<<"\n";
    }else{
        cout<<answer<<"\n";
    }
}