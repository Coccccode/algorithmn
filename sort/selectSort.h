#include "head.h"
/*
选择排序
时间复杂度：O(N^2) O(N^2) O(N^2)（平均，最坏，最好）
空间复杂度：O(1)
稳定性：不稳定 
*/
void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void selectSort(vector<int> &a){
    int N = a.size();
    for(int i = 0;i < N;i++){
        int min = i;
        for(int j = i + 1;j < N;j++){
            if(a[min] > a[j]){
                min = j;   // 找出最小的与待排序的第一位进行交换
            }
        }
        swap(a[min],a[i]);
    }
}
