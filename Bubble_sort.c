#include<stdio.h>
int main(){
	int n,i,j,temp,a[100];
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter elements in array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the bubble sorted ascending order is:");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
