/* 
Дектярев Михаил Павлович
П.И. 1-1
Составные условия и оператор switch
*/
#include <stdio.h>

int main(void) {
	double a, b, result;
	int command;
	
	printf("Введите два числа: ");
	scanf("%lf %lf", &a, &b);
	if (b == 0)
	{
	    printf("Хотите посчитать корень первого числа? (1 - да, 0 - нет)\n");
	    scanf("%d", &command);
	    if (command == 1)
	    {
	        if (a >= 0) 
	        {
	            result = sqrt(a);
	            printf("Результат: %.2f\n", result);
	            return 0;
	        }
	        else
	        {
	            printf("Ошибка: Невозможно взять корень из отрицательного числа (или 0)");
	        }
	    }
	}
	else
	{
    	printf("1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\nКорень числа - (первого числа, второе число должно быть 0)\n");
    	printf("Выберите операцию: ");
    	scanf("%d", &command);
    	
    	switch(command)
    	{
    	 case 1:
    	    result = a+b;
    	    printf("Результат: %.2f\n", result);
    	    break;
    	 case 2:
    	    result = a-b;
    	    printf("Результат: %.2f\n", result);
    	    break;
    	 case 3:
    	    result = a*b;
    	    printf("Результат: %.2f\n", result);
    	    break;
    	 case 4:
    	    if (b != 0)
    	    {
        	    result = a/b;
        	    printf("Результат: %.2f\n", result);
    	    }
    	    else
    	    {
    	        printf("Ошибка: деление на ноль.\n");
    	    }
    	    break;
    	 default:
    	 printf("Ошибка: неизвестная операция.\n");
    	 break;
    	}
	}
	return 0;

}