#include <stdio.h>
int main ()
{
    int a = 4;
    int b = 8;
    int c = 3;
    int x = (a==b);
    int y = (b>c);
    int z = (a!=c);

printf("Variabel a bernilai %d\n", a);
printf("Variabel b bernilai %d\n", b);
printf("Variabel a bernilai %d\n", c);
printf("Apakah a sama dengan b ? jawabannya adalah %d\n", x);
printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", y);
printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", z);
return 0;
}