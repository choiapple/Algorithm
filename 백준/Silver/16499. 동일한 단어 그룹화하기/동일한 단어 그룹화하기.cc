#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    set<string> s;
    string ss;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>ss;
        sort(ss.begin(), ss.end());
        s.insert(ss);
    }
    cout<<s.size()<<"\n";
    return 0;
}