#include <iostream>
using namespace std;
int main(){
    double we, he;
    cin>>we>>he;
    if(we/(he*he) < 18.5){
        cout<<"Underweight"<<"\n";
    }else if(we/(he*he) >= 18.5 && we/(he*he) <= 25){
        cout<<"Normal weight"<<"\n";
    }else{
        cout<<"Overweight"<<"\n";
    }
}