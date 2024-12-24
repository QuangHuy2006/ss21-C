#include <stdio.h>
int main(){
	char x[50];
	FILE *fptr;
	fptr=fopen("bt01.txt", "a");
	gets(x);
	fprintf(fptr,x);
	fclose(fptr);
	fptr=fopen("bt01.txt", "r");
	fgets(x,50,fptr);
	printf("file moi la %s", x);
}