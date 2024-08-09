#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int len;
	char word[51];
	
}Word;

int compare(const void* a, const void* b) {
	Word d1 = *(Word*)a;
	Word d2 = *(Word*)b;
	if (d1.len < d2.len) {
		return -1;
	}
	else if (d1.len > d2.len) {
		return 1;
	}
	else return strcmp(d1.word, d2.word);
}
Word p[20000];
int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", p[i].word);
		p[i].len = strlen(p[i].word);

	}
	qsort(p, n, sizeof(Word), compare);
	puts(p[0].word);
	for (int i = 1; i < n; i++) {
		if (strcmp(p[i - 1].word, p[i].word)) {
			puts(p[i].word);
		}
	}
}

