#include <stdio.h>
struct sv{
	int id;
	char name[50];
	long long age;
};
typedef struct sv s;
int main(){
//	int n;
//printf("nhap so sinh vien ban muon : ");
//scanf("%d", &n);
	s a[50];
FILE *fptr;
//fptr=fopen("student.txt","w");
//for(int i=0;i<n;i++){
//	a[i].id=i+1;
//	printf("\nnhap ten hoc sinh thu %d : ", a[i].id);
//	fflush(stdin);
//	fgets(a[i].name,100,stdin);
//	if(a[i].name[strlen(a[i].name)-1]=='\n'){
//		a[i].name[strlen(a[i].name)-1]=' ';
//	}
//	printf("\nnhap tuoi sinh vien thu %d : ", a[i].id);
//	scanf("%lld", &a[i].age);
//	fprintf(fptr,"%s%d",a[i].name,a[i].age);
//}
//fclose(fptr);
fptr=fopen("student.txt", "r");
for(int i=0;i<2;i++){
	fgets(a[i].name,100,fptr);
	printf("%s\n",a[i].name);		
}
fclose(fptr);
}
