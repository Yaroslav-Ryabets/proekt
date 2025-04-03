#include <stdio.h>

#define YES 1 
#define NO 0 

int main()
{
 int c;
 int first_char;
 int prev_char;
 int current_char;
 int flag;
 int cnt;
 
 cnt = 0;
 flag = NO;
 first_char = ' ';
 prev_char = ' ';
  while ( ( c = getchar() ) !=EOF )
  {
      if (c == ' '  c == '\t'  c =='\n' || c ==',')
      {
           if (flag == YES)
           {
               if (first_char == current_char)
                 cnt = cnt + 1;
               
               flag = NO;
           }
      }
      else
      {
          if (flag == NO)   
          {
              first_char = c;
              flag = YES;
          }
           prev_char = current_char;
           current_char = c;
      }
  }
 if (flag==YES && first_char == current_char)
    cnt = cnt + 1;

 printf("Количество слов: %d\n", cnt);
 return 0;
}
