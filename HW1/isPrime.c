int isPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}


void main() {
	const int n = 1000000;
	int cnt = 0;
	for (int i = 2; i < n; i++) {
		if (isPrime(i)) {
			cnt++;
		}
	}
	printf("Number of primes in [2, %d] = %d", n, cnt);
	return 0;
}