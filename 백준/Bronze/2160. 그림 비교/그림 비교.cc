#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    string arr[300];
    int answer1, answer2;
    int minNum = 2147000000;
    for(int i=0; i<5*N; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5*N; i += 5){
        for(int j=i+5; j<5*N; j+= 5){
            int tmp = 0;
            for(int x=0; x<5; x++){
                for(int y=0; y<7; y++){
                    if(arr[i+x][y] != arr[j+x][y]){
                        tmp++;
                    }
                }
            }
            if(minNum > tmp){
                minNum = tmp;
                answer1 = i;
                answer2 = j;
            }
        }
    }
    cout<<answer1/5+1<<" "<<answer2/5+1<<"\n";
    return 0;
}