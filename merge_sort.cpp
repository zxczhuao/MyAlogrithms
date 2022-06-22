#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

void merge(int *arr, int l, int m, int r)
{
    int *aux = new int[m-l+1];  
    for(int i = 0;i < m-l+1;i++)
        aux[i] = arr[l+i];
    int i=l;
    int j=m+1;
    int k=l;
    for(;i<m+1 || j<r+1;){
        if(j>=r+1 || (i<m+1 && aux[i-l]<arr[j])){
            arr[k] = aux[i-l];
            i++;
        }
        else{
            arr[k]=arr[j];
            j++;
        }
        k++;
    }
    delete []aux;
}

void merge_sort(int *arr, int l, int r){
    if(l < r){
        int m = (l + r)/2;
        merge_sort(arr, l, m);merge_sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}



void test0()
{
    int arr1[10] = {78, 34, 35, 6, 34, 56, 3, 56, 2, 4};
    std::cout << "Test 1... ";
    merge_sort(arr1, 0, 10-1);
    assert(std::is_sorted(arr1, arr1 + 10));
    std::cout << "passed" << std::endl;
}

int main()
{
    test0();
    return 0;
}