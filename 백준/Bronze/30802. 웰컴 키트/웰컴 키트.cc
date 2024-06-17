#include <iostream>
using namespace std;
int main(){
    int N, T, P, answerT = 0, arr[7];
    cin>>N;
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    cin>>T>>P;
    for(int i=0; i<6; i++){
        if(arr[i]%T == 0){
            answerT += arr[i]/T;
        }else{
            answerT += arr[i]/T + 1;
        }
    }
    cout<<answerT<<"\n";
    cout<<N/P<<" "<<N%P<<"\n";
}