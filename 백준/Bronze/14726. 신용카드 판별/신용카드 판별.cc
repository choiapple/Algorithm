#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, answer, tmp;
    cin>>T;
    string s;
    for(int i=0; i<T; i++){
        cin>>s;
        answer = 0;
        for(int i=15; i>=0; i--){
            if(i%2 == 0){
                tmp = (s[i] - '0') * 2;
                if(tmp >= 10){
                    answer += tmp%10;
                    tmp /= 10;
                    answer += tmp%10;
                }else{
                    answer += tmp;
                }
            }else{
                answer += s[i] - '0';
            }
        }
        if(answer%10 == 0){
            cout<<"T"<<"\n";
        }else{
            cout<<"F"<<"\n";
        }
    }
}