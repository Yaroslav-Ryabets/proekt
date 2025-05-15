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
    void process_line(char buffer[]);

    char line[MAXLINE];
    fgets(line, MAXLINE, stdin); //считывает строку ограниченной длины и сохраняет ее в лайн. считывает строку, которую написали
    process_line(line); // обработка строки
    puts(line); // вывод результата

void process_line(char buffer[]) {
    char c; // текущий символ
    int flag; // признак слова
    int comma_flag; // флаг, обозначающий, что предыдущий символ был запятой
    int start; 
    int i; // нахождение текущего символа исходной строки
    int pos; // позиция текущего символа результирующей строки
    int j;

    // инициализация переменных
    flag = NO;
    comma_flag = NO;
    start = 0;
    i = 0;
    pos = 0;

    // цикл чтения символов из строки
    do {
        c = buffer[i]; // текущий символ

         if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') {
            // найден разделитель
            if (flag == YES) {
                // это первый разделитель после слова
                if (comma_flag == NO) {
                    // слово не после запятой - копируем его
                    for (j = start; j < i; j++) {
                        buffer[pos++] = buffer[j];
                    }
                } else {
                    // слово после запятой - не копируем
                    comma_flag = NO; // сбрасываем флаг запятой
                }
            }
            
            // копируем сам разделитель
            buffer[pos++] = c;
            
            // если текущий символ - запятая, устанавливаем флаг
            if (c == ',') {
                comma_flag = YES;
            }
            
            flag = NO;
        } else {
            // найдена буква
            if (flag == NO) {
                start = i; // запоминаем позицию начала слова
                flag = YES;
            }
        }
        
        i++;
    } while (c != '\0');
}

void lab_5() {
    int x[N];  // объявляем массив из 10 элементов
    int i;     // счётчик для циклов
    int is_arithmetic = 1;  // флаг, в котором 1 - прогрессия, 0 - нет. изначально считаем, что прогрессия есть
    int difference;         // переменная для хранения разности арифметической прогрессии

    printf("Введите %d целых чисел: ", N);
    for(i = 0; i < N; i++) { // цикл от 0 до N-1(последний элемент)
        scanf("%d", &x[i]);  // считываем iый элемент массива
    }

    difference = x[1] - x[0]; // вычисляем разность прогрессии (между первыми двумя элементами)

    // проверяем, сохраняется ли разность для всех элементов
    for(i = 2; i < N; i++) {
        if (x[i] - x[i-1] != difference) {
            is_arithmetic = 0;  // если разность нарушена - сбрасываем флаг
            break;              // преждевременный выход из цикла (досрочный)
        }
    }

    
    if (is_arithmetic) {
        printf("Массив является арифметической прогрессией с разностью %d.\n", difference);
    } else {
        printf("Массив НЕ является арифметической прогрессией.\n");
    }
}

void lab_6() {
int x[N][K];  // массив из N на K элементов
    int i, j; //i - строки, j - столбцы
    printf("Введите матрицу 3х4:\n");
    // ввод массива
    for (i = 0; i < N; i++) { 
        for (j = 0; j < K; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // поиск строк с минимальным и максимальным элементами
    int min_val = x[0][0];  // предполагаем, что минимум — первый элемент
    int max_val = x[0][0];  // предполагаем, что максимум — первый элемент
    int min_row = 0;        // номер строки с минимальным значением
    int max_row = 0;        // номер строки с максимальным значением

    for (i = 0; i < N; i++) { // в этой и след строке перебор строк и столбцов
        for (j = 0; j < K; j++) {
            if (x[i][j] < min_val) { // проверка на то, что проверяемый элемент менеьше нанешнего минимума. если да, то:
                min_val = x[i][j];
                min_row = i;
            }
            if (x[i][j] > max_val) { // аналогично предыдущему ...
                max_val = x[i][j];
                max_row = i;
            }
        }
    }

    // обмен строк
    if (min_row != max_row) { // проверка на то, что минимум и максимум не в одной строке, иначе программа пойдет к выводу, без изменений
        for (j = 0; j < K; j++) {
            int temp = x[min_row][j]; // сохраняем элемент из строки с минимумом во временную переменную
            x[min_row][j] = x[max_row][j]; // заменяем его элементом из строки с максимумом
            x[max_row][j] = temp; // восстанавливаем значение из временной переменной в строку с максимумом
        }
    }
    printf("Полученная матрица:\n");
    // вывод измененного массива 
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            printf("%4d ", x[i][j]);
        }
        printf("\n");
    }
}
