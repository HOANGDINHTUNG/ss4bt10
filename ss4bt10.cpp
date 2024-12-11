#include<stdio.h>
int main(){
	int a, b, c, temp;
	printf("moi nhap vao a: ");
	scanf("%d",&a);
	printf("moi nhap vao b: ");
	scanf("%d",&b);
	printf("moi nhap vao c: ");
	scanf("%d",&c);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("thu tu tu nho den lon la %d < %d < %d",a,b,c);
}
