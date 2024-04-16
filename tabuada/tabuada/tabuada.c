#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int m1 = 0, m2 = 0, r = 0;
	printf("Qual tabuada voce quer montar?:");
	scanf("%d", &m1);
	m2 = 1;
	while (m2 <= 10) {
		r = m1 * m2;
		printf("%d x %d = %d \n", m1, m2, r);
		m2 += 1;
	}
	return 0;
}