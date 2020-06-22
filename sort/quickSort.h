#include "head.h"
#include "insertSort.h"
/*
快速排序
时间复杂度：O(NlogN) O(N^2) O(NlogN)（平均，最坏，最好）
空间复杂度：O(NlogN)
稳定性：不稳定 
优化方式：当划分后数组小的时候则采用插入排序
        或者使用子数组的中位数来切分数组 三取样切分
        以及三向切分
*/
int partition(int lo,int hi,vector<int> &a){
    int pivot = a[lo];
    while(lo < hi){
        while(lo < hi && a[hi] >= pivot)
            hi--;
        a[lo] = a[hi];
        while(lo < hi && a[lo] <= pivot)
            lo++;
        a[hi] = a[lo];
    }
    a[lo] = pivot;
    return lo;
}
void quickSort(vector<int> &a,int lo,int hi){  //普通快排
    if(lo >= hi){
        return ;
    }
    int mid = partition(lo,hi,a);
    quickSort(a,lo,mid-1);
    quickSort(a,mid+1,hi);
}
void optimizeQuickSort(vector<int> &a,int lo,int hi){ //优化快排
    int M = 8;//M取5-15最优
    if(lo + M >= hi){
        insertSort(a,lo,hi);
        return ;
    }
    int mid = partition(lo,hi,a);
    quickSort(a,lo,mid-1);
    quickSort(a,mid+1,hi);
}

void quick3Sort(vector<int> &a,int lo,int hi){  //三向切分的快速排序适用于重复元素多的快速排序
    if(hi <= lo){
        return ;
    }
    int pivot = a[lo];
    int lt = lo,i = lo + 1,gt = hi;
    while(i <= gt){
        if(a[i] < pivot)
            swap(a[lt++],a[i++]);
        else if(a[i] > pivot)
            swap(a[i],a[gt--]);
        else
            i++;
    }
    quick3Sort(a,lo,lt - 1);
    quick3Sort(a,gt + 1,hi);
}