#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1,string2,result;
    input(&string1);
    input(&string2);
    stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    char string1, string2;
    printf("Enter string1\n");
    scanf("%d", string1);
    printf("Enter string2\n");
    scanf("%d",string2);

}
int stringcompare(char *string1, char *string2)
{
    int i,string1,string2;
    for(i=0 ; string1[i]==string2[i]&& string1[i] !='\0' && string2[i]!='\0'; i++);
    if(string1[i]>string2[i])
    {
        printf("%s is greater\n", string1);
    }
    if(string2[i]>string1[i])
    {
        printf("%s is greater\n", string2);
    }
    else
    printf("Both the strings are equl");
}
void output(char *string1, char *string2, int result)
{
    printf("The largest of %s and %s is %s\n", string1, string2);
}