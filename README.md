# Ft_printf

## About the project
Ft_printf is part of the projects to be completed during the Milestone 1 of Common Core at 42 school. This project consists of reconding some parts of printf() function from libc.  
  
The function had to handle the following conversions:
  
| Specifier    | Description                                       |
|-------------|----------------------------------------------------|
| %c  | Prints a single character. |
| %s  | Prints a string. |
| %p  | Prints an adress. The void *p has to be printed in hexadecimal format. |
| %d  | Prints a decimal (base 10) number. |
| %i  | Prints an integer in base 10. |
| %u  | Prints an unsigned decimal (base 10) number. |
| %x  | Prints a number in hexadecimal (base 16) lowercase format. |
| %X  | Prints a number in hexadecimal (base 16) uppercase format. |
| %%  | Prints a percent sign. |

### Bonus Part
In the bonus part there were two points:
- Manage any combination of the flags '-0' and the field minimum width under all conversions;
- Manage '#' ' ' and '+' flags;
  
I did not complete any of those.

## Tools and insights

### Useful tools
- [Francinette](https://github.com/xicodomingues/francinette)
  - Thorough testing of printf
- [Ft_printf Guide](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
  - Great explanation of the concepts needed for this project and it has a pseudocode to guide you
- [Guide of resources](https://suspectedoceano.notion.site/printf-06cba643d653410bb03417532ca71c25)
    - Great library from various sources to help with the concepts of printf
- [Example of a printf](https://medium.com/@ahmed.ezzouine/1337-ft-printf-variadic-functions-110893c86d8c)
    - Some examples of functions that can be used in printf if you need extra help
- [Explanation of variadic functions](https://abdelhalimelbouaami.medium.com/unlocking-the-mystery-of-va-list-understanding-variable-arguments-in-c-a7b2323cf6d3)
   - Deeper explaining of how variadic functions work

### Before Delivering 
Make sure you know what your code is doing
- Have you checked norminette?
- Do you have any files in your folder that are not supposed to be there? Careful with .vscode, a.out, libft.a...
- (if you work from home) Have you checked if your headers have your intra user
- Are all your strings protected?
- Run my main to check is every output is equal to the original printf
- Do you know all the basic concepts that you need to explain your functions?
  - What is va_list, va_arg, va_start, va_end. What should you return when an error occurs.
- Make sure nothing is segfaulting, including your libft functions

## Important Message
  
DO NOT COPY OR CHEAT, YOU WILL NOT BE HELPING YOURSELF. USE THIS ONLY TO GET THE LOGIC.

## Completion

Not yet

