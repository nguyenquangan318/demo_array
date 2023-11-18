#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int row, col;
	printf("Nhap so hang: ");
	scanf("%d", &row);
	printf("Nhap so cot: ");
	scanf("%d", &col);
	int numbers[row][col]
	int sum, max , min, isPrime, number, count, addIndex, acc, maxRowIndex, maxSum;
	do {
		printf("\n*******************************MENU**********************************\n");
		printf("1. Nhap gia tri tung phan tu\n");
		printf("2. In ra gia tri cac phan tu theo ma tran\n");
		printf("3. In phan tu le va tinh tong\n");
		printf("4. In ra gia tri lon nhat va nho nhat\n");
		printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
		printf("6. Nhap vao 1 so va thong ke\n");
		printf("7. Them phan tu vao vi tri chi dinh\n");
		printf("8. Thoat\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				break;
			case 2:
				//B1: Duyet qua tung phan tu trong mang
				//B2: In ra tung phan tu
					//Khi ket thuc moi hang thi in ra ky tu xuong dong
				break;
			case 3:
				//B1: Duyet qua tung phan tu trong mang
				//B2: Neu phan tu khong chia het cho 2 thi in ra va cong vao bien sum
				//B3: In ra bien sum
				break;
			case 4:
				//B1: dat acc = 1
				//B2: Duyet qua tung phan tu trong mang
				//B3: Neu hang = 0 hoac hang= row - 1 hoac cot =0 hoac cot = col - 1 Thi in ra va nhan vao bien acc 
				//B4: In ra acc
				break;
			case 5:
				//B1: dat sum = 0
				//B2: Duyet qua tung phan tu trong mang
				//B2.1: Neu chi so hang = chi so cot thi in ra va cong vao bien sum
				//B3: Duyet qua tung phan tu trong mang
				//B3.1: Neu  tong chi so hang va cot hien tai bang so cot -1 thi in ra va cong vao bien sum
				//B4: In ra bien sum 
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				//B1: Duyet qua tung phan tu trong hang 1
				//B2: Dat sum thanh tong cac phan tu hang 1, maxSum = sum, maxRowIndex = 0
				//B2: Voi moi hang tiep theo duoc duyet thi dat lai sum = 0 va cong cac phan tu cua hang do vao sum
				//B3: So sanh sum va maxSum, Neu sum lon hon thi dat lai maxSum va maxRowIndex
				//B4: In ra maxSum va maxRowIndex
				break;
		}
	}while(1==1);
}
