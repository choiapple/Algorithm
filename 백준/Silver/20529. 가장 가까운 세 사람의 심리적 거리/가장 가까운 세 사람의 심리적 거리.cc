#include <iostream>
#include <vector>
using namespace std;
int T, N;
string s;
int main(){
    cin>>T;
    for(int t=0; t<T; t++){
        vector<pair<string, int> > vc;
        cin>>N;
        for(int n=0; n<N; n++){
            cin>>s;
            int tmp = vc.size();
            int flag = 0;
            for(int i=0; i<tmp; i++){
                if(vc[i].first == s){
                    vc[i].second++;
                    flag = 1;
                }
            }
            if(flag == 0){
                vc.push_back(make_pair(s, 1));
            }
        }
        int answer = 2147000000;
        int len = vc.size();
        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                if(i == j && vc[i].second < 2) continue;
                for(int k=0; k<len; k++){
                    if(i == j && i == k && vc[i].second < 3) continue;
                    if(j == k && vc[j].second < 2) continue;
                    if(i == k && vc[i].second < 2) continue;
                    int tmp = 0;
                    for(int x=0; x<4; x++){
                       string A = vc[i].first;
                       string B = vc[j].first;
                       string C = vc[k].first;
                       if(A[x] != B[x]) tmp++;
                       if(A[x] != C[x]) tmp++;
                       if(B[x] != C[x]) tmp++;
                    }
                    if(answer > tmp){
                        answer = tmp;
                    }
                }
            }
        }
        cout<<answer<<"\n";
    }
}