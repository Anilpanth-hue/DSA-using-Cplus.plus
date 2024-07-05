#include <iostream>
using namespace std;

void findmissbydup(int a[], int n){
    // visited method
    for(int i=0; i<n; i++){
    int index = abs(a[i]);
    if(a[index-1] > 0){
        a[index-1] *= -1; // now it will be visited as visited means having -ve sign
    }
    }
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" "<<endl;;
    // }

    //all +ve indexs are missing
    for(int i=0; i<n; i++){
        if(a[i] > 0)
        cout<<i+1<<" ";
    }
}

int main(){
    
    int n;
    int a[] = {3,3,3,3,3};
    n = sizeof(a)/sizeof(int); // used to find out the size of array
    findmissbydup(a, n);


    return 0;
}