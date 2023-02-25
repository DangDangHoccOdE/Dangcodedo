#include<stdio.h>
int a[100][100];
int m,n,k;
int b[10000];
void nhapMaTran(int x[100][100],int &m,int &n){
	do{
		printf("Nhap m va n : ");
		scanf("%d%d",&m,&n);
	}while(m<0 || n<0);
	for(int i=0 ; i<m ; i++){
	   for(int j=0 ; j<n ; j++){
	   	   printf("x[%d][%d]= ",i,j);
	   	   scanf("%d",&x[i][j]);
	   }
	}
}

void xuatMaTran(int x[100][100],int m,int n){
	printf("\nMang la : \n");
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}

void xoaDong(int x[100][100],int &m,int n){
	int k;
	printf("\nNhap dong can xoa : ");
	scanf("%d",&k);
	for(int i=k ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
		   x[i][j]=x[i+1][j];
		}
	}
	m--;
}


int main(){
	nhapMaTran(a,m,n);
	xuatMaTran(a,m,n);
 xoaDong(a,m,n);
    xuatMaTran(a,m,n);
}







