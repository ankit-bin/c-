#include<iostream>
using namespace std;

void subArrPrint( int arr[],int size){

    for ( int i = 0; i<size;i++){
        for(int k =i ;k<=size-1;k++){
            cout<<"("<<i<<","<<k<<") ";
        }
        cout<<endl;
    }

}



int main(){

    int arr[5] = {1,2,3,4,5};
    subArrPrint(arr,5);

}