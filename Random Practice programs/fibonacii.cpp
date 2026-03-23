#include<Stdio.h>
int main(){

  int n;
  printf("Write any value = ");
  scanf("%d",&n);
	int a = 0;
	int b = 1;
for(int i=1 ; i<=n; i++){
	printf("%d,",a);
	int c = a+b;
	     a=b;
	     b=c;
	 
}
	return 0;
}