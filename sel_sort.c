#include<stdio.h>
int arr[5]={5,4,7,3,6};
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int sel_sort(int low, int high){
    int idx, lst=arr[low];
    if(low == high)
        return 0;
    for(int i=low; i<=high; i++){
        if(lst >= arr[i]){
            lst=arr[i];
            idx=i;
        }
    }
    /*int temp = arr[idx];
    arr[idx]=arr[low];
    arr[low]=temp;*/
    swap(&arr[low],&arr[idx]);
    return sel_sort(low+1,high);
}
int main(){
    sel_sort(0,4);
    for(int i=0; i<5; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    return 0;
}
