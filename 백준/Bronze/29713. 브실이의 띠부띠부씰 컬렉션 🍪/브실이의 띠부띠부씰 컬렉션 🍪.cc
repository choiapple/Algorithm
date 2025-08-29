#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int N, arr[26] = {0, }, answer = 0, flag = 0;
    string s, ss = "BRONZESILVER";
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(ss.find(s[i]) != string::npos){
            arr[s[i]-'A']++;
        }
    }
    while(true){
        flag = 0;
        for(int i=0; i<ss.length(); i++){
            if(arr[ss[i] - 'A'] < 1){
                flag = 1;
            }else{
                arr[ss[i] - 'A']--;
            }
        }
        if(flag == 1){
            break;
        }else{
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}