#include <stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt", "w");
	char x[50];
	gets(x);
	fprintf(fptr,"%s", x);
}