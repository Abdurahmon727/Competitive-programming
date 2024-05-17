#include <iostream>
#define square(a) a*a

using namespace std;

int main(){
    int a =5;
    int b=6;
    
    cout<<"square of a = "<<square(a)<<"\n";
    cout<<"square of b = "<<square(b)<<"\n";
}

int sum(int a, int b){
    return a+b;
}