#include<stdio.h>
int a[100][100];
int b[100][100];
int m,n;
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

void chuyenMaTranChuyenVi(int x[100][100],int m,int n){
	int y[100][100];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			y[i][j] = x[j][i];
		}
	}
	printf("\nMang chuyen vi la : \n");
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d\t",y[i][j]);
		}
		printf("\n");
	}
}

int main(){
	nhapMaTran(a,m,n);
	xuatMaTran(a,m,n);
	chuyenMaTranChuyenVi(a,m,n);
}
