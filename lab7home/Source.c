#include <stdio.h>
#include <locale.h>
//Контрольные примеры:
//n=1 ---> Это нота До
//n=-5 ---> Ошибка!!!!( номер должен быть от 1 до 7)
//n = 4 ---> Это нота Фа
int main()
{
    setlocale(LC_CTYPE, "UTF-8");
    int n;
    puts("Введите номер ноты:");
    scanf("%d", &n);

    switch (n) 
    {
    case 1:
        puts("Это нота До");
        break;
    case 2:
        puts("Это нота Ре");
        break;
    case 3:
        puts("Это нота Ми");
        break;
    case 4:
        puts("Это нота Фа");
        break;
    case 5:
        puts("Это нота Соль");
        break;
    case 6:
        puts("Это нота Ля");
        break;
    case 7:
        puts("Это нота Си");
        break;
    default:
        puts("Ошибка!!!!( номер должен быть от 1 до 7)");
        break;
    }

  ;
}