#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, W;
    string s, ss;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>s;
        int arr[26] = {0, };
        for(int i=0; i<s.length(); i++){
            arr[s[i] - 'A']++;
        }
        cin>>W;
        for(int w=0; w<W; w++){
            cin>>ss;
            int arr2[26] = {0, };
            for(int j=0; j<ss.length(); j++){
               arr2[ss[j] - 'A']++; 
            }
            int flag = 0;
            for(int j=0; j<26; j++){
                if(arr[j] < arr2[j]) flag = 1;
            }
            if(flag == 0){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
}