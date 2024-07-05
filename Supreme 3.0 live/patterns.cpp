#include<iostream>
using namespace std;

int main(){
    
    //Patterns
    /*
    //Square patterns
     for(int i=0; i<4; i=i+1){
        for(int j=0;j<4; j=j+1){
            cout<<"* ";
        }
        cout<<endl; 
     }
     */

    //Rectangle pattern
    /*
    for(int i=0; i<3; i=i+1){
        for(int j=0; j<5; j=j+1){
            cout<<"* ";
        }
        cout<<endl;
    }
    */

/*
   //Hollow rectangle
   int a;
   cin>>a;
   int b;
   cin>>b;
   for(int i=0; i<a;i=i+1){
        for(int j=0; j<b; j=j+1){
            if(i==0 || i==a-1){
                cout<<"* ";
            }
            else{
                if(j==0 || j==b-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            
        }
        cout<<endl;
   }
   */

  //Half-pyramid triangle
  /*
  for(int i=0; i<5; i=i+1){
    for(int j=0; j<i+1; j=j+1){
        cout<<"* ";
    }
    cout<<endl;
  }
  */

 //Inverted half pyramid
 /*
    for(int i=0; i<5; i=i+1){
        for(int j=0; j<5-i; j=j+1){
            cout<<"* ";
        }
        cout<<endl;
    }
    */

   //Hollow half pyramid
   /*
   int n;
   cin>>n;
   for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
        int col = i+1;
        if(i==0||i==1||i==5){
            cout<<"* ";
        }
        else{
             if(j==0||j==col-1){
                cout<<"* ";
             }
             else{
                cout<<"  ";
             }
        }
    }
    cout<<endl;
   }
   */

  //Inverted hollow half pyramid
  /*
  int n;
  cin>>n;
  for(int i=0; i<n; i=i+1){
    for(int j=0; j<n-i; j=j+1){
        int col = n-i;
        if(i==0||i==n-1){
            cout<<"* ";
        }
        else{
            if(j==0 || j==col-1 || j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
    }
    cout<<endl;
  }
  */

    //Numeric half pyramid
    /*
    int n;
    cin>>n;
    for(int i=0; i<n; i=i+1){
        for(int j=0; j<i+1; j=j+1){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    */

//    //Numeric Inverted half pyramid
//    int n;
//    cin>>n;
//    for(int i=0; i<n; i++){
//     for(int j=0; j<n-i; j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
//    }
//     return 0;

       
}