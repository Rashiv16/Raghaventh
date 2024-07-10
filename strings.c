/*#include<stdio.h>
void main()
{
    char str[100]="GL Communications India Private Limited";
    char str1[100];
    int i,k=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='I' && str[i+1]=='n'&& str[i+2]=='d' && str[i+3]=='i' && str[i+4]=='a')
        {
            str1[k++]='B';
            str1[k++]='a';
            str1[k++]='r';
            str1[k++]='a';
            str1[k++]='t';
            str1[k++]='h';
            i+=4;
        }
        else
        {
            str1[k++]=str[i];
        }
    }
    str1[k]='\0';
    printf("%s",str1);
    printf("\n");
}*/

#include <stdio.h>

int main() {
    char str[1000];
    int n, count = 0;

    printf("Enter a string (max 1000 characters): ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word length to search for: ");
    scanf("%d", &n);

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            int wordLength = 0;
            while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                wordLength++;
                i++;
            }
            if (wordLength == n)
            {
                count++;
            }
        }
    }

    printf("Number of %d letter words: %d\n", n, count);
    return 0;
}



// Remove duplicate elements

/*#include <stdio.h>
void main()
{
    char str[50]="GL Communications India Private Limited";
    char unique[256]={0},current_char;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        current_char=str[i];
        if(current_char==' ')
            unique[current_char]=0;
        if(unique[current_char]==0)
        {
            printf("%c",current_char);
            unique[current_char]=1;
        }
    }
    printf("\n");

}*/


/*#include <stdio.h>
int main() {
    char sentence[200];
    char word[20];
    int count = 0;
    int i, j;
    printf("Enter a sentence (not longer than 200 characters): ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Enter the word to search for (not longer than 20 characters): ");
    scanf("%s", word);
    for (i = 0; sentence[i] != '\0'; i++) {
        for (j = 0; word[j] != '\0'; j++)
        {
            if (sentence[i + j] != word[j])
            {
                break;
            }
        }
        if (word[j] == '\0')
        {
            count++;
        }
    }
    printf("Number of occurrences of '%s' in the sentence: %d\n", word, count);
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int decimalNumber = 15;
    printf("Hexadecimal number is: %X\n", decimalNumber);
    return 0;
}*/
