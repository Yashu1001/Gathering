#include<stdio.h>
#include<string.h>
int udf(char a[20]){
	int i,length;
	for(i=0;a[i]!='\0';i++){
		length++;
	}
}

main(){
   char a[5]/*="YASHVI VACHHANI"*/;
	int i,length;

	printf("ENTER STRING= ");
	scanf("%s",&a);
	
   length=udf(a);
   
   printf("LENGTH OF STRING IS= %i",length);
   
   
}
