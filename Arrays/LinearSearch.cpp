#include <iostream>
using namespace std;

bool found(int arr[],int size,int elem){
    for(int i=0;i<=size;i++){
        if (arr[i]==elem){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,element;
    cout<<"no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"element to search for: ";
    cin>>element;
    bool existance = found(arr,n,element);
    if(existance){
        cout<<">>> element exist\n";
    }
    else{
        cout<<">>> Not found\n";
    }
}