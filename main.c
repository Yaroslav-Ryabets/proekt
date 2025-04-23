#include "labs.h"

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
    //можно добавить дальше...
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
    //можно добавить дальше...
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
   default: printf("мы и так выполняем задание к этой работе\n");
   }
   break;

  case 4: //при добавлении дальнейших лаб использовать шаблон case 1
   lab_4();
   break;
  case 5: //при добавлении дальнейших лаб использовать шаблон case 1
   lab_5();
   break;
  case 6: //при добавлении дальнейших лаб использовать шаблон case 1
   lab_6();
   break;
  default:
   printf("таких работ ещё нет, ожидайте обновления\n\n");
  }
 }

 return 0;

}
