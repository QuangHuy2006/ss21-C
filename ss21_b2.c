#include <stdio.h>
int main(){
char mytext[50]="Hello World";	
FILE *fptr;
fptr=fopen("bt01.txt","w");
fprintf(fptr,mytext);
fclose(fptr);
fptr=fopen("bt01.txt","r");
	printf("chuoi ban dau %s", mytext);
	fgets(mytext,2,fptr);
	printf("\nki tu dau tien %s", mytext);
	fclose(fptr);
}

