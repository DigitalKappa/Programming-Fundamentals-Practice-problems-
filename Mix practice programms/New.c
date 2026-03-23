#include <stdio.h>
 int add(int a,int b,int c){
     int d=a+b+c;
     return d;
 }
int main() {
    int x,y,z;
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
 int f = add(x,y,z);
 printf("%d",f);

    return 0;
}