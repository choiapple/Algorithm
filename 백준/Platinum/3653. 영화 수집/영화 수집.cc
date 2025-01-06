#include <iostream>
#include <cmath>
#define MAX 100001
using namespace std;
long long *tree;
int arr[2*MAX];
int loc[MAX];

long long init(int node, int start, int end){
    if(start == end) return tree[node] = arr[start];
    int mid = start + (end-start)/2;
    return tree[node] = init(node*2, start, mid) + init(node*2+1, mid+1, end);
}

void update(int node, int start, int end, int idx, int diff){
    if(start <= idx && idx <= end){
        tree[node] += diff;
        if(start != end){
            int mid = start + (end - start)/2;
            update(node*2, start, mid, idx, diff);
            update(node*2+1, mid+1, end, idx, diff);
        }
    }
}

long long sum(int node, int start, int end, int left, int right){
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = start + (end - start)/2;
    return sum(node*2, start, mid, left, right) + sum(node*2+1, mid+1, end, left, right);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test, num, height, see, val;
    cin>>test;
    for(int t=0; t<test; t++){
        cin>>num>>see;
        height = ceil(log2(num + see));
        tree = new long long[1<<(height + 1)];
        for(int i=0; i<=num+see; i++){
            arr[i] = 0;
        }
        for(int i=1; i<=num; i++){
            arr[i] = 1;
            loc[i] = num - (i-1);
        }
        init(1, 1, num+see);
        for(int i=1; i<=see; i++){
            cin>>val;
            int curLoc = loc[val];
            int nextLoc = i + num;
            arr[curLoc] = 0;
            arr[nextLoc] = 1;
            update(1, 1, num+see, curLoc, -1);
            update(1, 1, num+see, nextLoc, 1);
            loc[val] = nextLoc;
            cout<<sum(1, 1, num+see, curLoc, nextLoc-1)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}