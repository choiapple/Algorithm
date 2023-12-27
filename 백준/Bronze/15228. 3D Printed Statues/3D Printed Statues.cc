#include <iostream>
using namespace std;
int N;
int answer = 214700000;
void solv(int prin, int dong, int tmp){
    if(prin > N || answer <=tmp){
        return;
    }
    if(dong >= N){
        if(answer > tmp){
            answer = tmp;
        }
        return;
    }
    solv(prin, dong + prin, tmp+1);
    solv(prin + prin, dong, tmp+1);
    
}
int main(){
    cin>>N;
    solv(1, 0, 0);
    cout<<answer<<"\n";
}