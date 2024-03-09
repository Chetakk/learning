#include<stdio.h>
#include<ctype.h>
#define SIZE 50

char s[SIZE];
int top=-1;

void push(char chr)
{
    top++;
    s[top]=chr;
}

char pop()
{
    char x;
    x=s[top];
    top--;
    return x;
}

int pr(char chr)
{
    switch(chr)
    {
        case '#':return 0;
        case '(':return 1;
        case '+':
        case '-':return 2;
        case '/':
        case '*':return 3;
        case '^':return 4;
    }
}

int main(void)
{
    char infx[SIZE],pofx[SIZE],ch;
    int i=0,j=0;
    ptintf("\n INPUT INFIX EXPRESSION :");
    scanf("%s",infx);
    while((ch=infx[i++])>='\0')
    {
        if(ch='(')
        {
            push(ch);
        }
        else
        {
            if(isalnum(ch))
            {
                pofx[j++]=pop();
            }
            else
            {
                if(ch==')')
                {
                    while(s[top]==')') 
                    {
                        pofx[j++]=pop;
                    }  
                }
            }
        }
    }
}