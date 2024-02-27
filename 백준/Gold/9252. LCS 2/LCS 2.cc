#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int DP[1002][1002];
    int lenA, lenB, ans = 0;
    string A, B;
    string ret = "";
    
    cin>>A>>B;
    lenA = A.length();
    lenB = B.length();
    
    for(int i=0; i<=lenA; i++){
        for(int j=0; j<=lenB; j++){
            DP[i][j] = 0;
        }
    }
    for(int i=1; i<=lenA; i++){
        for(int j=1; j<=lenB; j++){
            if(A[i-1] == B[j-1]){
                DP[i][j] = DP[i-1][j-1] + 1;
            }else{
                DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
            }
        }
    }
    int i = lenA;
    int j = lenB;
    while(i >= 1 && j >= 1){
        if(DP[i][j] >DP[i-1][j] && DP[i-1][j] == DP[i][j-1] && DP[i][j-1] == DP[i-1][j-1]){
            ret += B[j-1];
            i--;
            j--;
        }else if(DP[i-1][j] > DP[i][j-1] && DP[i][j] == DP[i-1][j]){
            i--;
        }else if(DP[i-1][j] < DP[i][j-1] && DP[i][j] == DP[i][j-1]){
            j--;
        }else{
            j--;
        }
    }
    reverse(ret.begin(), ret.end());
    if(DP[lenA][lenB] != 0){
        cout<<DP[lenA][lenB]<<"\n"<<ret;
    }else{
        cout<<"0";
    }
    return 0;
}