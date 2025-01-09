#include <iostream>
#include <vector>
#include <cmath>
#define MAX 100001
using namespace std;
vector<int> tree;
vector<int> lazy;
void updateLazy(int left, int right, int node){
    if(lazy[node] % 2 == 1){
        tree[node] = (right - left + 1) - tree[node];
        if(left != right){
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
}
void updateRange(int node, int start, int end, int left, int right){
    updateLazy(start, end, node);
    if(end < left || start > right) return;
    if(left <= start && end <= right){
        tree[node] = (end - start + 1) - tree[node];
        if(start != end){
            lazy[node*2] += 1;
            lazy[node*2+1] += 1;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, left, right);
    updateRange(node*2+1, mid+1, end, left, right);
    tree[node] = tree[node*2] + tree[node*2+1];
    return;
}
int sumOnSwitch(int node, int start, int end, int left, int right){
    updateLazy(start, end, node);
    if(end < left || start > right) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sumOnSwitch(node*2, start, mid, left, right) + sumOnSwitch(node*2+1, mid+1, end, left, right);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, height, O, S, T;
    cin>>N>>M;
    height = ceil(log2(N));
    tree = vector<int>(1<<(height+1));
    lazy = vector<int>(1<<(height+1));
    for(int m=0; m<M; m++){
        cin>>O>>S>>T;
        if(O == 0){
            updateRange(1, 1, N, S, T);
        }else{
            cout<<sumOnSwitch(1, 1, N, S, T)<<"\n";
        }
    }
    return 0;
}