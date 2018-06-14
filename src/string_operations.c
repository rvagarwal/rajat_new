#include<stdio.h>
#include <wchar.h>
size_t mywc_strlen(const wchar_t *s)
{
const wchar_t *p=s;
while(*p)
++p;
return(p-s);
}
char *my_strcpy(const char *t,char *s)
{
char *p=t;
while(*t++=*s++);
return p;
}
char *my_strcat(char *t,char *s)
{
size_t *p,*r;
*p=my_strlen(s[i]);
*r=my_strlen([i]);
for(int i=(int)(*p);i<(int)(*p+*r);i++){
s[i]=u[i-(int)(*p);
}s[i]='\0';
return p
}
int main(void)
{
int i;
char p1[32];
char *s[]={
"Git tutorials",
"Tutorials Point"
};
char *u[]={
"Git tutorials",
"Tutorials Point"
};
char *u[]={
"Git tutorials",
"Tutorials Point"
};
for(i=0;i<2;++i)
printf("string lenght of %s = %d\n",s[i],my_strlen(s[i]));
printf("%s\n",my_strcpy(p1,"Hello, World !!!"));
return0;
}