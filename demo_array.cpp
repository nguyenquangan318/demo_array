#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int numbers[100];
	int n, currentIndex = 0, sum, max , min, isPrime, number, count, addIndex;
	do {
		printf("\n*******************************MENU**********************************\n");
		printf("1. Nhap so phan tu va gia tri tung phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quan ly\n");
		printf("3. In phan tu chan va tinh tong\n");
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
				//B1: nhap vao so phan tu (n)
				printf("Nhap vao so phan tu: ");
				scanf("%d", &n);
				//B2: Duyet qua tu i - n de them phan tu, tang chi so currentIndex len 1
				for(int i=0; i<n; i++){
					printf("phan tu numbers[%d]: ", currentIndex);
					scanf("%d", &numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				//B1: Duyet qua tu i - currentIndex
				printf("Mang la: ");
				for(int i=0; i<currentIndex; i++){
					printf("numbers[%d]: %d\t", i, numbers[i]);
				}
				printf("\n");
				//B2: In ra tung phan tu co chi so tuong ung
				break;
			case 3:
				//B1: dat sum = 0
				sum = 0;
				//B2: Duyet qua tu i - currentIndex
				for(int i=0; i<currentIndex; i++){
					if(numbers[i]%2 ==0){
						//B3: Neu phan tu chan thi in ra va cong them vao bien sum
						printf("numbers[%d]: %d\t", i, numbers[i]);
						sum += numbers[i];
					}
				}
				//B4: In ra bien sum
				printf("\nTong so chan la %d \n", sum);
				break;
			case 4:
				//B1: dat max = numbers[0], min = numbers[0]
				max= numbers[0];
				min = numbers[0];
				//B2: Duyet qua tu i - currentIndex
				for(int i=0; i<currentIndex; i++){
					//B3: Neu phan tu lon hon max thi dat lai max, nho hon min thi dat lai min
					if(max < numbers[i]){
						max = numbers[i];
					}
					if(min > numbers[i]){
						min = numbers[i];
					}
				}
				//B4: In ra max va min
				printf("Phan tu max la: %d, phan tu min la: %d\n", max, min);
				break;
			case 5:
				//B1: Dat isPrime = 1, dat sum = 0
				sum = 0;
				//B2: Duyet qua tu i - currentIndex
				for(int i=0; i<currentIndex; i++){
					isPrime = 1;
					//B3: Neu phan tu < 2 thi dat isPrime = 0
					if(numbers[i] < 2){
						isPrime = 0;
					} else{
					//B4: Voi moi phan tu, kiem tra xem co chia het cho so nao tu 2 - can bac hai cua so do, neu co thi dat isPrime = 0
						for(int j = 2; j<=sqrt(numbers[i]); j++){
							if(numbers[i] % j == 0){
								isPrime = 0;
								break;
							}
						}
					}
					if(isPrime == 1){
						//B5: Neu isPrime = 1 thi in ra, cong vao bien sum va tiep tuc kiem tra phan tu tiep theo
						printf("%d\t", numbers[i]);
						sum += numbers[i];
					}
				}
				//B6: In ra bien sum
				printf("\nTong la: %d", sum);
				break;
			case 6:
				//B1: Nhap vao bien number
				printf("Nhap vao 1 so: ");
				scanf("%d", &number);
				count = 0;
				//B2: Duyet qua tu i - currentIndex
				for(int i=0; i<currentIndex; i++){
					//B3: Neu phan tu giong voi number thi tang count len 1
					if(numbers[i] == number){
						count++;
					}
				}
				//B4: In ra so luong thong ke
				printf("Phan tu %d xuat hien trong mang %d lan", number, count);
				break;
			case 7:
				//B1: Nhap vao vi tri can them addIndex, gia tri can them number
				printf("Nhap vao vi tri can them: ");
				scanf("%d", &addIndex);
				printf("Nhap vao gia tri can them: ");
				scanf("%d", &number);
				//B2: Kiem tra vi tri co hop le
				if(addIndex < 0 || addIndex > 99){
					//B3.1: Neu khong hop le thi thong bao
					printf("Vi tri can them khong hop le");
				}else{
					//B3.2: Neu hop le thi kiem tra addIndex >= hay < currentIndex
					if(addIndex >= currentIndex){
					//B4.1: Neu addIndex >= currentIndex, duyet qua mang, phan tu chua co gia tri thi gan = 0, phan tu co chi so 
					// addIndex thi dat thanh number, dat currentIndex = addIndex + 1
						for(int i=currentIndex; i<=addIndex; i++){
							if(i == addIndex){
								numbers[i] = number;
							} else{
								numbers[i] = 0;
							} 
						}
						currentIndex = addIndex + 1;
					}else{	
					//B4.2: Neu addIndex >= currentIndex, duyet qua mang
						for(int i=currentIndex; i>addIndex; i--){
							//- phan tu co chi so < addIndex thi giu nguyen
							//- phan tu co chi so >= addIndex thi phai tang chi so len 1
							numbers[i] = numbers[i-1];
						}
						//Tang current index them 1
						currentIndex++;
						//B5: gan phan tu co chi so adddIndex thanh number
						numbers[addIndex] = number;
					}
				}
				break;
			case 8:
				exit(0);				
		}
	}while(1==1);
}
