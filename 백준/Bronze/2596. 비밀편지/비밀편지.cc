#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, answer_n = 0;
    string arr[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
    string s, answer = "";
    cin>>N;
    cin>>s;
    for(int i=0; i<6*N; i+=6){
        int min_n = 6;
        char c;
        for(int j=0; j<8; j++){
            int check = 0;
            for(int k=0; k<6; k++){
                if(arr[j][k] != s[i+k]){
                    check++;
                }
            }
            min_n = min(check, min_n);
            if(check == 1 || check == 0){
                c = 'A' + j;
            }
        }
        if(min_n >= 2){
            cout<<i/6+1<<"\n";
            return 0;
        }else{
            answer += c;
        }
    }
    cout<<answer<<"\n";
    return 0;
}