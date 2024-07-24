#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct point {
	int xpos;
	int ypos;
};
typedef struct point Point;

int main() {
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	Point pos1 = { a,b };
	Point pos2 = { c,d };

	int dis = (pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos);
	double p;
	p= sqrt((double) dis);
	printf("%f", p);

}