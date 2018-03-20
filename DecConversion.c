#include<stdio.h>
void main ()
{
  int base, dec, i, rem, digit, p, count = 0;
  char a[100];
  scanf ("%d", &dec);
  scanf ("%d", &base);
  p = dec;
  do
    {
      rem = p % base;
      digit = '0' + rem;
      if (digit > '9')
      {
        digit = digit + 7;
      }
      a[count] = digit;
      count++;
      p = p / base;
    }
  while (p != 0);
  for (i = count - 1; i >= 0; --i)
  {
    printf ("%c", a[i]);
  }
}
