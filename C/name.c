
#include <stdio.h> #include <stdlib.h> #include <time.h>
void random_name(void);
int main(void) { 
    srand((unsigned)time(NULL)); random_name();
return 0;
}
void random_name(void) 
{
     char *family_name[] = {"张", "李", "王", "赵", "钱","杨"}; 
     char *given_name[] = {"明", "红", "刚", "黑","紫"};


int family_name_length = sizeof(family_name) / sizeof(family_name[0]);
int given_name_length = sizeof(given_name) / sizeof(given_name[0]);

int family_name_index = rand() % family_name_length;
int given_name_index = rand() % given_name_length;

printf("随机取名：%s%s\n", family_name[family_name_index], given_name[given_name_index]);

getchar();
return 0;
}