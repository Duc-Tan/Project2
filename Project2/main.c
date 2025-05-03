#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>﻿
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


void main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == 0 || i == 3 || j == 0 || j == 3) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}