#include <iostream>
using namespace std;
int main(){
    string whe;
    char A, B;
    int a, b;
    int N;
    cin>>A>>a>>B>>b>>N;
    for(int i=0; i<N; i++){
        cin>>whe;
        if(whe == "R"){
            char c = A + 1;
            if(c <= 'H'){
                if(c == B && a == b){
                    char cc = B + 1;
                    if(cc <= 'H'){
                        A += 1;
                        B += 1;
                    }
                }else{
                   A += 1;
                }
            }
        }else if(whe == "L"){
             char c = A - 1;
            if(c >= 'A'){
                if(c == B && a == b){
                    char cc = B - 1;
                    if(cc >= 'A'){
                        A -= 1;
                        B -= 1;
                    }
                }else{
                   A -= 1;
                }
            }
        }else if(whe == "B"){
            int i = a - 1;
            if(i >= 1){
                if(A == B && i == b){
                    int ii = b - 1;
                    if(ii >= 1){
                        a -= 1;
                        b -= 1;
                    }
                }else{
                   a -= 1;
                }
            }
        }else if(whe == "T"){
            int i = a + 1;
            if(i <= 8){
                if(A == B && i == b){
                    int ii = b + 1;
                    if(ii <= 8){
                        a += 1;
                        b += 1;
                    }
                }else{
                   a += 1;
                }
            }
        }else if(whe == "RT"){
             char c = A + 1;
             int i = a + 1;
            if(c <= 'H' && i <= 8){
                if(c == B && i == b){
                    char cc = B + 1;
                    int ii = b + 1;
                    if(cc <= 'H' && ii <= 8){
                        A += 1;
                        a += 1;
                        B += 1;
                        b += 1;
                    }
                }else{
                   A += 1;
                   a += 1;
                }
            }
        }else if(whe == "LT"){
           char c = A - 1;
             int i = a + 1;
            if(c >= 'A' && i <= 8){
                if(c == B && i == b){
                    char cc = B - 1;
                    int ii = b + 1;
                    if(cc >= 'A' && ii <= 8){
                        A -= 1;
                        a += 1;
                        B -= 1;
                        b += 1;
                    }
                }else{
                   A -= 1;
                   a += 1;
                }
            }
        }else if(whe == "RB"){
             char c = A + 1;
             int i = a - 1;
            if(c <= 'H' && i >= 1){
                if(c == B && i == b){
                    char cc = B + 1;
                    int ii = b - 1;
                    if(cc <= 'H' && ii >= 1){
                        A += 1;
                        a -= 1;
                        B += 1;
                        b -= 1;
                    }
                }else{
                   A += 1;
                   a -= 1;
                }
            }
        }else{
             char c = A - 1;
             int i = a - 1;
            if(c >= 'A' && i >= 1){
                if(c == B && i == b){
                    char cc = B - 1;
                    int ii = b - 1;
                    if(cc >= 'A' && ii >= 1){
                        A -= 1;
                        a -= 1;
                        B -= 1;
                        b -= 1;
                    }
                }else{
                   A -= 1;
                   a -= 1;
                }
            }
        }
    }
    cout<<A<<a<<"\n"<<B<<b<<"\n";
}