#include<stdio.h>
#include<string.h>
char T[100];
int f,len;
void takeinput()
{
    printf("Enter text: ");

    gets(T);
    printf("Enter substring length: ");
    scanf("%d",&len);
    printf("text = [%s]\n",T);
    printf("Enter initial position: ");
    scanf("%d",&f);
    printf("initial position = [%d]\n",f);
    printf("substring length = [%d]\n",len);
}
void performAlgorithm()
{
    int i,j;
    char ans[len+1];
    for(i=f,j=0; i<f+len; i++,j++)
    {
        ans[j]=T[i];
    }
    ans[j]='\0';
    printf("answer = [%s]\n",ans);
}
void main()
{
    takeinput();
    performAlgorithm();
}
