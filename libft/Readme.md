Libft Your very first own library
III.2 Part 1 - Libc functions
To begin, you must redo a set of functions from the libc. Your functions will have the
same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.
Some of the functions’ prototypes you have to redo use the ’restrict’
qualifier. This keyword is part of the c99 standard. It is
therefore forbidden to include it in your own prototypes and to
compile your code with the -std=c99 flag.
You must write your own function implementing the following original ones. They do
not require any external functions:

• ~~isalpha~~
• ~~isdigit~~
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi