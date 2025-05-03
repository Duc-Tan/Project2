#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>﻿
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


void main() {
	int arr[] = { 0, 7, 12, 9, 20 };
	printf("Mang ban dau\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\nMang nguoc chieu\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	printf("\nMang sap xep giam dan\n");
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\nPhan tu lon thu hai: %d\n", arr[1]);
	
}