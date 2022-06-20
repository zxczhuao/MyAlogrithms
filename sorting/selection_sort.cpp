#include <iostream>
#include <vector>
#include <cassert>

namespace sorting {
/**
 * @brief Selection Sort
 * 
 */
void selectionSort(int* arr, int n){
    for(int i = 0;i<n;i++){
        int min = i;
        for(int j = i+1;j<n;j++)
            if(arr[j]<arr[min])
                j=min;
        if(min!=i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}


void selectionSort(std::vector<int> &vec){
    for(size_t it1 = 0 ;it1 < vec.size(); it1++){
        size_t min = it1;
        for(size_t it2 = it1 + 1; it2 < vec.size(); ++it2){
            if(vec[it2] < vec[min])
                min = it2;
        }

        if(min != it1){
            int temp = vec[it1];
            vec[it1] = vec[min];
            vec[min] = temp;
        }
    }
}

}

void test1(){
    std::vector<int> vector1 = {19, 22, 540, 241, 156, 140, 12, 1};
    sorting::selectionSort(vector1);
    for(auto i:vector1)
        std::cout<< i<<" ";
}

int main()
{
    test1();
    return 0;
}