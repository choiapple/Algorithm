#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int G;
    int flag = 0;
    cin>>G;
    for(int g=1; g<=G; g++){
        if(pow(g, 2) - G >= 1){
            long long tmp = pow(g, 2) - G;
            long long tmp2 = sqrt(tmp);
            if(pow(tmp2, 2) == tmp){
                flag = 1;
                cout<<g<<"\n";
            }
        }
    }
    if(flag == 0){
        cout<<-1<<"\n";
    }
}