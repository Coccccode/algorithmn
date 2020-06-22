#include "head.h"
void bubbleSort(vector<int> &a){
    int N = a.size();
    for(int i = 0;i < N;i++){
        for(int j = N - 1;j >= i + 1;j--){
            if(a[j-1] > a[j])
                swap(a[j],a[j-1]);
        }
    }
}