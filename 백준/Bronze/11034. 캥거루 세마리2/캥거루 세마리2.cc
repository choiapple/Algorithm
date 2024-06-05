#include <iostream>
using namespace std;
int main(){
    int A, B, C, answer;
    while(cin>>A>>B>>C){
        answer = 0;
        while(true){
            if(B - A > C - B){
                if(B - A > 1){
                    answer++;
                    C = B;
                    B = B-1;
                }else{
                    break;
                }
            }else{
                if(C - B > 1){
                    answer++;
                    A = B;
                    B = B+1;
                }else{
                    break;
                }
            }
        }
        cout<<answer<<"\n";
    }
}