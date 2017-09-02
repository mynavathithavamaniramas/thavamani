#include <stdio.h>
int main()
{
    string cha;
    int LowercaseVowel, UppercaseVowel;

    printf("the alphabet: ");
    scanf("%s",&cha);
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (LowercaseVowel || UppercaseVowel)
        printf("%c is a vowel.", cha);
    else
        printf("%c is a consonant.", cha);
    return 0;
}
