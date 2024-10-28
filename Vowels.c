#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Entered Character is a Vowel");
        break;
        default:
        printf("Entered Character is a Consonant");
        }
}