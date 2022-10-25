void print_array(int *a, int n)

{
int i;
i = 0;
while (i < n)
{
printf("%p", a[i]);
if (i < (n - 1))
{
printf(", ");
}
i++;
}
printf("\n");
}
