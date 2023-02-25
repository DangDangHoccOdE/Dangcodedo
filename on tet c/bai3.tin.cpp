#include<stdio.h>
#include<math.h>
void nhapMang(int a[],int &n){
	do{
	printf("\nNhap so luong phan tu : ");
	scanf("%d",&n);
	}while(n>100);
	for(int i=0 ; i<n ; i++){
		printf("\nx[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[],int n){
	printf("\nMang la : ");
	for(int i=0 ; i<n ; i++){
		printf("\nx[%d]=%d",i,a[i]);
	}
}

void inSOChan(int a[],int n){
	printf("\nNhung so chan trong mang la :\n");
	for(int i=0 ; i<n ; i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}

int kiemTraSoNguyenTo(int x){
	if(x<=1){
		return 0;
	} else {
	for(int i=2 ; i<=sqrt(x) ; i++){
		if(x%i==0){
			return 0;
		}
     }
   }
   return 1;
}


void xapSepMang(int a[],int n){
	printf("\nMang sap xep SNT tang dan la : ");
	for(int i=0 ; i<n-1 ; i++){
	    if(kiemTraSoNguyenTo(a[i])==1){
	    	for(int j=i+1 ; j<n ; j++){
	    		if(kiemTraSoNguyenTo(a[j])==1 && a[i]>a[j]){
                   	int temp = a[i];
                        a[i]=a[j];
                     	a[j]=temp;

				}
			}
			}
		}
	}


int main(){
	int n;
	int a[100];
	nhapMang(a,n);
	xuatMang(a,n);
	inSOChan(a,n);
	printf("\nNhung so nguyen to la :");
	for(int i=0 ;i<n ; i++){
		if(kiemTraSoNguyenTo(a[i])){
			printf(" %d",a[i]);
		}
	}
	xapSepMang(a,n);
	xuatMang(a,n);
}
