/*
 * main.c
 *
 *  Created on: 2015. 4. 13.
 *      Author: Administrator
 */

#include "matrixmulti.h"

int *input;
// input array size
int data_size;

int main(){
	int go, size, i;

	printf("\n\t\tSelect Menu");
	printf("\n\t1. Classical Matrix Multi");
	printf("\n\t2. Strassen Matrix Multi");
	printf("\n\t3. Fusion Matrix Multi");
	printf("\n\t4. ALL Matrix Multi");
	printf("\n\t");
	printf("\n\t");

	scanf("%d", &go);

	printf("input Matrix size (exponentiation of 2) : ");
	scanf("%d", &size);

	data_size = (int)pow(2,size);

	srand(time(NULL));

	// malloc square input
	input = (int *)malloc(sizeof(int) * data_size * data_size);

	// alloc rand data
	for (i = 0; i < data_size * data_size; i++){
		input[i] = rand()%10+1;
//		// random input print
//		printf("%d ", input[i]);
//		if (i%data_size == data_size-1) printf("\n");
	}

	switch(go){
	case 1:
		classical();
		break;
	case 2:
//		strassen();
		break;
	case 3:
//		fusion();
		break;
	case 4:
		classical();
//		strassen();
//		fusion();
		break;
	}
	free(input);

	return 0;
}
