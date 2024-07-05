#include<iostream>
using namespace std;


int main(){
     
    // Hamesha pahle space hi print karna ha

    //FUll Pyramid
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<< " ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

// //  Inverted full pyramid
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j=j+1)
//             cout<<" ";

//         for(int j=0; j<n-i; j=j+1)
//         cout<<"* ";
        
//             cout<<endl;
//     }

        // diamond pattern
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<< " ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j=j+1)
    //         cout<<" ";

    //     for(int j=0; j<n-i; j=j+1)
    //     cout<<"* ";
        
    //         cout<<endl;
    // }

    // //Hollow Pyramid
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<< " ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         if(i==0||i==n-1||j==0||j==i+1-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Inverted hollow pyramid
    //     int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j=j+1)
    //         cout<<" ";

    //     for(int j=0; j<n-i; j=j+1){
    //         if(i==0 || i==n-1 || j==0 || j==n-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
        
    //         cout<<endl;
    // }


    // //Hollow diamond
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<< " ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         if(i==0||j==0||j==i+1-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j=j+1)
    //         cout<<" ";

    //     for(int j=0; j<n-i; j=j+1){
    //         if( i==n-1 || j==0 || j==n-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
        
    //         cout<<endl;
    // }

    //Mix Pyramid
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<n-i; j=j+1){
    //         cout<<"*";
    //     }
    //     for(int j=0; j<2*i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     for(int j=0; j<2*(n-i)-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

        int n;
        cin>>n;
        //Fancy Pattern
        for(int i=0; i<n; i++){
            for(int j=0; j<2*i+1; j++){
                if(j%2==0){
                    cout<<i+1;
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }


    return 0;
    
    }
    



   


