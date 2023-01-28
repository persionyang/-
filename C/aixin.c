#include<stdio.h>

#include<stdlib.h>
#include <windows.h>


//打印心形函数
void main()
{
//获取缓冲区控制句柄
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int i=0,j=0,k=0,m=0,n=0,l=0;
long N=10000;
for(;N--;)
{
long time =600000000;
system("CLS");
//设置文本属性
SetConsoleTextAttribute(hConsole, l);
l++;


//打印爱心的上部分
for(i=0;i<9;i++)
{  
//打印空格
   for (int j=9; j>=i; j--) 
             printf(" ");
         
//打印爱心小图形
for(k=0;k<=4+2*i;k++)
printf("%c",3);
//打印倒三角形
for(m=0;m<=15-2*i;m++)
printf(" ");
//打印爱心小图形
for(k=0;k<=4+2*i;k++)
printf("%c",3);
//换行回车
printf("\n");
}
//打印爱心的下部分
for(i=0;i<=21;i++)
{
//打印倒置的直角三角形
for(j=0;j<=i+1;j++)
printf(" ");
//打印爱心小图形
for(k=1;k<=42-2*i;k++)
printf("%c",3);
//换行回车
printf("\n");
}
    //延时函数
for(;time--;);
}
}  