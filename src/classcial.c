/*
 * classcial.c
 *
 *  Created on: 2015. 4. 13.
 *      Author: Administrator
 */

#include "matrixmulti.h"

void classical() {
	extern int **input;
	int x; // loop
	int i, j; // result loop

	// input array size
	extern int data_size;

	// time check variable
	float Time = 0;
	BOOL err;

	// init result
	int result[data_size][data_size];
	for (i = 0; i < data_size; i++) {
		for (j = 0; j < data_size; j++) {
			result[i][j] = 0;
		}
	}

	CHECK_TIME_START
	;
	for (x = 0; x < LOOP_COUNT; x++) {
		printf("%d %d\n", input[0][0], input[0][1]);
		Classical_Multi(input, input, result);
	}
	CHECK_TIME_END(Time, err)
	;

//	// print result
//	printf("\n");
//	for (i = 0; i < data_size * data_size; i++){
//		printf("%d ",result[i]);
//		if (i%data_size == data_size-1) printf("\n");
//	}

	printf(" Calc Time = %.6fms\n", Time / LOOP_COUNT);
	free(result);
}

void Classical_Multi(int **input1, int **input2, int **result) {
	// input array size
	extern int data_size;
	int i, j, k;
	for (i = 0; i < data_size; i++) {
		for (j = 0; j < data_size; j++) {
			for (k = 0; k < data_size; k++) {
				printf("%d %d\n", input1[i][k], input2[k][j]);
				result[i][j] += input1[i][k] * input2[k][j];
			}
		}
	}
}
