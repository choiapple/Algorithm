#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, tmp, answer = 0;
    int arr[26] = {0, };
    string s;
    cin>>N;
    cin.ignore();
    getline(cin, s);
    for(int n=0; n<N; n++){
        tmp = s[n] - 'a';
        arr[tmp]++;
    }
    for(int i=0; i<26; i++){
        if(answer < arr[i]){
            answer = arr[i];
        }
    }
    cout<<answer<<"\n";
}