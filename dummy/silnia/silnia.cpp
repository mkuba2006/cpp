#include <iostream>
using namespace std;





//silnia
long long int SilniaRek(short int n){
    if(n<2){
      return 1;  
    }
    return SilniaRek(n-1) * n;
}



//iteracja

long long int SilniaITER(int n){
    int silnia=1, i;
    for(i=1;i<=n;i++){
        silnia*=i;
    }
    return silnia;
}

//caigiom fibonaciego
long long int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    
    return fib(n-1) + fib(n-2) ;
}


int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    cout<<"rekurencja: "<<SilniaRek(n)<<endl;
    cout<<"iteracja: "<<SilniaITER(n)<<endl;
    cout<<"ciąg fibonaciego: "<<fib(n)<<endl;
    return 0;
}
