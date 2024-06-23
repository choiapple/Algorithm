#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, num;
    vector<int> A;
    vector<int> B;
    vector<int> ans;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        A.push_back(num);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>num;
        B.push_back(num);
    }
    bool flag = true;
    int max_a, a_idx, max_b, b_idx;
    while(true){
        // A, B에서 동시에 존재하면서 가장 큰 값을 찾음
        while(true){
            if(A.size() == 0 || B.size() == 0){
                flag = false;
                break;
            }
            max_a = *max_element(A.begin(), A.end()); // max_element는 iterator를 반환
            a_idx = max_element(A.begin(), A.end()) - A.begin();
            max_b = *max_element(B.begin(), B.end());
            b_idx = max_element(B.begin(), B.end()) - B.begin();
            if(max_a == max_b) break;
            else if(max_a > max_b) A.erase(a_idx+A.begin());
            else B.erase(b_idx + B.begin());
        }
        if(!flag) break;
        ans.push_back(max_a);
        int tmp = 0;
        for(int i=a_idx+1; i<A.size(); i++){
            A[tmp++] = A[i];
        }
        for(int i=0; i<a_idx+1; i++){
            A.pop_back();
        }
        tmp = 0;
        for(int i=b_idx+1; i<B.size(); i++){
            B[tmp++] = B[i];
        }
        for(int i=0; i<b_idx+1; i++){
            B.pop_back();
        }
    }
    if(!ans.empty()){
        cout<<ans.size()<<"\n";
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
    }else{
        cout<<0;
    }
}