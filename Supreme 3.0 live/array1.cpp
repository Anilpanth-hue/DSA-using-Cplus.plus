#include<iostream>
using namespace std;

void printallpairs(int arr[], int n){   
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout<<arr[i]<<", "<<arr[j]<<endl;
            }
            
        }
}

pair<int,int> checktwosum(int arr[], int n, int target){
    pair<int,int> ans = make_pair(-1,-1);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i] + arr[j] == target){
                    //found the pair
                    ans.first = arr[i];
                    ans.second = arr[j];
                    return ans;
                }
            }
        }
        return ans;
}

void printalltrip(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
                count++;
            }
        }
    }
    cout<<"Total tripets "<<count<<endl;    
}

bool check3sum(int arr[], int n, int target){
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i] + arr[j] + arr[k] == target){
                        cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
                    }
                }
            }
        }
}

void rotateArray(int arr[], int n, int shift){
    //shifting array
    int final = shift%n;

    if(final == 0){
        return ;
    }

    int temp[10000];
    int index = 0;
    for(int i=n-final; i<n; i++){
        temp[index] = arr[i];
        index++;
    }

    for(int i=n-1; i>=0; i--){
        arr[i] = arr[i-final];
    }

    for(int i=0; i<final; i++){
        arr[i] = temp[i];
    }

}

int main(){
    
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    //rotating
    int shift = 5;

    cout<<"before: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArray(arr,n,shift);

    cout<<"after: " << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



// int target = 70;
//     check3sum(arr,n,target);
    // printalltrip(arr,n);

    // // printallpairs(arr,n);
    // pair<int,int> ans = checktwosum(arr,n,60);

    // if(ans.first == -1 && ans.second == -1){
    //     cout<<"Pair not found"<<endl;
    // }
    // else{
    //     cout<<"Pair founded "<<ans.first<<" "<<ans.second;
    // }

    // if(ans == true){
    //     cout<<"Pair found"<<endl;
    // }
    // else{
    //     cout<<"Pair not found"<<endl;
    // }


    return 0;
}