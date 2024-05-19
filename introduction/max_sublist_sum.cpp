#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int array[3]={0,-1,2};
    int n = sizeof(array) / sizeof(int);

    int sum = 0, result = 0;

    for (int i = 0;i<n;i++){
        sum = max(array[i],sum+array[i]);
        result = max(result,sum);
    }
    cout<<"result: "<<result<<"\n";

    return 0;
}