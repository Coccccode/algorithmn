//#include "quickSort.h"
#include "bubbleSort.h"
int main(){
    vector<int> a = {18,9,52,38,46,79,89,65,45,32,22,21,10,89,96,56,13,23,45,15,478,156,235,1594,101564,165,1,566,3415,64,163,4136,416,35,416,3};
   //selectSort(a); 
    //insertSort(a);
    /*
    int lo = 0;
    int hi = a.size() - 1;
    quickSort(a,lo,hi);
    quick3Sort(a,lo,hi);
    optimizeQuickSort(a,lo,hi);
    */    
   // bubbleSort(a);
    for(auto ge:a){
        cout << ge << " ";
    }
}