#include <iostream>
using namespace std;
int main(){
    int N, arr[27] = {0, }, max = 0, idx;
    string s;
    cin>>N;
    cin>>s;
    for(int n=0; n<N; n++){
        int tmp = s[n] - 'a';
        arr[tmp]++;
        if(max < arr[tmp]){
            idx = tmp;
            max = arr[tmp];
        }
    }
    char c = 'a' + idx;
    cout<<c<<" "<<max;
    return 0;
}