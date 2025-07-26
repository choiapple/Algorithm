#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, x;
    double total = 0;
    string tmp;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        for(int j=0; j<tmp.length(); j++){
            if(tmp[j] == '0' || tmp[j] == '6'){
                tmp[j] = '9';
            }
        }
        x = stoi(tmp);
        if(x >= 100) total += 100;
        else total += x;
    }
    cout<<round(total/N);
}