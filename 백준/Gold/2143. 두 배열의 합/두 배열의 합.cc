#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    int n, m;
    int a[1001] = {0, };
    int b[1001] = {0, };
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    vector<int> av;
    vector<int> bv;
    for(int i=0; i<n; i++){
        int sum = a[i];
        av.push_back(sum);
        for(int j=i+1; j<n; j++){
            sum += a[j];
            av.push_back(sum);
        }
    }
    for(int i=0; i<m; i++){
        int sum = b[i];
        bv.push_back(sum);
        for(int j=i+1; j<m; j++){
            sum += b[j];
            bv.push_back(sum);
        }
    }
    sort(bv.begin(), bv.end());
    long long answer = 0;
    for(int i=0; i<av.size(); i++){
        int target = T - av[i];
        int lo = lower_bound(bv.begin(), bv.end(), target) - bv.begin();
        int hi = upper_bound(bv.begin(), bv.end(), target) - bv.begin();
        answer += hi - lo;
    }
    cout<<answer<<"\n";
}