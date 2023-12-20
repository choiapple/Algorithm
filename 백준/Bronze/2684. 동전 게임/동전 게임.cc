#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string com[8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
    int answer[8] = {0, };
    int P;
    string s;
    cin>>P;
    for(int i=0; i<P; i++){
        cin>>s;
        fill(answer, answer+8, 0);
        for(int j=0; j<38; j++){
            string tmp = s.substr(j, 3);
            for(int k=0; k<8; k++){
                if(tmp == com[k]){
                    answer[k]++;
                }
            }
        }
        for(int j=0; j<8; j++){
            cout<<answer[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}