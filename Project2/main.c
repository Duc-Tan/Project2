#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>﻿
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


void main() {
	int arr[] = { 0, 7, 12, 9, 20, 23, 44, 60, 11, 1 };
	int arr_le[10];
	int arr_chan[10];
	int l = 0, c = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			arr_le[l] = arr[i];
			l++;
		}
		else {
			arr_chan[c] = arr[i];
			c++;
		}
	}
	printf("Mang le: ");
	for (int i = 0; i < l; i++) {
		printf("%d ", arr_le[i]);
	}
	printf("\nMang chan: ");
	for (int i = 0; i < c; i++) {
		printf("%d ", arr_chan[i]);
	}

	int index = 0;
	int arr_new[10];
	printf("\nTron mang: ");
	for (int i = 0; i < l; i++) {
		arr_new[index] = arr_le[i];
		index++;
	}
	for (int i = 0; i < c; i++) {
		arr_new[index] = arr_chan[i];
		index++;
	}
	for (int i = 0; i < index; i++) {
		printf("%d ", arr_new[i]);
	}
}