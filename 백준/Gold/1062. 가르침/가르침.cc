#include <iostream>
#include <vector>
using namespace std;
int N, K, answer = 0;
vector<string> vc;
string full = "bdefghjklmopqrsuvwxyz";
int arr[26] = {0, };
void re(int x, string find, int j){
    if(j > 21) return;
    if(x == K){
        for(int i=0; i<find.length(); i++){
            int y = find[i] - 'a';
            arr[y] = 1;
        }
        int tmp = 0;
        for(int n=0; n<N; n++){
            int flag = 0;
            for(int i=0; i<vc[n].length(); i++){
                int y = vc[n][i] - 'a';
                if(arr[y] == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) tmp++;
        }
        if(tmp > answer) answer = tmp;
        for(int i=0; i<find.length(); i++){
            int y = find[i] - 'a';
            arr[y] = 0;
        }
        return;
    }
    re(x + 1, find + full[j], j+1);
    re(x, find, j+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>K;
    if(K < 5){
        cout<<0;
        return 0;
    }
    string s = "antic", ss, sss = "";
    for(int i=0; i<s.length(); i++){
        int t = s[i] - 'a';
        arr[t] = 1;
    }
    for(int n=0; n<N; n++){
        cin>>ss;
        vc.push_back(ss);
    }
    re(5, sss, 0);
    cout<<answer<<"\n";
    return 0;
}