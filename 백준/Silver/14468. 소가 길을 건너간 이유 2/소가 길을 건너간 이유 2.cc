#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[27][27] = {0, };
    int answer = 0;
    for(int i=0; i<s.length(); i++){
        int idx = s[i] - 'A';
        if(arr[idx][0] == 0) arr[idx][0] = i+1;
        else arr[idx][1] = i+1;
    }
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            if(arr[i][0] < arr[j][0] && arr[j][0]<arr[i][1]&& arr[i][1] < arr[j][1]){
                answer++;
            }
        }
    }
    cout<<answer<<"\n";
    
}