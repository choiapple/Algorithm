#include <iostream>
using namespace std;
int main(){
    int T;
    string A, B;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>A>>B;
        int len_a = A.length();
        int len_b = B.length();
        int flag = 0;
        int visit[101] = {0, };
        if(len_a == len_b){
            for(int i=0; i<len_a; i++){
                char c = A[i];
                for(int j=0; j<len_a; j++){
                    if(B[j] == c && visit[j] == 0){
                        visit[j] = 1;
                        break;
                    }
                }
            }
            for(int i=0; i<len_a; i++){
                if(visit[i] == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                cout<<A<<" & "<<B<<" are anagrams."<<"\n";
            }else{
                cout<<A<<" & "<<B<<" are NOT anagrams."<<"\n";
            }
        }else{
            cout<<A<<" & "<<B<<" are NOT anagrams."<<"\n";
        }
    }
}