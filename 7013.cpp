#include<stdio.h>
#include<string.h>
int udf(char a[30]){
	int i,length;
	for(i=0;a[i]!='\0';i++){
		length++;
	}
}
main(){
   char a[30];
	int i,length=0;

	printf("ENTER STRING= ");
	scanf("%s",&a);
	
   length=udf(a);
   
   printf("LENGTH OF STRING IS= %i",length);
   
   
}
