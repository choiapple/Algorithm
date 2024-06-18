#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1, s2, s3;
    int tmp;
    cin>>s1>>s2>>s3;
    if(s1 != "FizzBuzz" && s1 != "Fizz" && s1 != "Buzz"){
        tmp = stoi(s1)+3;
    }else if(s2 != "FizzBuzz" && s2 != "Fizz" && s2 != "Buzz"){
        tmp = stoi(s2)+2;
    }else if(s3 != "FizzBuzz" && s3 != "Fizz" && s3 != "Buzz"){
        tmp = stoi(s3)+1;
    }
    if(tmp%3 == 0 && tmp%5 == 0){
        cout<<"FizzBuzz"<<"\n";
    }else if(tmp%3 == 0 && tmp%5 != 0){
        cout<<"Fizz"<<"\n";
    }else if(tmp%3 != 0 && tmp%5 == 0){
        cout<<"Buzz"<<"\n";
    }else{
        cout<<tmp<<"\n";
    }
    return 0;
}