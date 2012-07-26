void preMP (char *pat, int lpat, int mpNext[]) {
	int i, j;
	i = 0;
	j = mpNext[0] = -1;
	while (i < m) {
		while (j>-1 && pat[i] != pat[j])
			j = mpNext[j];
		mpNext[++i]=++j;
	}
}

void preKmp (char *pat, int lpat, int kmpNext[]) {
	int i, j;
	i = 0;
	j = kmpNext[0]=-1;
	while (i < m) {
		while (j>-1 && pat[i] != pat[j])
			j = kmpNext[j];
		i++;
		j++;
		if (pat[i]==pat[j])
			kmpNext[i] = kmpNext[j];
		else
			kmpNext[i] = j;
	}
}


void MP (char *pat, int lpat, char *str, int lstr) {
	int i, j, mpNext[lpat];

	/* Preprocessing */
	preMP (pat, lpat, mpNext);

	/* Searching */
	i = j = 0;
	while (j < lstr) {
		while (i>-1 && pat[i] != str[j])
			i = mpNext[i];
		i++;
		j++;
		if (i>=m) {
			OUTPUT (j-i);
			i = mpNext[i];
		}
	}
}
