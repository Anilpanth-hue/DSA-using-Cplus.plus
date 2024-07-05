#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int, int>table;// roll no. desk no.

    //insertion
    table[1] = 53;
    table[2] = 54;
    table[3] = 55;

    table[2] = 57;

    cout<<"Before erase"<<endl; 

    //Iteration
    unordered_map<int, int>::iterator it;
    for(it = table.begin(); it != table.end(); it++){
        int key  = it->first;
        int value = it-> second;
        cout<<":Key: "<<key<<" Value: "<<value<<endl;
    }

    // find? // table/map bhot fats (avg case comp) O(1) means bhot tez find karte ha
    if(table.find(2) != table.end()){
        //found
        int value = table[2];
        cout<<"Found: "<<value<<endl;
    }
    else{
        //not founded
        cout<<"Not founded"<<endl;

    }

    //deletion 
    //key se hi hota hai
    table.erase(2);
    cout<<"After erase"<<endl;

    unordered_map<int, int>::iterator it;
    for(it = table.begin(); it != table.end(); it++){
        int key  = it->first;
        int value = it-> second;
        cout<<":Key: "<<key<<" Value: "<<value<<endl;
    }

    cout<<"Find 2 again"<<endl;
    if(table.find(2) != table.end()){
        //found
        int value = table[2];
        cout<<"Found: "<<value<<endl;
    }
    else{
        //not founded
        cout<<"Not founded"<<endl;

    }



    
    return 0;
}