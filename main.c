#include <stdio.h>
#include <netinet/in.h>
#include "sum.h"

int main(int argc,char*argv[]){

FILE *fp1,*fp2;

if((fp1=fopen(argv[1],"r"))==NULL){
printf("file name error\n");
return 0;}

if((fp2=fopen(argv[2],"r"))==NULL){
printf("file name error\n");
return 0;}


uint32_t a[2],b[2];
fread(a,4,1,fp1);
fread(b,4,1,fp2);

uint32_t an=ntohl(a[0]);
uint32_t bn=ntohl(b[0]);

printf("%u(%x) + %u(%x) = %u\n",an,an,bn,bn,sum(an,bn));



fclose(fp1);
fclose(fp2);

return 0;
}
