int printf(char *s, ...);

int set_var(int *foo)
{
    *foo = 20;
}

int main()
{
    int a, b;
    set_var(&a);
    set_var(&b);
    printf("%d %d\n", a, b);
}