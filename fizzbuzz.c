#include <stdio.h>

void fizzbuzz() {
	int i;	// pre-c99 style declaration outside for loop
	for (i = 1; i <= 100; ++i) {
		if (i % 3 == 0)
			if (i % 5 == 0)
				printf("%d\tfizzbuzz\n", i);
			else printf("%d\tfizz\n", i);
		else if (i % 5 == 0)
			printf("%d\tbuzz\n", i);
		else printf("%d\n", i);
	}
}

int main() {
	fizzbuzz();
	return 0;
}
