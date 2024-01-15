#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
    string arr[1001];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int answer = 0;
    int len = arr[0].length();
    for(int i=len; i>=0; i--){
        int flag = 0;
        for(int j=0; j<N; j++){
            string s = arr[j].substr(i, len-i);
            for(int k=0; k<N; k++){
                if(j == k) continue;
                if(s == arr[k].substr(i, len-i)){
                    flag = 1;
                }
            }
        }
        if(flag == 0){
            answer = len-i;
            break;
        }
    }
    cout<<answer<<"\n";
}