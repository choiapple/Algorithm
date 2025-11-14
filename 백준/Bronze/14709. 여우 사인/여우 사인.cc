#include <iostream>
using namespace std;
int main(){
    int N, A, B, flag = 0;
    cin>>N;
    if(N == 3){
        for(int i=0; i<N; i++){
            cin>>A>>B;
            if((A == 1 && B == 3) || (A == 3 && B == 1)){
                flag++;
            }else if((A == 4 && B == 3) || (A == 3 && B == 4)){
                flag++;
            }else if((A == 1 && B == 4) || (A == 4 && B == 1)){
                flag++;
            }
        }
        if(flag == 3){
            cout<<"Wa-pa-pa-pa-pa-pa-pow!";
            return 0;
        }
    }
    cout<<"Woof-meow-tweet-squeek";
}