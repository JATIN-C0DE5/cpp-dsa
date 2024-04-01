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

int main(){
    int len=9;
    int arr[len]={0,1,1,1,1,1,0,0,1};
    int i=0;
    int j=len-1;
    cout<<endl;
    cout<<"Given Array is  : ";
    PrintArr(arr,len);
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        else if((arr[i]==1) && (arr[j]==0)){
            // arr[i]=0;
            // arr[j]=1;
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    cout<<"Sorted Array is : ";
    PrintArr(arr,len);
}