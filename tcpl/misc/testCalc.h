int testCalc(int a, int b)
{
int i, p;
p = 1;
 for (i = 1; i <= b; ++i)
 {
   p = p *a;
   printf("p = %d\n", p);
 }
 return p;
}
