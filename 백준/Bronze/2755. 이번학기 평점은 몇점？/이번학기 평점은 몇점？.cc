#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    double answer = 0;
    int tmp = 0;
    string sub;
    int hak;
    string seung;
    for(int i=0; i<N; i++){
        cin>>sub>>hak>>seung;
        if(seung == "A+"){
            answer += 4.3 * hak;
        }else if(seung == "A0"){
            answer += 4.0 * hak;
        }else if(seung == "A-"){
            answer += 3.7 * hak;
        }else if(seung == "B+"){
            answer += 3.3 * hak;
        }else if(seung == "B0"){
            answer += 3.0 * hak;
        }else if(seung == "B-"){
            answer += 2.7 * hak;
        }else if(seung == "C+"){
            answer += 2.3 * hak;
        }else if(seung == "C0"){
            answer += 2.0 * hak;
        }else if(seung == "C-"){
            answer += 1.7 * hak;
        }else if(seung == "D+"){
            answer += 1.3 * hak;
        }else if(seung == "D0"){
            answer += 1.0 * hak;
        }else if(seung == "D-"){
            answer += 0.7 * hak;
        }else if(seung == "F"){
            answer += 0.0 * hak;
        }
        tmp += hak;
    }
    answer = round(answer/tmp * 100) / 100;
    cout<<fixed;
    cout.precision(2);
    cout<<answer<<"\n";
    
}