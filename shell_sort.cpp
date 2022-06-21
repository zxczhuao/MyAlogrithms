#include <iostream>
#include <algorithm>
#include <cassert>
namespace sorting{
void shellSort(int* a, int n){
    int h=1;
    while(h<n/3) h=3*h+1;
    while(h>=1){
        for(int i=h;i<n;i++){
            for(int j=i;j>=h && a[j-h]>a[j];j-=h)
            {
                int temp = a[j-h];
                a[j-h] = a[j];
                a[j] = temp;
            }
        }
        h=h/3;
    }

}
}

void test0()
{
    int arr1[10] = {78, 34, 35, 6, 34, 56, 3, 56, 2, 4};
    std::cout << "Test 1... ";
    sorting::shellSort(arr1, 10);
    assert(std::is_sorted(arr1, arr1 + 10));
    std::cout << "passed" << std::endl;
}

int main()
{
    test0();
    return 0;
}