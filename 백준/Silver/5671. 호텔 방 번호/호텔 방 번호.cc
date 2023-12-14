#include <iostream>
using namespace std;
int main(){
    int N, M;
    while(cin>>N>>M){
        int answer = 0;
        for(int i=N; i<=M; i++){
            int tmp = i;
            int visit[10] = {0, };
            int flag = 0;
            while(tmp > 0){
                int k = tmp%10;
                if(visit[k] == 0){
                    visit[k] = 1;
                }else{
                    flag = 1;
                    break;
                }
                tmp /= 10;
            }
            if(flag == 0){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
}