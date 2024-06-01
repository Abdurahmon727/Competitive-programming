#include<iostream>
using namespace std;

int binarySearch(int array[],int n, int a){
    int left = 0;
    int right = n-1;
    while(left<right){
        int middle = (left+right)/2;
        if(array[middle]==a){
            return middle;
        }else if(array[middle]<a){
            left = left + (right-left)/2;// 0 + (4-0)
        }else{
            right = right - (right-left)/2;
        }
    }
    return -1;
}


int main(){
    int list[]= {0,1,2,3,4};
    int n = sizeof(list)/sizeof(list[0]);
    int element = 0;
    int result =  binarySearch(list,n,element);
    cout<<"result: "<<result;
    return 0;
}