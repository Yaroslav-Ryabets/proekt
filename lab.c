#include "labs.h"

void lab_1() {

    float P, A, B, C;
    
    printf("A=");
    scanf("%f",&A);
    
        
    printf("B=");
    scanf("%f",&B);
    
    
        
    printf("C=");
    scanf("%f",&C);

    P=(A+B*B)/(C-A);
     
    printf("P=%.2f", P);
}


void lab_1_1() {
    float square (float number)
    { return number*number; }

    float P,A,B,C;
    
    printf("A=");
    scanf("%f",&A);
    
    printf("B=");
    scanf("%f",&B);
    
    printf("C=");
    scanf("%f",&C);

    P=(A+square(B))/(C-A);
    
    printf("P=%.2f", P);
   }

void lab_2() {

    float e;
    printf("Введите значение e : ");
    scanf("%f", &e);
    float a;
    float b;
    float c;
    float s;
    int i;
    float sign;
    
    s = 0;
    sign = 1;
    i = 1;
    a = 3;
    b = 1; 
    c = a / b;

while(c > e) {
    s = s + c*sign;
    sign = -sign;
    a = a + 1;
    b = b + 3;
    c = a / b;
    i = i + 1;
}
    printf(" n = %d, s = %f\n", i, s);
}

void lab_2_1() {


    float e;
    printf("Введите значение e: ");
    scanf("%f", &e);
    
    float a = 3;
    float b = 1;  
    float c;      
    float s = 0;  
    int i;        
    float sign = 1;  
    
    for (i = 1; i <= max_iterations ; i++) { 
        c = a / b;  
        
        if (c <= e) {  // Проверка условия выхода
            break;  // Выход из цикла, если элемент меньше или равен e
        }
        
        s += c * sign;  // Добавление элемента к сумме
        sign = -sign;   
        a += 1;         
        b += 3;         
    }
    
    printf("n = %d, s = %f\n", i, s);
}

void lab_3() {
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
       if (c == ' ' || c == '\t' || c == '\n' || c == ',')
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
}


void lab_4() {
    printf("...");
}

void lab_5() {
    printf("...");
}

void lab_6() {
    printf("...");
}
