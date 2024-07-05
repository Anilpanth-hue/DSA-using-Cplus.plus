#include<iostream>
using namespace std;

void moveAllneg(int *a, int n){
    //Dutch national fly algo. (Two pointer approach)
    int l=0; 
    int h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h] > 0){
            h--;
        }
        else{
            swap(a[l], a[h]);
        }
    }
}


int main(){
    int a[] = {1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(int);  // 24 / 4 = 6 ; here 24 comes from 6 int and 6*4(1 int = 4 bytes)

    moveAllneg(a,n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}