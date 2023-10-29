#include <iostream>
#include <deque>
using namespace std;
int main(){
    int N;
    int M;
    int num;
    int index;
    int answer = 0;
    deque<int> d;
    
    cin>>N;
    cin>>M;
    for(int i=1; i<=N; i++){
        d.push_back(i);
    }
    while(M--){
        cin>>num;
        for(int i=0; i<d.size(); i++){
            if(d[i] == num){
                index = i;
                break;
            }
        }
        if(index < d.size() - index){
            while(true){
                if(d.front() == num){
                    d.pop_front();
                    break;
                }
                answer++;
                d.push_back(d.front());
                d.pop_front();
            }
        }else{
            while(true){
                if(d.front() == num){
                    d.pop_front();
                    break;
                }
                answer++;
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}