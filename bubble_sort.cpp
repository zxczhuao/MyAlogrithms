#include <iostream>
#include <vector>
using namespace std;
namespace sorting {
/**
 * @brief bubble_sort
 * 
 */
void bubbleSort(vector<int> v)
{
    int num = v.size();
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++)
        {
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}
//优化
void bubbleSort2(vector<int> v)
{
    int n = v.size();
    bool flag=false;
    for(int i =0;(i<n-1)&&!flag;i++){
        flag = true;
        for(int j = 0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                flag = false;
            }
        }
    }
}




}
