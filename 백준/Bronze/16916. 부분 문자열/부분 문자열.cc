#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N;
vector<int> failFunc(string P){
    int plen = P.length();
    vector<int> failVec(plen, 0);
    int j=0;
    for(int i=1; i<plen; i++){
        while(j>0 && P[i]!=P[j]){
            j = failVec[j-1];
        }
        if(P[i] == P[j]){
            failVec[i] = ++j;
        }
    }
    return failVec;
}
int KMP(string S, string P){
    vector<int> vc = failFunc(P);
    int j = 0;
    for(int i=0; i<S.length(); i++){
        while(j > 0 && S[i] != P[j]){
            j = vc[j-1];
        }
        if(S[i] == P[j]){
            if(j == P.length()-1) return 1;
            else j+=1;
        }
    }
    return 0;
}
int main(){
    string S, P;
    cin>>S>>P;
    N = S.length();
    cout<<KMP(S, P);
    return 0;
}