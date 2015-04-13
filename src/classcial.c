/*
 * classcial.c
 *
 *  Created on: 2015. 4. 13.
 *      Author: Administrator
 */

#include "matrixmulti.h"

void classical(){
	extern int *input;
	int x; // loop
	int i, j; // result loop

	// input array size
	extern int data_size;

	// time check variable
	float Time = 0;
	BOOL err;

	int result[data_size * data_size];

	CHECK_TIME_START;
	for (x = 0; x < LOOP_COUNT; x++){
		Classical_Multi(input, result);
	}
	CHECK_TIME_END(Time, err);

//	// print result
//	printf("\n");
//	for (i = 0; i < data_size * data_size; i++){
//		printf("%d ",result[i]);
//		if (i%data_size == data_size-1) printf("\n");
//	}

	printf(" Calc Time = %.6fms\n", Time/LOOP_COUNT);
	free(result);
}

void Classical_Multi(int *input, int *result){
	// input array size
	extern int data_size;
	int i, j;
	for (i = 0; i < data_size * data_size; i++){
		result[i] = 0;
		for (j = 0; j < data_size; j++){
			result[i] += input[((int)(i / data_size) * data_size) + j] * input[(i % data_size) + (j * data_size)];
		}
	}
}
