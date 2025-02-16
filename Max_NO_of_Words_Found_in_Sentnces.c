int mostWordsFound(char ** sentences, int sentencesSize){
    int i, j, count = 0;

    for (i = 0; i < sentencesSize; i++) {
        int n = 0;
        for (j = 0; sentences[i][j] != '\0'; j++) {
            if ((int)sentences[i][j] == 32) {
                n++;
            }
        }
        if (n > count) {
            count = n;
        }
    }

    return count + 1;
}