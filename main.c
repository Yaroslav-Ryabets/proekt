#include "lab.h"

int main() {

 int choice = 0;
 int choice_dopzadanie = 0;

 while (choice != 10) {

  printf("Введите номер лабораторной (№10 - выход из программы)\n");
  scanf("%d", &choice);

  switch (choice) {

  case 1:
   printf("Выберите задание из лабораторной №%d\n(0 - сама лаба, 1 и тд. - доп задания)\n", choice);
   scanf("%d", &choice_dopzadanie);
   switch (choice_dopzadanie) {
   case 0:
    printf("Выполнение лабораторной №%d\n", choice);
    lab_1();
    break;
   case 1:
    printf("Выполнение лабораторной №%d, задание №%d\n", choice, choice_dopzadanie);
    lab_1_1();
    break;
   }
   break;

  case 2:
   printf("Выберите задание из лабораторной №%d\n(0 - сама лаба, 1 и тд. - доп задания)\n", choice);
   scanf("%d", &choice_dopzadanie);
   switch (choice_dopzadanie) {
   case 0:
    printf("Выполнение лабораторной №%d\n", choice);
    lab_2();
    break;
   case 1:
    printf("Выполнение лабораторной №%d, задание №%d\n", choice, choice_dopzadanie);
    lab_2_1();
    break;
   }
   break;

  case 3:
   printf("Выберите задание из лабораторной №%d\n(0 - сама лаба, 1 и тд. - доп задания)\n", choice);
   scanf("%d", &choice_dopzadanie);
   switch (choice_dopzadanie) {
   case 0:
    printf("Выполнение лабораторной №%d\n", choice);
    lab_3();
    break;
   default: printf("Создать проект\n");
   }
   break;

  case 4: 
   printf("Выберите задание из лабораторной №%d\n(0 - сама лаба, 1 и тд. - доп задания)\n", choice);
   scanf("%d", &choice_dopzadanie);
   switch (choice_dopzadanie) {
   case 0:
    printf("Выполнение лабораторной №%d\n", choice);
    lab_4();
    break;
    printf("Выполнение лабораторной №%d, задание №%d\n", choice, choice_dopzadanie);
    break;
   default: printf("Зарегестрироваться на Github\n");
   }
   break;
  case 5: 
   printf("Выберите задание из лабораторной №%d\n(0 - сама лаба, 1 и тд. - доп задания)\n", choice);
   scanf("%d", &choice_dopzadanie);
   switch (choice_dopzadanie) {
   case 0:
    printf("Выполнение лабораторной №%d\n", choice);
    lab_5();
    break;
   case 1:
    printf("Выполнение лабораторной №%d, задание №%d\n", choice, choice_dopzadanie);
    lab_5_1();
    break;
   }
   break;
  case 6: 
   printf("Выберите задание из лабораторной №%d\n(0 - сама лаба, 1 и тд. - доп задания)\n", choice);
   scanf("%d", &choice_dopzadanie);
   switch (choice_dopzadanie) {
   case 0:
    printf("Выполнение лабораторной №%d\n", choice);
    lab_6();
    break;
   case 1:
    printf("Выполнение лабораторной №%d, задание №%d\n", choice, choice_dopzadanie);
    lab_6_1();
    break;
   }
   break;
  }
 }
 return 0;
}
