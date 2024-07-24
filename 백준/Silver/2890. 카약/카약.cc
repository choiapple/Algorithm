#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int R, C, answer[100] = {0, }, tmp;
string s[100];
vector<pair<int, int> > vc;
void inputData(){
    for(int i=0; i<R; i++){
        cin>>s[i];
    }
}
void findRanking(){
    for(int i=0; i<R; i++){
        for(int j=C-1; j>=0; j--){
            if(s[i][j] == 'F' || s[i][j] == '.' || s[i][j] == 'S'){
                continue;
            }else{
                vc.push_back(make_pair(C-1-j, s[i][j]-'0'));
                break;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>R>>C;
    inputData();
    findRanking();
    for(int i=0; i<vc.size(); i++){
        int arr[101] = {0, };
        tmp = 1;
        for(int j=0; j<vc.size(); j++){
            if(i != j && vc[i].first > vc[j].first && arr[vc[j].first] == 0){
                tmp++;
                arr[vc[j].first] = 1;
            }
        }
        answer[vc[i].second] = tmp;
    }
    for(int i=1; i<=9; i++){
        cout<<answer[i]<<"\n";
    }
    return 0;
}