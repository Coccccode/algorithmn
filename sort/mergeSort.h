#include "head.h"
vector<int> aux;
void merge(vector<int> &a,int lo,int mid,int hi){
    int i = lo,j = mid + 1;
    for(int k = lo;k <= hi;k++)
        aux[k] = a[k];
    for(int k = lo;k <= hi;k++)
        if(i >mid) 
            a[k] = aux[j++];
        else if(j > hi)
            a[k] = aux[i++];
        else if(aux[j] < aux[i])
            a[k] = aux[j++];
        else
            a[k] = aux[i++];
        
}
void mergeSort(vector<int> &a,int lo,int hi){
    if(hi <= lo)
        return ;
    int mid = (hi - lo)/2 + lo;
    mergeSort(a,lo,mid);
    mergeSort(a,mid + 1,hi);
    merge(a,lo,mid,hi);
}
void sort(vector<int> &a){ //方便只分配一次空间
    int N = a.size();
    aux.resize(N);
    mergeSort(a,0,N - 1);
}
