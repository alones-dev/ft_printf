# **🎉 ft_printf**

Welcome to **ft_printf**! 🎉  
This project is all about creating a **homemade version** of the famous `printf()` function in C. It’s an awesome challenge where we get to reinvent the wheel and build our own custom `ft_printf()` function with the same functionality as the original!

## 🎯 **Project Overview**

**ft_printf** mimics the standard `printf()` function that you’re probably already familiar with, but with a twist—it’s 100% homemade!  
By implementing it from scratch, you’ll gain a deeper understanding of how formatted output works and how to handle variadic functions in C.

## 💥 Supported Format Specifiers

Here’s a list of the format specifiers that **ft_printf** supports:

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

## 🛠️ Usage
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
    ft_printf("Hello %s\n", "World!");
    return (0);
}
```

