#include <iostream>
using namespace std;


//............................................CREATING ARRAY
// int main(){
//     int hello[5]={1};
//     for(int i =0;i<=4;i++){
//         cout<<hello[i]<<endl;
//     }
// }




//.............................................UPDATING ELEMENTS IN AN ARRAY
// int main(){
//     int hello[5];
//     for(int i =0;i<=4;i++){
//         int n;
//         cin>>n;
//         hello[i]=n;
//     }
//     for(int i =0;i<=4;i++){
//     cout<<hello[i]<<endl;
//     }
// }


//...............................................USING FUNCTIONS WITH ARRAYS
// int PrintArray(int arr[],int sizeee){
//     for(int i =0;i<sizeee;i++){
//         cout<<arr[i]<<endl;
// }
// return 0;
// }
// int main(){
//     int size=5;
//     int hello[size]={22,43,76,5,34};
//     PrintArray(hello,size);
// }




//................................................USING SIZE OF
// int main(){
//     int hello[5]={22,43,76,5,34};
//     int size=sizeof(hello)/sizeof(int);
//     cout<<size<<endl;
// }



//...............................................FIND MAX MIN 
// int MaxElement(int arra[],int size){
//     int max = INT32_MIN;
//     for (int i = 0;i<size;i++){
//         if(arra[i]>max){
//             max=arra[i];
//         }
//     }
//     return max;
// }
// int MinElement(int arra[],int size){
//     int min = INT32_MAX;
//     for (int i = 0;i<size;i++){
//         if(arra[i]<min){
//             min=arra[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int n;
//     cout<<endl<<"Enter size: ";
//     cin>>n;
//     int arr[100];
//     cout<<"Enter elements: ";
//     for(int i=0 ;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl<<endl;
//     cout<<"Maximum element is: "<<MaxElement(arr,n)<<endl;
//     cout<<"Minimum element is: "<<MinElement(arr,n)<<endl;
// }





//..............................................SUM OF ALL ELEMENTS IN AN ARRAY
int sumA(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<endl<<"Enter size: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<endl;
    cout<<"Sum is : "<<sumA(arr,n);
}