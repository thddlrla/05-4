#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i, n, sum = 0;
	printf("inpur a number : ");
	 scanf_s("%d", &i);

	for (n = 1; i >= n; n++) {
		sum += n;
	}
	printf("the result is : %d", sum);

return 0;
}
