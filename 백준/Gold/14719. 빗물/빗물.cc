#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int H, W, cur, left, right, answer = 0;
    int arr[501] = {0, };
    cin>>H>>W;
    for(int i=0; i<W; i++){
        cin>>arr[i];
    }
    for(int i=0; i<W; i++){
        cur = arr[i];
        left = 0;
        right = 0;
        for(int j=0; j<i; j++){
            left = max(left, arr[j]);
        }
        for(int j=i+1; j<W; j++){
            right = max(right, arr[j]);
        }
        answer += max(0, min(left, right) - cur);
    }
    cout<<answer<<"\n";
}