#include <stdio.h>

int main() {
    // Nhap 2 canh cua mot hinh chu nhat ra kq chu vi va dien tich
    printf("Xin moi nhap chieu dai HCN D:  ");
	int D=0;
	scanf("%d", &D);
	printf("Xin moi nhap chieu rong HCN R:  ");
	int R=0;
	scanf("%d", &R);
  	int Chuvi;
  	Chuvi=2*(D+R);
  	int Dientich;
  	Dientich=D*R;
  printf("Chu vi cua HCN la %d. \n", Chuvi);
  printf("Chu vi cua HCN la %d.", Dientich);
  return 0;
}