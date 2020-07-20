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

printf("%u",sum(ntohl(a[0]),ntohl(b[0])));



fclose(fp1);
fclose(fp2);

}
