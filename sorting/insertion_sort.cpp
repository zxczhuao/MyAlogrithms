#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

namespace sorting {
/**
 * @brief 
 * Insertion Sort Function
 * Without template
 */

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)  {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
}

void insertionSort(std::vector<int>& vec)
{
    for (size_t i = 1; i < vec.size(); i++)
    {
        int32_t j = i - 1;
        while (j >= 0 && vec[i] < vec[j])
        {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = vec[i];
    }
}

} // namespace sorting

void test0()
{
    int arr1[10] = {78, 34, 35, 6, 34, 56, 3, 56, 2, 4};
    std::cout << "Test 1... ";
    sorting::insertionSort(arr1, 10);
    assert(std::is_sorted(arr1, arr1 + 10));
    std::cout << "passed" << std::endl;
}

void test1(){
    size_t n;
    std::cout <<"Enter the length of your array (0 to exit): ";
    std::cin >> n;
    if(n == 0){
        return;
    }
    int *arr = new int[n];
     std::cout << "Enter any " << n << " Numbers for Unsorted Array : ";

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    sorting::insertionSort(arr, n);

    for(int i = 0;i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;
    delete[] arr;
}

void test3(){
    std::vector<int> vec = {78, 34, 35, 6, 34, 56, 3, 56, 2, 4};
    std::cout << "Test 3... ";
    sorting::insertionSort(vec);
    assert(std::is_sorted(vec.begin(), vec.end()));
    std::cout << "passed" << std::endl;
}
int main()
{
    test3();
    return 0;
}