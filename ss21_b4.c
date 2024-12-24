#include <stdio.h>
int main(){
char mytext[50];
FILE *fptr;
fptr=fopen("bt01.txt","r");
fgets(mytext,50,fptr);
	printf("dong dau tien %s", mytext);

	fclose(fptr);
}