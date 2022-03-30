#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int my_strlen(char a[]) {
//	int i = 0;
//	while(*a != '\0') {
//		a++;
//		i++;
//	}
//	return i;
//}
int my_strlen(char* a) {
	while (*a != '\0') {
		return 1 + my_strlen(a + 1);
	}
	return 0;
}
int main() {
	char arr[] = "bit";
	int c = 0;
	c=my_strlen(arr);
	printf("%d", c);
	return 0;
}