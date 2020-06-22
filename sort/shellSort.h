#include "head.h"
/*
希尔排序
时间复杂度：O(N^1.3) O(N^2) O(N)（平均，最坏，最好）
空间复杂度：O(1)
稳定性：不稳定 
*/
void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void shellSort(vector<int> &a){
    int N = a.size(); //数组长度
    int gap = 1; //间隔
    while(gap < N/3){        //使得gap = 1/2 * (3^k - 1)
        gap = 3 * gap +1;
    }
    while(gap >= 1){
        for(int i = gap;i < N;i++){
            for(int j = i;j >= gap && a[j] < a[j - gap];j -= gap){
                    swap(a[j],a[j - gap]);
            }
        } 
        gap = gap / 3;
    }
 }