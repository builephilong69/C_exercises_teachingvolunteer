#include<stdio.h>
int check(char word1[20], char word2[20])
{
    int Word1_charCounter[256] = {0};
    int Word2_charCounter[256]={0};
    int counter;
    if(strlen(word1)!=strlen(word2))
        return 0;


    for(counter = 0; word1[counter]!='\0';counter++)
    {
        Word1_charCounter[word1[counter]]++;
    }
    for(counter = 0; word2[counter]!='\0';counter++)
    {
        Word2_charCounter[word2[counter]]++;
    }
    for(counter = 0; counter<256;counter++)
    {
        if(Word1_charCounter[counter]!= Word2_charCounter[counter])
            return 0;
    }
    return 1;
}
int main()
{
    char word1[100],word2[100];
    printf(" Input the  first String : ");
    fgets(word1, sizeof word1, stdin);
    printf(" Input the  second String : ");
    fgets(word2, sizeof word2, stdin);
    if(check(word1, word2) == 1)
    {
       word1[strlen(word1)-1] = '\0';
       word2[strlen(word2)-1] = '\0';
       printf(" %s and %s are Anagram.\n\n",word1,word2);
    }
    else
    {
       word1[strlen(word1)-1] = '\0';
       word2[strlen(word2)-1] = '\0';
       printf(" %s and %s are not Anagram.\n\n",word1,word2);
    }
    return 0;
}


