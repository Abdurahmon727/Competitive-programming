#include <iostream>
using namespace std;
void bubbleSort(int* list,int n);
int main(){
    /// given array
    int list[] = {1,-5,2,0,3,4};
    /// size of array 
    int n = sizeof(list)/sizeof(list[0]);
    /// sorting
    bubbleSort(list,n);
    /// result
    cout<<"Sorted list: \n";
    for (int i=0;i<n;i++){
        cout<<list[i]<<" ";
    }

    return 0;
}

void bubbleSort(int* list,int n){
    for (int i =0 ; i< n-1;i++ ){
        for (int j=1 ; j< n; j++ ){
            if(list[j]<list[j-1]){
                int item1 = list[j];
                list[j] = list[j-1];
                list[j-1]= item1;
            }
        }
    }
}