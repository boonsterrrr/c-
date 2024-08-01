int main() {
    char s[100] = { 0 };
    scanf("%s", s);
    for (int i = 97; i < 123; i++) {
        int t = 0;
        while (s[t] != 0) {
            if (s[t] == (char)i) {
                break;
            }
            t++;
        }
        if (s[t] == (char)i) {
            printf("%d ", t);
        }
        else printf("-1 ");
    }

}