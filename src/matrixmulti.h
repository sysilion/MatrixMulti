/*
 * matrixhulti.h
 *
 *  Created on: 2015. 4. 13.
 *      Author: Administrator
 */

#ifndef MATRIXMULTI_H_
#define MATRIXMULTI_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define CHECK_TIME_START __int64 freq, start, end; if (QueryPerformanceFrequency((LARGE_INTEGER*)&freq)) {QueryPerformanceCounter((LARGE_INTEGER*)&start);
#define CHECK_TIME_END(a,b) QueryPerformanceCounter((LARGE_INTEGER*)&end); a=(float)((double)(end - start)/freq*1000); b=TRUE; } else b=FALSE;

#define LOOP_COUNT 10 //

typedef struct{
};

void classical();
void Classical_Multi(int **input1, int **input2, int **result);

#endif /* MATRIXMULTI_H_ */
