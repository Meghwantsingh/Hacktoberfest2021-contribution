/* Tower of hanoi
 move 1 disk at a time
 And small disk never put on bigger disk
*/

#include<iostream>
using namespace std;

int towerHanoi(int n ,int A ,int B, int C){              // A source tower , B auxillary tower (middle tower) , C destination tower

   if(n>0){
     towerHanoi(n-1,A,C,B);
     cout<<"from:"<<A<<"to "<<C<<endl;
     towerHanoi(n-1,B,A,C);
   }
}
int main(){

 int n;                                 //number of disk
 cout<<"Enter the number of disk :";
 cin>>n;

 cout<<towerHanoi(n,1,2,3);              

return 0;
}

