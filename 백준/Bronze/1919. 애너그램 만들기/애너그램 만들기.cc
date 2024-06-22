#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int answer = 0, tmp,arr[26] = {0, }, arr2[26] = {0, };
    string s, s2;
    cin>>s>>s2;
    for(int i=0; i<s.length(); i++){
        tmp = s[i] - 'a';
        arr[tmp]++;
    }
    for(int i=0; i<s2.length(); i++){
        tmp = s2[i] - 'a';
        arr2[tmp]++;
    }
    for(int i=0; i<26; i++){
        answer += abs(arr[i] - arr2[i]);
    }
    cout<<answer<<"\n";
    return 0;
}