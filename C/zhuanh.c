#include <stdio.h>
 
int main()
{
 
 int cm;
 
 scanf("«Î ‰»Î…Ì∏ﬂ%d°£", &cm);
 
 int foot= cm/100.0/0.3048;
 
 int inch = (cm/100.0/0.3048-foot)*12;
 
 printf("%d %d\n",foot,inch);
 
return 0;
}
