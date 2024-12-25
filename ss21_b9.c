#include <stdio.h>
struct lib{
	char id[50];
	char title[50];
	char author[50];
	float price;
	char genre[50];
};
typedef struct lib liverpool;
void input(liverpool *a, int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("\nnhap id cuon sach thu %d : ", i+1);
		fgets(a[i].id,100,stdin);
		if(a[i].id[strlen(a[i].id)-1]=='\n'){
		a[i].id[strlen(a[i].id)-1]=' ';
		}
		fflush(stdin);
		printf("\nnhap ten cuon sach thu %d : ", i+1);
		fgets(a[i].title,100,stdin);
		if(a[i].title[strlen(a[i].title)-1]=='\n'){
		a[i].title[strlen(a[i].title)-1]=' ';
		}
		fflush(stdin);
		printf("\nnhap ten tac gia cuon sach thu %d : ", i+1);
		fgets(a[i].author,100,stdin);
		if(a[i].author[strlen(a[i].author)-1]=='\n'){
		a[i].author[strlen(a[i].author)-1]=' ';
		}
		printf("\nnhap gia cuon sach thu %d : ", i+1);
		scanf("%f", &a[i].price);
		fflush(stdin);
		printf("\nnhap the loai cua cuon sach thu %d : ", i+1);
		fgets(a[i].genre,100,stdin);
		if(a[i].genre[strlen(a[i].genre)-1]=='\n'){
		a[i].genre[strlen(a[i].genre)-1]=' ';
		}
	}
}

int main(){
	int n;
	liverpool a[50];
	int choice;
	FILE *fptr;
	do{
	printf("MENU\n");
	printf("1.Nhap so luong va thong tin sach\n");
	printf("2.Luu thong tin sach vao file\n");
	printf("3.Lay thong tin sach tu file\n");
	printf("4.Hien thi thong tin sach\n");
	printf("5.Thoat\n");
	printf("\nnhap lua chon cua ban : ");
	scanf("%d", &choice);
	if(choice==1){
	printf("nhap so luong sach ban muon : ");
	scanf("%d", &n);
	fptr=fopen("vd9.txt", "w");	
	input(a,n);	
	fclose(fptr);
	}
	if(choice==2){
	fptr=fopen("vd9.txt", "w");	
		for(int i=0;i<n;i++){
			fprintf(fptr,"Id cuon sach thu %d : %s\nten cuon sach thu %d : %s\nten tac gia cuon sach thu %d : %s\ngia cuon sach thu %d : %.0f\nthe loai cuon sach thu %d : %s",i+1,a[i].id,i+1,a[i].title, i+1,a[i].author,i+1,a[i].price, i+1,a[i].genre);
		}
		fclose(fptr);	
	}
	if(choice==3){
	}
	if(choice==4){
	fptr=fopen("vd9.txt", "r");
		for(int i=0;i<n*5;i++){
			fgets(a[i].id,1000,fptr);
			printf("%s\n",a[i].id);		
		}
	fclose(fptr);
	}
	if(choice==5){
		printf("thoat chuong trinh !");
	}
}while(choice!=5);
exit(0);
}