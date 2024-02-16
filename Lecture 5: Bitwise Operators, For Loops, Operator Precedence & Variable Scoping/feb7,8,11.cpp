#include <iostream>
using namespace std;



//for loop syntax
//for (initialization, condition, updation){
//  }



// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for (int i=0;i<=n; i++){
//         cout<<i<<" "<<endl;
//     }
// }



// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin >> n;
//     int i = 0;
//     for (;;){
//         if (i<=n)
//         {
//             cout<< i <<" "<<endl;
//         }
//         else
//         {
//             break;
//         }
//         i++;
//     }
// }




// int main(){
//     int i = 0;
//     for (int a=0, b=0,c=0;a<=10,b<=20,c<=30;a++,b+=2,c+=3){
//         cout << a <<" "<<b<< " " <<c<<endl;
//     }
// }



// int main(){
//     int n=10;
//     int a=0,b=1,c;
//     for (int m=1;m<=n;m+=1){
//         c=a+b;
//         cout<<a<<endl;
//         a=b;
//         b=c;
//     }
// }



// int main(){
//     int n;
//     cout<<"enter number : ";
//     cin>>n;
//     int m=0;
//     for(int i=2;i<n;i++){
//         if (n%i==0){
//             m=1;
//             break;
//         }
//     }
//     if(m==0){
//         cout<<n<<" is prime"<<endl;
//     }
//     else{
//         cout<<n<<" is composite"<<endl;
//     }
// }



// int main(){
//     int n;
//     cout<<"enter number : ";
//     cin>>n;
//     cout<<"prime numbers are :";
//     for(int i=2;i<n;i++){
//         bool bol=true;
//         for(int j = 2; j<i;j++){
//             if (i%j==0){
//                 bol=false;
//                 break;
//             }
//         }
//         if (bol){
//             cout<<i;
//         }
//     }
// }



// int main(){
//     for (int i=0;i<=15;i+=2){
//         cout<<i<<" ";
//         if (i&1){
//             continue;
//         }
//         i++;
//     }
// }



// int main(){
//     int n;
//     cout<<"enter number : ";
//     cin>>n;
//     int sum=0;
//     int mul=1;
//     while(n!=0){
//         int dig=n%19;
//         sum+=dig;
//         mul*=dig;
//         n=n/10;
//     }
//     int ans=mul-sum;
//     cout<<"answer of "<<mul<<"-"<<sum<<"="<<ans<<endl;
// }


// int main(){
//     int n;
//     cout<<"number = ";
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         if(n%10==1){
//         count+=1;
//         }
//         n/=10;
//     }
//     cout<<count;
// }

//OR

int main(){
    int n;
    cout<<"number = ";
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
        count+=1;
        }
        cout<<endl;
        cout<<n<<endl;
        n/=10;
        cout<<n<<endl;
        cout<<(n>>1)<<"  "<<endl ;
    }
    cout<<count;
}
