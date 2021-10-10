
/*Factorial  5!=5 x 4 x 3 x 2 x 1 */

#include<iostream>
using namespace std;

int Recfact(int n){
    if(n==0)
        return 1;
    return Recfact(n-1)*n;
}
long long int Lfact(int n){
    int p=1;
    if(n==0){
        return 1;
    }
    else
  for(int i=1;i<=n;i++){
    p*=i;
  }
 return p;
}
int main(){

 int n;
 cin>>n;
 if(n>=0){
 cout<<n<<"!="<<Recfact(n);
                      //cout<<endl<<n<<"!="<<Lfact(n);
 }
 cout<<"-ve no factorial";
 return 0;

}
