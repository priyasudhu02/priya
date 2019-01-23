#include <stfio.h>
#include <conio.h>
void main ()
{
char c;
clrscr ();
scanf ("%c",&c);
if ((c>='a'&&c <='z')||(c>='A'&&c <='Z'))
{
printf("alphabet");
}
else {
printf ("not");
}getch();
}
