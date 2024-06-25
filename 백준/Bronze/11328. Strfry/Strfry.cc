#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, flag, arr[30] = {0, };
    string s1, s2;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s1>>s2;
        fill(arr, arr+30, 0);
        flag = 0;
        for(int j=0; j<s1.length(); j++){
            tmp = s1[j] - 'a';
            arr[tmp]++;
        }
        for(int j=0; j<s2.length(); j++){
            tmp = s2[j] - 'a';
            arr[tmp]--;
        }
        for(int j=0; j<30; j++){
            if(arr[j] != 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"Possible"<<"\n";
        }else{
            cout<<"Impossible"<<"\n";
        }
    }
    return 0;
}