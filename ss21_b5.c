#include <stdio.h>
struct sv{
	char name[50];
};
typedef struct sv s;
int main(){
	int n;
printf("nhap so dong ban muon : ");
scanf("%d", &n);
	s a[n];
FILE *fptr;
fptr=fopen("bt05.txt","w");
for(int i=0;i<n;i++){
	printf("\nnhap chuoi tai dong %d : ", i+1);
	fflush(stdin);
	fgets(a[i].name,100,stdin);
//	
}
fclose(fptr);
fptr=fopen("bt05.txt","r");
for(int i=0;i<n;i++){
	fgets(a[i].name,1000,fptr);
	printf("\ndong thu %d : %s", i+1,a[i].name);
}
fclose(fptr);
}