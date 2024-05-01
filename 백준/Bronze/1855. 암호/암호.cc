#include <iostream>
using namespace std;
int main(){
    int K;
    string S;
    cin>>K;
    cin>>S;
    char c[201][201];
    int len = S.length();
    int check = 0;
    int x = 0;
    for(int i=0; i<len/K; i++){
        if(check == 0){
            check = 1;
            for(int j=0; j<K; j++){
                c[i][j] = S[x];
                x++;
            }
        }else{
            check = 0;
            for(int j=K-1; j>=0; j--){
                c[i][j] = S[x];
                x++;
            }
        }
    }
    for(int i=0; i<K; i++){
        for(int j=0; j<len/K; j++){
            cout<<c[j][i];
        }
    }
    return 0;
}