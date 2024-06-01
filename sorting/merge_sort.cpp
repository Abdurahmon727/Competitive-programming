#include<iostream>
using namespace std;

void mergeImpl(int array[], int const left, 
           int const mid, int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    int *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] 
    // and rightArray[]
    for (int i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    // Initial index of first sub-array
    // Initial index of second sub-array
    int indexOfSubArrayOne = 0, 
         indexOfSubArrayTwo = 0; 
 
    // Initial index of merged array
    int indexOfMergedArray = left; 
 
    // Merge the temp arrays back into 
    // array[left..right]
    while (indexOfSubArrayOne < subArrayOne && 
           indexOfSubArrayTwo < subArrayTwo) 
    {
        if (leftArray[indexOfSubArrayOne] <= 
            rightArray[indexOfSubArrayTwo]) 
        {
            array[indexOfMergedArray] = 
            leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = 
            rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
     
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) 
    {
        array[indexOfMergedArray] = 
        leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) 
    {
        array[indexOfMergedArray] = 
        rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(int array[], 
               int const begin, 
               int const end)
{
    if (begin >= end)
        return; 
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    mergeImpl(array, begin, mid, end);
}




int main(){

    int a[]={0,11,3,-1};

    mergeSort(a,0,3);
    cout<<"result: ";
    for(int i : a){
        cout<< i<<" ";
    }



    return 0;
}