
// printf("%chola", 'h')

/*
c -caracter
s-string
i-entero
d-entero
x-hexa
X-HEXA
p-Direccion ptr
*/
ft_formats(char s, int i)
{
    if(s[i] == 'c')
        putchar(va_arg(formats, int));
    if(s)
        putstr
    if(i)
        putnbr    
}


int ft_printf(const char *s, ...)
{
    va_list  formats;
    int i;
    int nbc;

    va_start(formats, s);
    i = 0;
    while(s[i])
    {
        if(s[i] == %)
        {
            i++;
            ft_formats(s)
        }
        else
            putstr(s);

    i++; 
    }
    va_end(formats);
    return(nbc);
}