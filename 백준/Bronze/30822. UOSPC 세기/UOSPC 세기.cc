#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, arr[26] = {0, }, answer = 2146000000;
    string s, ss = "uospc";
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        arr[s[i] - 'a']++;
    }
    for(int i=0; i<5; i++){
        answer = min(answer, arr[ss[i] - 'a']);
    }
    cout<<answer<<"\n";
    return 0;
}