#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    int num;
    long long result = 0;
    priority_queue<int> pq;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        num -= i;
        pq.push(num);
        
        if(!pq.empty() && pq.top() > num){
            result += pq.top()-num;
            pq.pop();
            pq.push(num);
        }
    }
    cout<<result<<"\n";
    return 0; 
}