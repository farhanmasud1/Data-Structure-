#include<stdio.h>
#include<string.h>
char T[100],P[100];
void takeinput()
{
    printf("Enter a text:  ");
    gets(T);
    printf("Enter a pattern: ");
    gets(P);
    printf("Text = [%s]\n",T);
    printf("Pattern = [%s]\n",P);
}
void performAlgorithm()
{
    int S = strlen(T);
    int R = strlen(P);
    int i,j;
    for(i=0; i<S-R; i++)
    {
        int match=1;
        for(j=0; j<R; j++)
        {
            if(P[j]!=T[i+j])
            {
                match = 0;
                break;
            }
        }
        if(match==1)
        {
            printf("Pattern found at index %d.\n",i);
            return;

        }
    }
    printf("Pattern not found.\n");
}
void main()
{
    takeinput();
    performAlgorithm();
}
