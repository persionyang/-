#include<stdio.h> #include<stdlib.h> #include<time.h>

int main() 
{ 
    int num, guess, count = 0; 
    srand((unsigned)time(NULL)); 
    num = rand() % 100 + 1;
printf("欢迎来到猜数字游戏！\n请输入一个1-100的数字：\n");

while(1){
    printf("请输入您的猜测： ");
    scanf("%d", &guess); count ++; 
    if(guess == num){
        printf("Congratulations! 你猜对了数字！\n");
        printf("你一共猜了%d次。\n", count); 
        break;
    }
    else if(guess > num){
        printf("猜大了，请重新输入：\n");
    }
    else{
        printf("猜小了，请重新输入：\n");
    }
}

return 0;
}
