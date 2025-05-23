#include<stdio.h>
int b=30;
int fn(int n);
int main(){
	int a=20;
	fn(a);
	
}
int fn(int n){
	printf("%d,%d",n,b);
}
