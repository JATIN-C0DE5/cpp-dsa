#include <iostream>
using namespace std;

//Using Functions


// bool isEven(){
//     int a;
//     cout << "Enter number to be checked: ";
//     cin >>a;
//     cout<<(a&1)<<endl;
//     if ((a&1)==0){
//         return 0;
//     }else{
//     return 1;
//     }
// }
// int main(){
//     int ans= isEven();
//     cout <<ans<<endl;
//     if (ans){
//         cout<<"Number is odd\n";
//     }
//     else{
//         cout<<"Number is even\n";
//     }
// }




// int fact(int a){
//     int ans = 1;
//     for (int i=1 ;i<=a;i++){
//         ans*=i;
//     }
//     return ans;
// }
// int main(){
//     int n,r;
//     cout<<"enter n: \n";
//     cin>>n;
//     cout<<"enter r: \n";
//     cin>>r;
//     int num = fact(n);
//     int denom = fact(r)*fact(n-r);
//     cout<<"nCr == "<<num/denom<<endl;
// }




// void isPrime(){
//     int c = 1;
//     int a;
//     cout<<endl<<"Enter number : "<<endl;
//     cin >> a;
//     for (int i=2;i<a;i++){
//         if(a%i==0){
//             c=0;
//         }
//     }
//     if(c==0){
//         cout<<"number is composite. \n";
//     }
//     else{
//         cout<<"number is Prime. \n";
//     }
// }
// int main(){
//     while (true)
//     {
//         isPrime();
//     }
// }




// int ap(int n){
//     int ans=(3*n)+7;
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"AP is: "<<ap(n)<<endl;
// }




// int setbits(int m){
//     int bits=0;
//     int a=m;
//     while (a!=0){
//         if((a&1)==1){
//             bits++;
//         }
//         a=a>>1;
//     }
//     return bits;
// }
// int main(){
//     int a;
//     int b;
//     cout<<"Enter a , b :"<<endl;
//     cin>>a>>b;
//     int ans = setbits(a)+setbits(b);
//     cout<<"Total setbits : "<<ans<<endl;
// }




// void fibonacci(int n){
//     int a,b;
//     a=0;
//     b=1;
//     int sum =0;
//     cout<<a<<" "<<b<<" ";
//     for(int i=2;i<(n);i++){
//         sum=a+b;
//         cout<<sum<<" "<<endl;
//         a=b;
//         b=sum;
//     }
//     return ;
// }
// int main(){
//     int n;
//     cout<<"enter number :";
//     cin>>n;
//     fibonacci(n);
// }
