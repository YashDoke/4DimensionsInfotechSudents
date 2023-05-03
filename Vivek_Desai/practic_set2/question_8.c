#include<stdio.h>

int main(){
	
	int x=2,y=5,z=0;
	
	int a = x==2;
	printf("x==2: %d",a);

	int b = x != 5;
	printf("\nx != 5: %d",b);

	int c = x!=5 && y>=5;
	printf("\nx!=5 && y>=5: %d",c);

	int d = z!=0 || x==2;
	printf("\nz!=0 || x==2: %d",d);

	int e = !(y<10);
	printf("\n!(y<10): %d",e);

	return 0;
}