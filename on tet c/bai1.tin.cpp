#include<stdio.h>
int demCacChuSo(int n){
	int dem=0;
	if(n<10){
		dem=1;
	}
    while(n!=0){
    	dem = dem+1;
    	n=n/10;
	}
	return dem;
}

int main(){
	int n;
	int dem;
	do{
	printf("Nhap so nguyen duong n(n>0): ");
	scanf("%d",&n);
    }while(n<=0 && printf("\nVui long nhap lai n>0\n"));
    printf("\nSo vua nhap la : %d",n);
    demCacChuSo(n);
    printf("\nSo cac chu so la : %d",demCacChuSo(n));
}
