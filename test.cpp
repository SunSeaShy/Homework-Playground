#include <stdio.h>

char array[] = { 2,3,4,5};//初始化一个数列，四位数可任意

void swap(int sub1, int sub2);
/*
请注意

对四位数进行全排时，会有24种结果

每个数字在第一位的情况有24/4=6种

因此这里的解决办法是，先对除去首位的剩下三位进行全排

再把首位分别加到全排的三位前面
*/
int main() {

	for (int h = 0; h <= 3; h++) {
		swap(h, 3);//把首位数字放到最后面，因为下面的处理是对数列array前三位进行全排
		//<--------这的操作是对数列array前三位进行全排
		for (int i = 0; i <= 2; i++) {
			for (int j = i + 1; j <= 2; j++) {
				swap(i, j);
				printf("%d", array[3]);
				for (int k = 0; k <= 2; k++) {
					printf("%d", array[k]);
				}
				printf("\n");
				swap(1, 2);
				printf("%d", array[3]);
				for (int k = 0; k <= 2; k++) {
					printf("%d", array[k]);
				}
				swap(1, 2);
				printf("\n");
				swap(i, j);
			}
		}
		//<--------这的操作是对数列array前三位进行全排
		swap(h, 3);
	}
	return 0;
}

void swap(int sub1, int sub2) {//交换数列array中下标为sub1和sub2的两个位置的数
	int temp = array[sub1];
	array[sub1] = array[sub2];
	array[sub2] = temp;
}
