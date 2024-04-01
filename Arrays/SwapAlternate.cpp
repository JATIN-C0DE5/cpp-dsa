#include <iostream>
using namespace std;

void PrintArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<endl;
}

void Swaping(int arr[], int size){
    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    PrintArr(arr,size);
}
int main(){
    int n=6;
    int Arra[n]={1,2,3,4,5,6};
    cout<<"Old array is: "<<endl;
    PrintArr(Arra,n);
    cout<<"new array is:"<<endl;
    Swaping(Arra,n);
}