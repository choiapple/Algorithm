#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, ck[10];
long long num[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
vector<long long> ans, comb;
void dfs(int depth, int idx, int piv){
    if(depth == piv){
        long long sum = 0;
        for(auto c : comb){
            sum += c;
            sum *= 10;
        }
        sum /= 10;
        ans.push_back(sum);
        return;
    }
    for(int i=idx; i<10; i++){
        if(ck[i]) continue;
        ck[i] = 1;
        comb.push_back(num[i]);
        dfs(depth+1, i+1, piv);
        comb.pop_back();
        ck[i] = 0;
    }
}
int main(){
    cin>>n;
    if(n > 1023){
        cout<<-1<<"\n";
        return 0;
    }
    for(int i=1; i<=10; i++){
        dfs(0, 0, i);
    }
    sort(ans.begin(), ans.end());
    cout<<ans[n-1]<<"\n";
    return 0;
}