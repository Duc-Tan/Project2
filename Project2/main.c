#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>﻿
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


void main() {
	int n = 4;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == n-1 || j == i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}