#include <stdio.h>
#include <string.h>

#define max 100

struct ThueBao
{
	char tenTB[30];
	char diaChi[50];
	char soDT[10][11];
	int soSoDT;
};	

struct DanhBa 
{
	struct ThueBao db[max];
	int			soTB;
};
// Nhap thue bao luu vao o nho x
void nhapThueBao(struct ThueBao *x)
{
	int i;
  	printf("Nhap ten thue bao:"); gets(x->tenTB);
  	printf("Nhap dia chi thue bao:"); gets(x->diaChi);
	printf("Nhap so so dien thoai cua thue bao:"); 
	scanf("%d",&x->soSoDT);
	fflush(stdin);
	for (i=0; i<x->soSoDT; i++)
	{
   		printf("Nhap so dien thoai thu %d ", i," : "); gets(x->soDT[i]);
	}
}
//In thue bao x len man hinh
void inThueBao(struct ThueBao x)
{
	int i;
  	printf("Ten thue bao: %s \n",x.tenTB);
  	printf("Dia chi thue bao: %s \n",x.diaChi);
	printf("Cac so dien thoai cua thue bao:"); 
	for (i=0; i<=x.soSoDT; i++)
   		printf("%s ",x.soDT[i]);	
}
//Nhap mot danh ba
void nhapDanhBa(struct DanhBa *d)
{
	int i;
	printf("So thue bao: "); scanf("%d",&d->soTB);
	fflush(stdin);
	for(i=0; i<d->soTB;i++)
		nhapThueBao(&d->db[i]);
}

void inDanhBa(struct DanhBa d)
{
	int i;
	for(i=0; i<d.soTB;i++)
		inThueBao(d.db[i]);
}
void main()
{
	struct DanhBa db;
	struct ThueBao t;
	nhapDanhBa(&db);
	inDanhBa(db);
}
