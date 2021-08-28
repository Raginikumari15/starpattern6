#include <iostream>
//#include<stdio.h>
using namespace std;
int main()
{
int i ,j,k;
for(i=0; i<5; i++){
          k=1;
     for(j =0; j<9; j++){
           if(j>=6-i && j<=4+i && k){
         cout << '*';
              //printf("*");
              k = 0;
           }
         else{
              // printf("  ");
        cout<< "  ";
           k=1;
         }
     }
     cout<< endl;
     //printf("\n");
     }
}

    