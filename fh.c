#include<stdio.h>
int main()
{
      int i,pos,ch;
      FILE *fp,*fq;
      fp=fopen("source.txt","r");
      fq=fopen("backup.txt","w");   
      if(fp==NULL||fq==NULL)
            printf("File does not exist..");
      else
            while((ch=fgetc(fp))!=EOF)
            {
                  fputc(ch,fq);
            }
      printf("File copied.....");
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      //printf("Current postion is %d\n",pos);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}
