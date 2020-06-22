#include "head.h"
/*
插入排序
时间复杂度：O(N^2) O(N^2) O(N)（平均，最坏，最好）
空间复杂度：O(1)
稳定性：稳定 
*/
void insertSort(vector<int> &a,int lo,int hi){ // 为快速排序优化做准备
    for(int i = lo + 1;i < hi;i++){
        for(int j = i;j > lo && a[j] > a[j-1];j--){
            swap(a[j],a[j-1]);
        }
    }
}
void insertSort(vector<int> &a){
    int N = a.size();
    int j;
    for(int i = 1;i < N;i++){
        int tmp = a[i];
        for(j = i - 1;j >= 0&&a[j] > tmp;j--){
            //swap(a[j],a[j-1]);交换
            a[j+1] = a[j];//移动提升效率
        }
        a[j + 1] = tmp;
    }
}
void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}