int scrabble()
{
    char letter[100];
    int scrabblevalue = 0;
    printf("Enter a word: ");
    fgets(letter, sizeof(letter), stdin);

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = toupper(letter[i]);
        switch (c)
        {
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            scrabblevalue += 1;
            break;
        case 'D': case 'G':
            scrabblevalue += 2;
            break;
        case 'B': case 'C': case 'M': case 'P':
            scrabblevalue += 3;
            break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            scrabblevalue += 4;
            break;
        case 'K':
            scrabblevalue += 5;
            break;
        case 'J': case 'X':
            scrabblevalue += 8;
            break;
        case 'Q': case 'Z':
            scrabblevalue += 10;
            break;
        }
    }

    printf("Scrabble Value: %d\n", scrabblevalue);
    return 0;
}
