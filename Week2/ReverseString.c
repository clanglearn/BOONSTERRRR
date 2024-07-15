#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rev(char a[]) {
    int i = 0;
    while (a[i] != '\0') {
        i++;
    }
    int N = i;


    int j = 0;
    char b[50];
    while (a[j] != '\0') {
        b[j] = a[N - j - 1];
        j++;
    }
    b[N] = '\0';
    printf("%s", b);
}

int main() {
    char p[100];
    scanf("%s", p);
    rev(p);

}