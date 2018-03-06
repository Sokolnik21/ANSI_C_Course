#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
        int len;                /* current line length          */
        int max;                /* maximum length seen so far   */
        char line[MAXLINE];     /* current input line           */
        char longest[MAXLINE];  /* longest line saved here      */

        max = 0;
        while ((len = myGetline(line, MAXLINE)) > 0)
          printf("%3d-chars: %s", len, line);
        return 0;
}

/* myGetline: read a line into s, return length */
int myGetline(char s[], int lim)
{
        int c, i;

        for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
                s[i] = c;
        if (c == '\n') {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;
}

/* copy: copy 'from' into 'c'; assume to is big enough */
void copy(char to[], char from[])
{
        int i;

        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
}
