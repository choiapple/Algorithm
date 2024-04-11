#include <iostream>
#include <vector>
using namespace std;
char Adrian[3] = {'A', 'B', 'C'};
char Bruno[4] = {'B', 'A', 'B', 'C'};
char Goran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
int main(){
    int N, tmp1 = 0, tmp2 = 0, tmp3 = 0, answer = 0;
    string s;
    vector<pair<string, int> > vc;
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        int x = i%3;
        int y = i%4;
        int z = i%6;
        if(s[i] == Adrian[x]){
            tmp1++;
        }
        if(s[i] == Bruno[y]){
            tmp2++;
        }
        if(s[i] == Goran[z]){
            tmp3++;
        }
    }
    if(answer < tmp1) answer = tmp1;
    if(answer < tmp2) answer = tmp2;
    if(answer < tmp3) answer = tmp3;
    vc.push_back(make_pair("Adrian", tmp1));
    vc.push_back(make_pair("Bruno", tmp2));
    vc.push_back(make_pair("Goran", tmp3));
    cout<<answer<<"\n";
    for(int i=0; i<vc.size(); i++){
        if(vc[i].second == answer){
            cout<<vc[i].first<<"\n";
        }
    }
}