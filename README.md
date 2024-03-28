# ft_printf
Remake of ```printf()``` function in C for 42School.

The same utilisation but is home-made and the prototype is ```ft_printf()```.

## Usage
**1. Clone the repository**
```
git clone https://github.com/alones-dev/ft_printf.git
```
**2. Compile the project**
```
make
```
**3. Enjoy**
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s\n, "World!");
    return (0);
}
```

## Format list
```
%c print a single character.
%s print a string of characters.
%p The void * pointer argument is printed in hexadecimal.
%d print a decimal (base 10) number.
%i print an integer in base 10.
%u print an unsigned decimal (base 10) number.
%x print a number in hexadecimal (base 16), with lowercase.
%X print a number in hexadecimal (base 16), with uppercase.
%% print a percent sign.
```
