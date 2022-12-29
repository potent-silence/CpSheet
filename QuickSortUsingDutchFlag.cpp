#include <bits/stdc++.h> 

pair<int,int> partition(vector<int> &arr,int low,int high){
    int mid1=low,mid2=low,ref=arr[low];//low,mid1,mid2,high(Structure of partition)
    
    //3 partitions are created low-mid1(elements less than ref),mid1-mid2(elements equal to ref),mid2-high(elements greater than ref)
    while(mid2<=high){
        if(arr[mid2]==ref){
            mid2++;
        }
        else if(arr[mid2]<ref){
            swap(arr[mid1],arr[mid2]);
            mid1++,mid2++;
        }
        else{
            swap(arr[mid2],arr[high]);
            high--;
        }
    }
    return {mid1,mid2};
}

void quicksort(vector<int> &arr,int low,int high){
    if(low<high){
        pair<int,int> mid=partition(arr,low,high);//partition index

        quicksort(arr,low,mid.first-1);//left side
        quicksort(arr,mid.second,high);//right side
    }
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr)
{
    // Write your code here.
    quicksort(arr,0,arr.size()-1);
    return arr;
}
