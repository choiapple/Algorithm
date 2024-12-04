#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0, tmp;
    string a, b;
    cin>>N;
    cin.ignore();
    for(int i=1; i<=N; i++){
        getline(cin, a);
        getline(cin, b);
        answer = 0;
        int arr[26] = {0, };
        int arr2[26] = {0, };
        for(int j=0; j<a.length(); j++){
            tmp = a[j] - 'a';
            arr[tmp]++;
        }
        for(int j=0; j<b.length(); j++){
            tmp = b[j] - 'a';
            arr2[tmp]++;
        }
        for(int j=0; j<26; j++){
            answer += abs(arr[j] - arr2[j]);
        }
        cout<<"Case #"<<i<<": "<<answer<<"\n";
    }
}