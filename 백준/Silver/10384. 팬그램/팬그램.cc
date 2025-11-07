#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, idx, answer;
    string s;
    cin>>N;
    cin.ignore();
    for(int n=1; n<=N; n++){
        getline(cin, s);
        int arr[26] ={0, };
        answer = 2146000000;
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                idx = s[i] - 'a';
                arr[idx]++;
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                idx = s[i] - 'A';
                arr[idx]++;
            }
        }
        for(int i=0; i<26; i++){
            if(arr[i] < answer){
                answer = arr[i];
            }
        }
        cout<<"Case "<<n<<": ";
        if(answer == 0){
            cout<<"Not a pangram"<<"\n";
        }else if(answer == 1){
            cout<<"Pangram!"<<"\n";
        }else if(answer == 2){
            cout<<"Double pangram!!"<<"\n";
        }else{
            cout<<"Triple pangram!!!"<<"\n";
        }
    }
}