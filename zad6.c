#include <stdio.h>

    int main()
    
{
    int a;

    printf("wpisz rok:");
    scanf("%d", &a);

     if (a  % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
     {
    printf("rok jest przestepny\n"), a;
     }
     else
     {
    printf("rok nie jest przestepny\n", a);
     }

    return 0;
}
