#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, cnt = 0;
    cin>>N;
    for(int i=1; i<=N; i++){
        cnt++;
        if(i != N){
            string tmp = to_string(i);
            for(int j=0; j<tmp.length()-1; j++){
                if(tmp.substr(j, 2) == "50"){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<"\n";
}