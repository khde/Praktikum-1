#include <stdio.h>


unsigned long binomial_r(unsigned long n, unsigned long k) {
	if (n == k || k == 0) {
		return 1;
	}
	return binomial_r(n - 1, k - 1) + binomial_r(n - 1, k);
}


int main(void) {
	printf("%ld\n", binomial_r(33, 13));
	return 0;
}
