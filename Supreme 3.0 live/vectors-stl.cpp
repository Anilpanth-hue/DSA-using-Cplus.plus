#include<iostream>
#include<vector>
using namespace std;

/*
void fun(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}*/

void print(vector<int>v){
    int size = v.size();
    for(int i=0; i<size; i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    /*
    //static array running here
    // int arr[5] = {1,2,3,4,5};
    // fun(arr, 5);

    // lets try dynamic allocation
    int n;
    cin>>n;
    int *arr = new int[n];// it gives 0 or any garbage value
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    fun(arr, n);

    // lets try to push or insert arrays in the dynamic allocated array
    // but we cant push items using arr[n] = 80 and can't run it 

    ///// So, Here we got vectors to push elements in the arrays
    */
        // in vector, we dont tell size of vector
        //just keep inserting , i will manager the allocations
        vector<int>v; // array hi ha ye

        //insert
        v.push_back(1); 
        v.push_back(2); 
        v.push_back(3); 
        print(v);




    return 0;
}