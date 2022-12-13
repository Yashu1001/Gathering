#include<stdio.h>
#include<string.h>
int udf(int *a,int b){
int i=0,sum;
	for(i=0;i<b;i++){
	 sum=sum+a[i];
}
    return sum;
}
main(){	
int a[10]={1,2,3,4,5,6,7,8,9};
int total;

total=udf(a,9);
   printf("ENTER number= %d",total);
		
}
