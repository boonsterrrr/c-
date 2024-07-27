int main() {
	int cls[31] = { 0, };
	int d;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &d);
		cls[d] = d;
	}

	for (int i = 1; i < 31; i++) {
		if (cls[i] == 0) {
			printf("%d\n", i);
		}
	}

	

	
}