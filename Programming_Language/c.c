// This is a cheatsheet that's all you need to Code in C
// look for proper Documentation/Reference for the standard libraries

// Comments
// by TheSR  (single line Comment)
/*
 * Includes All the syntax and keywords you need to know about C (multiline Comment)
 *
 */

// About
    /*
    A C program basically consists of the following parts: 
        Preprocessor Commands
        Functions 
        Variables 
        Statements & Expressions
        Comments

    C Compilation Process:
        Preprocessing
        Compiling
        Assembling
        Linking
    */

// Tokens (the smallest unit in the source code)
    /*
    Character Set
    Keyword tokens
    Literal tokens
    Identifier tokens
    Operator tokens
    Special symbol tokens
    */

// Character Set (A sequence of any of these characters inside a pair of double quote symbols " and " are used to represent a string literal)
    /*
    Uppercase: A to Z
    Lowercase: a to z
    Digits: 0 to 9
    Special characters: ! " # $ % & ' ( ) * + - . : , ; ` ~ = < > { } [ ] ^ _ \ /
    */

// Keyword tokens (any of of these keyword can be a keyword token)
    /*
    C Keywords
        |----------|--------|----------|----------|
        | auto	   | double	| int	   | struct   |
        |----------|--------|----------|----------|
        | break	   | else	| long	   | switch   |
        |----------|--------|----------|----------|
        | case	   | enum	| register | typedef  |
        |----------|--------|----------|----------|
        | char	   | extern | return   | union    |
        |----------|--------|----------|----------|
        | continue | for	| signed   | void     |
        |----------|--------|----------|----------|
        | do	   | if	    | static   | while    |
        |----------|--------|----------|----------|
        | default  | goto	| sizeof   | volatile |
        |----------|--------|----------|----------|
        | const	   | float	| short	   | unsigned |
        |----------|--------|----------|----------|

    Primary Types Keywords
        |----------|--------------------------------------|
        | int	   | Declares an integer variable         |
        |----------|--------------------------------------|
        | long 	   | Declares a long integer variable     |
        |----------|--------------------------------------|
        | short	   | Declares a short integer variable    |
        |----------|--------------------------------------|
        | signed   | Declares a signed variable           |
        |----------|--------------------------------------|
        | double   | Declares a double-precision variable |
        |----------|--------------------------------------|
        | char	   | Declares a character variable        |
        |----------|--------------------------------------|
        | float	   | Declares a floating-point variable   |
        |----------|--------------------------------------|
        | unsigned | Declares an unsigned variable        |
        |----------|--------------------------------------|
        | void	   | Specifies a void return type         |
        |----------|--------------------------------------|

    User-defined Types Keywords
        |---------|------------------------------|
        | struct  |	Declares a structure type    |
        |---------|------------------------------|
        | typedef |	Creates a new data type      |
        |---------|------------------------------|
        | union	  | Declares a union type        |
        |---------|------------------------------|
        | enum	  | Declares an enumeration type |
        |---------|------------------------------|

    Storage Types Keywords
        |----------|------------------------------------| 
        | auto	   |  Specifies automatic storage class |
        |----------|------------------------------------|
        | extern   |  Declares a variable or function   |
        |----------|------------------------------------|
        | static   |  Specifies static storage class    |
        |----------|------------------------------------|
        | register |  Specifies register storage class  |
        |----------|------------------------------------|

    Conditionals Keywords 
        |---------|------------------------------------------|
        | goto	  |  Jumps to a labeled statement            |
        |---------|------------------------------------------|
        | if	  |  Starts an if statement                  |
        |---------|------------------------------------------|
        | else	  |  Executes when the if condition is false |
        |---------|------------------------------------------|
        | case	  |  Labels a statement within a switch      |
        |---------|------------------------------------------|
        | switch  |	 Starts a switch statement               |
        |---------|------------------------------------------|
        | default |	 Specifies default statement in switch   |
        |---------|------------------------------------------|

    Loops and Loop Control Keywords
        |----------|---------------------------------------|
        | For	   | Starts a for-loop                     |
        |----------|---------------------------------------|
        | do	   | Starts a do-while loop                |
        |----------|---------------------------------------|
        | while	   | starts a while loop                   |
        |----------|---------------------------------------|
        | continue | Skips an iteration of a loop          |
        |----------|---------------------------------------|
        | break	   | Terminates a loop or switch statement |
        |----------|---------------------------------------|

    Other Keywords
        |----------|-----------------------------------------------------------------------|
        | const	   |  Specifies a constant value                                           |
        |----------|-----------------------------------------------------------------------|
        | Sizeof   |  Determines the size of a data type                                   |
        |----------|-----------------------------------------------------------------------|
        | Volatile |  Tells compiler that the value of the variable may change at any time |
        |----------|-----------------------------------------------------------------------|

    In C99 version, five more keywords were added 
        |------------|----------------------------------------------------------------------------------------------------------------------------------|
        | _Bool      |  Boolean type representing true (1) or false (0)                                                                                 |
        |------------|----------------------------------------------------------------------------------------------------------------------------------|
        | _Complex   |  Complex number type consisting of a real and an imaginary part                                                                  |
        |------------|----------------------------------------------------------------------------------------------------------------------------------|
        | _Imaginary |  Type specifier for imaginary floating-point numbers                                                                             |
        |------------|----------------------------------------------------------------------------------------------------------------------------------|
        | inline     |  Suggests to the compiler that the function code should be inserted at the call site to improve performance                      |
        |------------|----------------------------------------------------------------------------------------------------------------------------------|
        | restrict   |  A type qualifier indicating that a pointer is the only reference to the object it points to, allowing for certain optimizations |
        |------------|----------------------------------------------------------------------------------------------------------------------------------|

    In C11, seven more keywords have been added
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Alignas       |  Specifies the alignment of a variable or structure member                                                       |
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Alignof       |  Returns the alignment requirement of a type                                                                     |
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Atomic        |  Specifies that an object is atomic, meaning it can be accessed and modified atomically                          |
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Generic       |  Provides generic programming capabilities by selecting an expression based on type                              |
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Noreturn      |  Indicates that a function does not return to the caller                                                         |
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Static_assert |  Performs compile-time assertions                                                                                |
        |----------------|------------------------------------------------------------------------------------------------------------------|
        | _Thread_local  |  Specifies that a variable has thread storage duration, meaning each thread has its own instance of the variable |
        |----------------|------------------------------------------------------------------------------------------------------------------|

    When the C23 standard will be released it will introduce 15 more keywords −
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | alignas       |   Same as _Alignas, specifies alignment for variables or structure members                                  |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | alignof       |   Same as _Alignof, returns the alignment requirement of a type                                             |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | bool          |   Boolean type, representing true or false (commonly associated with _Bool in C99)                          |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | constexpr     |   Used to declare that the value of a variable or function is constant and can be evaluated at compile time |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | false         |   Represents the boolean value false (commonly associated with _Bool in C99)                                |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | nullptr       |   Represents a null pointer constant, similar to NULL but specifically typed                                |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | static_assert |   Same as _Static_assert, performs compile-time assertions                                                  |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | thread_local  |   Same as _Thread_local, specifies that a variable has thread storage duration                              |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | true          |   Represents the boolean value true (commonly associated with _Bool in C99)                                 |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | typeof        |   Returns the type of an expression (non-standard, often used as an extension in compilers like GCC)        |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | typeof_unqual |   Similar to typeof, but returns the unqualified type of an expression                                      |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | _BitInt       |   Specifies an integer type with a specified number of bits                                                 |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | _Decimal128   |   Represents a decimal floating-point type with 128-bit precision                                           |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | _Decimal64    |   Represents a decimal floating-point type with 64-bit precision                                            |
        |---------------|-------------------------------------------------------------------------------------------------------------|
        | _Decimal32    |   Represents a decimal floating-point type with 32-bit precision                                            |
        |---------------|-------------------------------------------------------------------------------------------------------------|
    Examples:
    Primary Types Keywords:
        int:
            int a = 10; // Declares an integer variable, 4 bytes.

        long:
            long b = 100000L; // Declares a long integer, 8 bytes.

        short:
            short c = 5; // Declares a short integer, 2 bytes.

        signed:
            signed int d = -100; // Declares a signed integer, allowing negative values.

        double:
            double e = 10.5; // Declares a double-precision floating-point variable, 8 bytes.

        char:
            char f = 'A'; // Declares a character variable, 1 byte.

        float:
            float g = 3.14f; // Declares a single-precision floating-point variable, 4 bytes.

        unsigned:
            unsigned int h = 255U; // Declares an unsigned integer, only positive values.

        void:
            void function() {
                // No return value, used for functions not returning data.
            }
        type name1, name2 = x, ...; // Multiple declarations in one line are also valid.

    User-defined Types Keywords:
        struct:
            struct Person {
                char name[50];
                int age;
            }; // Defines a structure type with multiple data types.

        typedef:
            typedef unsigned long ul;
            ul myVar = 10UL; // Creates a new name for an existing data type.

        union:
            union Data {
                int i;
                float f;
                char str[20];
            }; // Defines a union, where all members share the same memory location.

        enum:
            enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
            enum Weekday today = Wednesday; // Defines an enumeration, representing a set of named integer constants.

    Storage Types Keywords:
        auto:
            auto int a = 10; // Declares an automatic variable, default storage class for local variables.

        extern:
            extern int globalVar;
            void function() {
                extern int globalVar;
                globalVar = 5; // Declares a variable defined elsewhere, often in another file.
            }

        static:
            static int counter = 0; // Retains its value between function calls, scope limited to the file.

        register:
            register int i = 0; // Suggests that the variable be stored in a CPU register for faster access.

    Conditionals Keywords:
        goto:
            goto label;
            label: printf("Jumped to label\n"); // Unconditionally jumps to a labeled statement.

        if:
            if (a > 5) {
                printf("a is greater than 5\n");
            }
            if (x == 0)
                printf("X is zero"); // {} not needed if a single statement follows.

        else:
            if (a > 5) {
                printf("a is greater than 5\n");
            } else {
                printf("a is not greater than 5\n");
            } // Executes an alternative block of code if the condition is false.

        switch: case: default:
            switch (day) { // Labels a branch within a switch statement. (day is enum type)
                case Sunday: printf("It's Sunday\n"); break; // Tests a variable against multiple cases.
                case Monday: printf("It's Monday\n"); break; // breaks if match is found so it doesn't check for other cases
                default: printf("Other day\n"); break; // Specifies the default branch in a switch statement.
            } 

    Loops and Loop Control Keywords:
        for:
            for (int i = 0; i < 10; i++) {
                printf("%d\n", i);
            } // Iterates over a block of code multiple times.

        do:
            do {
                printf("This will run at least once\n");
            } while (0); // Executes a block of code at least once, then repeats based on the condition.

        while:
            while (a < 10) {
                printf("%d\n", a);
                a++;
            } // Repeats a block of code as long as the condition is true.

        continue:
            for (int i = 0; i < 10; i++) {
                if (i % 2 == 0) continue;
                printf("%d\n", i);
            } // Skips the current iteration and continues with the next one.

        break:
            for (int i = 0; i < 10; i++) {
                if (i == 5) break;
                printf("%d\n", i);
            } // Exits the loop or switch statement immediately.

    Other Keywords:
        const:
            const int maxVal = 100; // Declares a constant variable, value cannot be changed after initialization.

        sizeof:
            printf("Size of int: %zu bytes\n", sizeof(int)); // Returns the size of a data type or variable in bytes.

        volatile:
            volatile int flag = 1; // Tells the compiler that the variable may change at any time, often used with hardware registers.
    Keywords introduced in C99:
        _Bool:
            _Bool flag = 1; // Boolean type representing true (1) or false (0). Similar to 'bool' in C++.

        _Complex:
            _Complex double z = 1.0 + 2.0i; // Complex number type consisting of a real and an imaginary part.

        _Imaginary:
            _Imaginary double im = 2.0i; // Type specifier for imaginary floating-point numbers, part of complex arithmetic.

        inline:
            inline int add(int a, int b) {
                return a + b;
            } // Suggests to the compiler that the function code should be inserted at the call site to improve performance.

        restrict:
            void process(int *restrict arr) {
                // A type qualifier indicating that a pointer is the only reference to the object it points to, 
                // allowing for certain optimizations.
            }

    Keywords introduced in C11:
        _Alignas:
            _Alignas(16) int aligned_var; // Specifies the alignment of a variable or structure member.

        _Alignof:
            size_t alignment = _Alignof(double); // Returns the alignment requirement of a type.

        _Atomic:
            _Atomic int atomic_var; // Specifies that an object is atomic, meaning it can be accessed and modified atomically.

        _Generic:
            #define type_name(x) _Generic((x), \
                int: "int", \
                float: "float", \
                double: "double", \
                default: "other") // Provides generic programming capabilities by selecting an expression based on type.

        _Noreturn:
            _Noreturn void terminate() {
                exit(1);
            } // Indicates that a function does not return to the caller.

        _Static_assert:
            _Static_assert(sizeof(int) == 4, "Integers must be 4 bytes"); // Performs compile-time assertions.

        _Thread_local:
            _Thread_local int thread_var; // Specifies that a variable has thread storage duration, each thread has its own instance.

    Keywords introduced in C23:
        alignas:
            alignas(8) int another_aligned_var; // Same as _Alignas, specifies alignment for variables or structure members.

        alignof:
            size_t another_alignment = alignof(long); // Same as _Alignof, returns the alignment requirement of a type.

        bool:
            bool flag2 = true; // Boolean type, representing true or false (commonly associated with _Bool in C99).

        constexpr:
            constexpr int compile_time_constant = 42; // Declares that the value of a variable or function is constant and can be evaluated at compile time.

        false:
            bool is_false = false; // Represents the boolean value false (commonly associated with _Bool in C99).

        nullptr:
            int *ptr = nullptr; // Represents a null pointer constant, similar to NULL but specifically typed.

        static_assert:
            static_assert(sizeof(char) == 1, "Char size must be 1 byte"); // Same as _Static_assert, performs compile-time assertions.

        thread_local:
            thread_local int another_thread_var; // Same as _Thread_local, specifies that a variable has thread storage duration.

        true:
            bool is_true = true; // Represents the boolean value true (commonly associated with _Bool in C99).

        typeof:
            typeof(42) x = 42; // Returns the type of an expression (non-standard, often used as an extension in compilers like GCC).

        typeof_unqual:
            typeof_unqual(const int) y = 0; // Similar to typeof, but returns the unqualified type of an expression.

        _BitInt:
            _BitInt(32) small_int; // Specifies an integer type with a specified number of bits.

        _Decimal128:
            _Decimal128 decimal_val_128; // Represents a decimal floating-point type with 128-bit precision.

        _Decimal64:
            _Decimal64 decimal_val_64; // Represents a decimal floating-point type with 64-bit precision.

        _Decimal32:
            _Decimal32 decimal_val_32; // Represents a decimal floating-point type with 32-bit precision.
    */

// Literal tokens (any textual representation of a value to be assigned to a variable)
    /*
    Integer literals (decimal, octal, binary or hexadecimal constant)
        |----------|-------------|---------|------------|
        | prefix   | Base        | Range   | Example    |
        |----------|-------------|---------|------------|
        | 0x or 0X | hexadecimal | 0 to F  | 0x10       |
        |----------|-------------|---------|------------|
        | 0        | octal       | 0 to 7  | 020        |
        |----------|-------------|---------|------------|
        | 0b       | binary      | 0 or 1  | 0b00010000 |
        |----------|-------------|---------|------------|
        | nothing  | decimal     | 0 to 10 | 16         |
        |----------|-------------|---------|------------|

        |--------------------------|--------------------|---------|
        | suffix                   | type               | Example |
        |--------------------------|--------------------|---------|
        | u or U                   | unsigned           | 5u      |
        |--------------------------|--------------------|---------|
        | l or L                   | long               | 5l      |
        |--------------------------|--------------------|---------|
        | ll or LL                 | long long          | 5ll     |
        |--------------------------|--------------------|---------|
        | ull or ULL or llu ot LLU | unsigned long long | 5ull    |
        |--------------------------|--------------------|---------|

    Floating-point Literals ( integer part, a decimal point, a fractional part and exponent part)
        must include the decimal point, the exponent part or both (.6 or .6e2 or 5.6e-2)
        while  representing using exponential form, you must include the integer part, the fractional part, or both. 
        sufix
        f or F (optional)
        The signed exponent is introduced by e or E and - is used too
        Example
            .6 or .6E2 or .6e-2 or .6e+2
            5.6 or 5.6E2 or 5.6e-2 or 5.6e+2
            5.6E9f

    Character Literals (any character from the Character Set inside a ' ' is called Chracter Literal)
        ' ', 'X'

    Escape Sequences (\ + something which has alternate meaning attached to the following characters)
       |------------|------------------------------------------------------------------------------------|
       | sequence   | description                                                                        |
       |------------|------------------------------------------------------------------------------------|
       | \a	        | Alert (Beep, Bell) (added in C89)                                                  |
       |------------|------------------------------------------------------------------------------------|
       | \b	        | Backspace                                                                          |
       |------------|------------------------------------------------------------------------------------|
       | \e	        | Escape character                                                                   |
       |------------|------------------------------------------------------------------------------------|
       | \f	        | Formfeed Page Break                                                                |
       |------------|------------------------------------------------------------------------------------|
       | \n	        | Newline                                                                            |
       |------------|------------------------------------------------------------------------------------|
       | \r	        | Carriage Return                                                                    |
       |------------|------------------------------------------------------------------------------------|
       | \t	        | Horizontal Tab                                                                     |
       |------------|------------------------------------------------------------------------------------|
       | \v	        | Vertical Tab                                                                       |
       |------------|------------------------------------------------------------------------------------|
       | \0	        | NULL                                                                               |
       |------------|------------------------------------------------------------------------------------|
       | \\	        | Backslash                                                                          |
       |------------|------------------------------------------------------------------------------------|
       | \'	        | Apostrophe or single quotation mark                                                |
       |------------|------------------------------------------------------------------------------------|
       | \"	        | Double quotation mark                                                              |
       |------------|------------------------------------------------------------------------------------|
       | \?	        | Question mark (used to avoid trigraphs)                                            |
       |------------|------------------------------------------------------------------------------------|
       | \nnn       | The byte whose numerical value is given by nnn interpreted as an octal number      |
       |------------|------------------------------------------------------------------------------------|
       | \xhh…      | The byte whose numerical value is given by hh… interpreted as a hexadecimal number |
       |------------|------------------------------------------------------------------------------------|
       | \uhhhh     | Unicode code point below 10000 hexadecimal (added in C99)                          |
       |------------|------------------------------------------------------------------------------------|
       | \Uhhhhhhhh	| Unicode code point where h is a hexadecimal digit                                  |
       |------------|------------------------------------------------------------------------------------|

    String Literals (A sequence of characters put inside double quotation)                               
        anything from the Chracter Set put inside a " " will be called String Literals
        "Hello world" 
        Format Specifier  
            %[flags][.precision][length]specifier (prototype)
			|-----------|-----------------------------------------------------------------|
            | specifier | Output												      	  |
			|-----------|-----------------------------------------------------------------|
            |     d	    | Signed decimal integer								     	  |
			|-----------|-----------------------------------------------------------------|
            |     i     | Signed decimal integer (%i detecs the base while used in scanf) |
			|-----------|-----------------------------------------------------------------|
            |     u	    | Unsigned decimal integer							     		  |
			|-----------|-----------------------------------------------------------------|
            |     o	    | Unsigned octal											   	  |
			|-----------|-----------------------------------------------------------------|
            |     x	    | Unsigned hexadecimal integer								      |
			|-----------|-----------------------------------------------------------------|
            |     X	    | Unsigned hexadecimal integer (uppercase)						  |
			|-----------|-----------------------------------------------------------------|
            |     f	    | Decimal floating point, lowercase								  |
			|-----------|-----------------------------------------------------------------|
            |     F	    | Decimal floating point, uppercase								  |
			|-----------|-----------------------------------------------------------------|
            |     e	    | Scientific notation (mantissa/exponent), lowercase			  |
			|-----------|-----------------------------------------------------------------|
            |     E	    | Scientific notation (mantissa/exponent), uppercase			  |
			|-----------|-----------------------------------------------------------------|
            |     g	    | Use the shortest representation: %e or %f						  |
			|-----------|-----------------------------------------------------------------|
            |     G	    | Use the shortest representation: %E or %F						  |
			|-----------|-----------------------------------------------------------------|
            |     a     | Hexadecimal floating point, lowercase							  |
			|-----------|-----------------------------------------------------------------|
            |     A	    | Hexadecimal floating point, uppercase							  |
			|-----------|-----------------------------------------------------------------|
            |     c	    | Character														  |
			|-----------|-----------------------------------------------------------------|
            |     s	    | String of characters											  |
			|-----------|-----------------------------------------------------------------|
            |     p	    | Pointer address												  |
			|-----------|-----------------------------------------------------------------|
            |     n	    | Nothing printed												  |
			|-----------|-----------------------------------------------------------------|
            |     %	    | will write a single % to the stream	  						  |
            |-----------|-----------------------------------------------------------------|  

			|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | flags | description																																																																							      |
			|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | -	    | Left-justify within the given field width; Right justification is the default (see width sub-specifier).																																																	  |
			|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | +	    | Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.																																					  |
			|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            |(space)| If no sign is going to be written, a blank space is inserted before the value.																																																							  |
			|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | #	    | Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero. Used with a, A, e, E, f, F, g or G it forces the written output to contain a decimal point even if no more digits follow. By default, if no digits follow, no decimal point is written. |
			|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | 0	    | Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).           																																													  |
            |-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            
			|-------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | .precision  |	 description																																																																																																																																																																																															  |
			|-------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
            | .number	  |  For integer specifiers (d, i, o, u, x, X): precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. For a, A, e, E, f and F specifiers: this is the number of digits to be printed after the decimal point (by default, this is 6). For g and G specifiers: This is the maximum number of significant digits to be printed. For s: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. If the period is specified without an explicit value for precision, 0 is assumed. |
			|-------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|

            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            | length  |     d i	      | u o x X	              |f F e E g G a A|   c	   |     s	  | p	 | n              |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            | (none)  | int           | unsigned int          |    double     |  int   | char*	  | void*| int*           |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   hh	  | signed char   | unsigned char		  |		          |        |          |      | signed char*   |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   h	  | short int     | unsigned short int	  |			      |        |          |      | short int*     |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   l	  | long int      | unsigned long int	  |               | wint_t | wchar_t* |	     | long int*      |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   ll	  | long long int | unsigned long long int|				  |	       |          |      | long long int* |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   j	  | intmax_t	  | uintmax_t			  |	              |        |          |      | intmax_t*      |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   z	  | size_t	      | size_t				  |	              |        |          |      | size_t*        |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   t	  | ptrdiff_t	  | ptrdiff_t			  |	              |        |          |      | ptrdiff_t*     |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
            |   L	  |	              |                       |  long double  |		   |          |	     |                |
            |---------|---------------|-----------------------|---------------|--------|----------|------|----------------|
    */
// Identifier tokens (names given to variables, functions, constants and other user-defined items)
    /*
    Naming Rules
        1. Keywords can't be used as identifiers as they are predefined.
        2. Out of the character set that C uses, only the alphabets (upper and lowercase) and the underscore symbol (_) are allowed in the identifier. It implies that you can't use characters like the punctuation symbols etc. as a part of the identifier.
        3. The identifier must start either with an alphabet (upper or lowercase) or an underscore. It means, a digit cannot be the first character of the identifier. The subsequent characters may be alphabets or digits or an underscore.
        4. Same identifier can't be used as a name of two entities. An identifier can be used only once in the current scope.
        Example:
            int marks; (variable)
            void sum(); (function)
            #define PI 3.14 (constant)
            struct Bool{      (user-defined items)
                int True;
                int False;
            };
    Scope of Identifiers
        If an identifier has been declared outside before the declaration of any function, it is called as an global (external) identifier. Which can be used anywhere.
        Else it will be local scope. Inside { } and will only be visible inside the { }
    */

// Operator tokens (performs a certain operation on operand/s)
    /*

    Operators by Operands

        Unary Operators
		|-------------------------------|
        | Operator | Description        |
        |----------|--------------------|
        |    ++    | Increment          |
        |----------|--------------------|
        |    --    | Decrement          |
        |----------|--------------------|
        |    !     | Logical NOT        |
        |----------|--------------------|
        |    ~     | Bitwise complement |
        |----------|--------------------|
        |    &     | Address of         |
        |----------|--------------------|
        |    *     | Dereference        |
        |----------|--------------------|

        Binary Operators
		|----------------------------------------------------------------------------------------------|
        |  Category      |  Operator   	   | Description                              				   |
        |----------------|-----------------|-----------------------------------------------------------|
        |  Arithmetic    | +   -   *   /   | Basic arithmetic operations (addition, subtraction, etc.) |
        |  Logical       | &&   ||    !    | Logical AND, OR, and NOT operations                       |
        |  Relational    | == != > < >= <= | Comparison operations for equality, inequality, etc.      |
        |----------------|-----------------|-----------------------------------------------------------|

        Ternary Operator
		|------------------------------------------------|
        | Operator     | Description                     |
        |--------------|---------------------------------|
        | ? :          | Conditional expression operator |
        |--------------|---------------------------------|

    Operators by Type

        Arithmetic Operators
        |----------|----------------|-----------------------------------------|-------------|
        | Operator | Name           | Description                             | Example     |
        |----------|----------------|-----------------------------------------|-------------|
        | +        | Addition       | Adds two operands                       | A + B = 30  |
        |----------|----------------|-----------------------------------------|-------------|
        | -        | Subtraction    | Subtracts second operand from the first | A - B = -10 |
        |----------|----------------|-----------------------------------------|-------------|
        | *        | Multiplication | Multiplies both operands                | A * B = 200 |
        |----------|----------------|-----------------------------------------|-------------|
        | /        | Division       | Divides numerator by denominator        | B / A = 2   |
        |----------|----------------|-----------------------------------------|-------------|
        | %        | Modulus        | Remainder after division                | B % A = 0   |
        |----------|----------------|-----------------------------------------|-------------|
        | ++       | Increment      | Increases the value of a variable by 1  | A++ = 11    |
        |----------|----------------|-----------------------------------------|-------------|
        | --       | Decrement      | Decreases the value of a variable by 1  | A-- = 9     |
        |----------|----------------|-----------------------------------------|-------------|

        Relational Operators
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | Operator | Name                  | Description                                                      | Example           |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | ==       | Equal to              | Checks if two operands are equal                                 | (A == B) is false |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | !=       | Not equal to          | Checks if two operands are not equal                             | (A != B) is true  |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | >        | Greater than          | Checks if left operand is greater than right operand             | (A > B) is false  |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | <        | Less than             | Checks if left operand is less than right operand                | (A < B) is true   |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | >=       | Greater than or equal | Checks if left operand is greater than or equal to right operand | (A >= B) is false |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|
        | <=       | Less than or equal    | Checks if left operand is less than or equal to right operand    | (A <= B) is true  |
        |----------|-----------------------|------------------------------------------------------------------|-------------------|

        Logical Operators
        |----------|-------------|----------------------------------------------|-------------------|
        | Operator | Name        | Description                                  | Example           |
        |----------|-------------|----------------------------------------------|-------------------|
        | &&       | Logical AND | True if both operands are true               | (A && B) is false |
        |----------|-------------|----------------------------------------------|-------------------|
        | ||       | Logical OR  | True if at least one of the operands is true | (A || B) is true  |
        |----------|-------------|----------------------------------------------|-------------------|
        | !        | Logical NOT | Reverses the logical state of its operand    | !(A && B) is true |
        |----------|-------------|----------------------------------------------|-------------------|

        Bitwise Operators
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | Operator | Name        | Description                                                                 | Example                  |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | &        | Bitwise AND | Copies a bit to the result if it exists in both operands                    | (A & B) = 12 (0000 1100) |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | |        | Bitwise OR  | Copies a bit if it exists in either operand                                 | (A | B) = 61 (0011 1101) |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | ^        | Bitwise XOR | Copies the bit if it is set in one operand but not both                     | (A ^ B) = 49 (0011 0001) |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | ~        | Bitwise NOT | Flips bits (One's complement)                                               | (~A) = -61               |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | <<       | Left shift  | Shifts bits left by the number of positions specified by the right operand  | A << 2 = 240 (1111 0000) |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|
        | >>       | Right shift | Shifts bits right by the number of positions specified by the right operand | A >> 2 = 15 (0000 1111)  |
        |----------|-------------|-----------------------------------------------------------------------------|--------------------------|

        Assignment Operators
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | Operator | Name                       | Description                                                                                   | Example               |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | =        | Simple assignment          | Assigns values from right side operands to left side operand                                  | C = A + B             |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | +=       | Add AND assignment         | Adds the right operand to the left operand and assigns the result to the left operand         | C += A is C = C + A   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | -=       | Subtract AND assignment    | Subtracts the right operand from the left operand and assigns the result to the left operand  | C -= A is C = C - A   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | *=       | Multiply AND assignment    | Multiplies the right operand with the left operand and assigns the result to the left operand | C *= A is C = C * A   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | /=       | Divide AND assignment      | Divides the left operand with the right operand and assigns the result to the left operand    | C /= A is C = C / A   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | %=       | Modulus AND assignment     | Takes modulus using two operands and assigns the result to the left operand                   | C %= A is C = C % A   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | <<=      | Left shift AND assignment  | Shifts left and assigns                                                                       | C <<= 2 is C = C << 2 |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | >>=      | Right shift AND assignment | Shifts right and assigns                                                                      | C >>= 2 is C = C >> 2 |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | &=       | Bitwise AND assignment     | Performs bitwise AND and assigns                                                              | C &= 2 is C = C & 2   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | ^=       | Bitwise XOR assignment     | Performs bitwise XOR and assigns                                                              | C ^= 2 is C = C ^ 2   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|
        | |=       | Bitwise OR assignment      | Performs bitwise OR and assigns                                                               | C |= 2 is C = C | 2   |
        |----------|----------------------------|-----------------------------------------------------------------------------------------------|-----------------------|

        Miscellaneous Operators
		|----------|------------------------|-----------------------------------------------------|-------------------|
        | Operator | Name                   | Description                                         | Example           |
        |----------|------------------------|-----------------------------------------------------|-------------------|
        | sizeof() | Sizeof                 | Returns the size of a variable                      | sizeof(int)	      |
        |----------|------------------------|-----------------------------------------------------|-------------------|
        | &        | Address of             | Returns the address of a variable                   | &a                |
        |----------|------------------------|-----------------------------------------------------|-------------------|
        | *        | Pointer to a variable  | Dereferences a pointer                              | *a                |
        |----------|------------------------|-----------------------------------------------------|-------------------|
        | ?  :     | Conditional Expression | Evaluates condition and returns a value accordingly | Condition ? X : Y |
		|----------|------------------------|-----------------------------------------------------|-------------------|

    This structure organizes the information into clear and concise tables, making it easy to understand and reference.
    Operators Precedence
        |---------------|-------------------------------------|-------------------|
        | Category	    |           Operator	              |   Associativity   | 
        |---------------|-------------------------------------|-------------------|
        | Postfix	    |         () [] -> . ++ - -	          |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Unary	        |  + - ! ~ ++ - - (type)* & sizeof	  |   Right to left   |
        |---------------|-------------------------------------|-------------------|
        | Multiplicative|	            * / %	              |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Additive	    |              + -	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Shift	        |             << >>	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Relational	|            < <= > >=	              |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Equality	    |              == !=	              |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Bitwise AND	|                &	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Bitwise XOR	|                ^	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Bitwise OR	|                |	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Logical AND   |                &&	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Logical OR	|                ||	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
        | Conditional	|                ?:	                  |   Right to left   |
        |---------------|-------------------------------------|-------------------|
        | Assignment	|   = += -= *= /= %=>>= <<= &= ^= |=  |   Right to left   |
        |---------------|-------------------------------------|-------------------|
        | Comma	        |                ,	                  |   Left to right   |
        |---------------|-------------------------------------|-------------------|
    */

// Special symbol tokens
    /*
     Apart from the symbols defined as operators, the other symbols include punctuation symbols like commas(,), semicolons(;), and colons(:). In C, you find them used differently in different contexts.
     Similarly, the parentheses ( and ) are used in arithmetic expressions as well as in function definitions. The curly brackets are employed to mark the scope of functions, code blocks in conditional and looping statements, etc.
    */
// Data Types
    /* 
     Basic Types (arithmetic types (a) integer types and (b) floating-point types)
     Enumerated types (arithmetic types and they are used to define variables that can only assign certain discrete integer values)
     The Void type (indicates that no value is available)
     User-defined types ((a) Structure types, (b) Union types)
     Derived types ((a) Pointer types, (b) Array types, (c) Function types)
    */

// Basic Types
    //syntax: type variablename;
    /*
    Integer Types 
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | Type                | Storage size  | Format Specifier |                            Value range                                           |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | Char                | 1 byte        | %c               |                    -128 to 127 or 0 to 255 / -2^7 to 2^7 - 1 or 0 to 2^8 - 1     |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | unsigned char       | 1 byte        | %hhu             |                              0 to 255                        /  0 to 2^8 - 1     |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | signed char         | 1 byte        | %hhi             |                           -128 to 127                        / -2^7 to 2^7 - 1   |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | short               | 2 bytes       | %hd              |                         -32768 to 32767                      / -2^15 to 2^15 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | unsigned short      | 2 bytes       | %hu              |                              0 to 65535                      / 0 to 2^16 - 1     |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | signed short        | 2 bytes       | %hi              |                         -32768 to 32767                      / -2^15 to 2^15 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | Int                 | 4 bytes       | %d               |                 -2,147,483,648 to 2,147,483,647              / -2^31 to 2^31 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | unsigned            | 4 bytes       | %u               |                              0 to 4,294,967,295              / 0 to 2^32 - 1     |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | signed              | 4 bytes       | %i               |                 -2,147,483,648 to 2,147,483,647              / -2^31 to 2^31 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | Long                | 4 bytes       | %ld              |                 -2,147,483,648 to 2,147,483,647              / -2^31 to 2^31 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | unsigned long       | 4 bytes       | %lu              |                              0 to 4,294,967,295              / 0 to 2^32 - 1     |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | signed long         | 4 bytes       | %li              |                 -2,147,483,648 to 2,147,483,647              / -2^31 to 2^31 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | Long long           | 8 bytes       | %lld             |     -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807  / -2^63 to 2^63 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | unsigned long long  | 8 bytes       | %llu             |                              0 to 18,446,744,073,709,551,615 / 0 to 2^64 - 1     |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    | signed long long    | 8 bytes       | %lli             |     -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807  / -2^63 to 2^63 - 1 |
    |---------------------|---------------|------------------|----------------------------------------------------------------------------------|
    
    Floating Point Types
    |-------------|--------------|----------------------------|-------------------------|-------------------|
    | Type        | Storage size |      Format Specifier      |      Value range        |    Precision      |
    |-------------|--------------|----------------------------|-------------------------|-------------------|
    | float       | 4 byte       | %f  or %.nf  or %g  or %e  |  1.2E-38   to 3.4E+38   |  6 decimal places |
    |-------------|--------------|----------------------------|-------------------------|-------------------|
    | double      | 8 byte       | %lf or %.nlf or %lg or %le |  2.3E-308  to 1.7E+308  | 15 decimal places |
    |-------------|--------------|----------------------------|-------------------------|-------------------|
    | long double | 10 byte      | %Lf or %.nLf or %Lg or %Le |  3.4E-4932 to 1.1E+4932 | 19 decimal places |
    |-------------|--------------|----------------------------|-------------------------|-------------------|
    */

// Enumerated Types (consist of a set of named integral constants)
    /*
    syntax:
    enum enum_name {    (enum_name is optional if variablename is defined) (use typedef with variablename to make it a new data type)
    constant1,
    constant2,
    ...
    constantN
    } one or more variablename; (optional)
    enum enum_name variablename = constant; (example initialization)
    enum enum_name variablename; (example defination)
    variablename new_Enum_Variable = constant; (variablename is defined as a type with typedef)
    
    They are used to define variables that can only be assigned one of the values that have been predefined. 
    This can make the code more readable and maintainable by using meaningful names instead of arbitrary numbers.
    */
    
// The Void Type
    /*
    3 use cases
     
    1. Function returns as void 
        syntax: void functionname(){ ... }
        There are various functions in C that do not return any value or you can say they return void. A function with no return value has the return type as void. For example, void exit (int status);
    2. Function arguments as void
        syntax: void functionname(void){ ... }
        There are various functions in C which do not accept any parameter. A function with no parameter can accept a void. For example, int rand(void);
    3. Pointers to void 
        syntax: void* functionname();
        A pointer of type void * represents the address of an object, but not its type. For example, a memory allocation function void *malloc( size_t size ); returns a pointer to void which can be casted to any data type.
    */

// User-defined Types
    /*
    There are two user-defined data types struct and union in C
    
    Structure
        syntax:
        struct struct_name { (struct_name is optional if variablename is defined) (use typedef with variablename to make it a new data type)
            data_type1 member1;
            data_type2 member2;
            ...
            data_typeN memberN;
        }one or more variablename; (optional)
        struct struct_name variablename = {value1,value2,...}; (example initialization)
        struct struct_name variablename;    (example defination)
        variablename.member1 = value;       (example assignment, use . to access the member of the struct)
        variablename new_Struct_Variable;   (if variablename is defined as a type using typedef)

        they can also be passed as pointers in function and *variablename.member1 to access or variablename->member1 to access
        struct allows you to combine data items of different kinds. 
        Structs are used to group related variables together.

    Union
        syntax:
        union union_name { (union_name is optional if variablename is defined) (use typedef with variablename to make it a new data type)
            data_type1 member1;
            data_type2 member2;
            ...
            data_typeN memberN;
        }one or more variablename; (optional)
        union union_name variablename;    (example defination)
        union.member1 = value;       (example initialization, use . to access the member of the union)
        variablename new_Union_Variable;   (if variablename is defined as a type using typedef)

        they can also be passed as pointers in function and *variablename.member1 to access or variablename->member1 to access
        union in C is similar to a struct, but with a key difference: in a union, all members share the same memory location and the size of union is the biggest member size.
        This means that only one of the members can hold a value at any given time.
        This helps a lot in saving Memory space.

    Bit Fields (allow the packing of data)
        syntax: type name : field_size;
        struct MixedBitFields {
            signed int flag4 : 4;
            unsigned int flag1 : 1;
            unsigned char flag2 : 2;
            unsigned short flag3 : 3;
        };
        C automatically packs the above bit fields as compactly as possible.
        the above struct's size is only 8 byte and it is only using 10bits because C has to Allocate 4 byte for int and 4 byte for char and short, as we are using different type here
        use cases:
        Packing several objects into a machine word, for example, 1-bit flags can be compacted.
        Reading external file formats − non-standard file formats could be read in, for example, 9-bit integers.
    */

// Derived Types
    /*
    Pointer (special variable that stores address or reference of another variable/object)
        syntax: type* name;
        int x;
        int* ptr = &x;  (initialization of ptr) (& is used to get the address of a variable) (ptr = &x, *ptr = x)
        *ptr = 10;      (assigning 10 to x)
        int* nextptr = ptr++; (getting the next pointer)
        int** topptr = &ptr; (topptr = &ptr, *topptr = ptr = &x, **topptr = *ptr = x)

        we put address of variables in pointers and you can then use * to access the value.
        we can also increment the pointer to get the next int type pointer.
        we can also use multilvl pointer aka pointer to a pointer
        pointer to an array is also possible, where we pass the first address of the array and *(pointer++) to get the next value in the array
        It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned.
        A pointer that is assigned NULL is called a null pointer.
        Concept & Description
        1. Pointer arithmetic
            There are four arithmetic operators that can be used in pointers: ++, --, +, -
        2. Array of pointers
            You can define arrays to hold a number of pointers.
        3. Pointer to pointer
            C allows you to have pointer on a pointer and so on.
        4. Passing pointers to functions in C
            Passing an argument by reference or by address enable the passed argument to be changed in the calling function by the called function.
        5. Return pointer from functions in C
            C allows a function to return a pointer to the local variable, static variable, and dynamically allocated memory as well.
    Arrays (a collection of multiple values of same data type stored in consecutive memory locations)
        syntax: type name[size]; or type name[] = {value1, value2,...} 

        Arrays can be primary data types (int, float, char, etc), or user-defined types such as struct, union or pointers
        The size of the array, also called the length of the array, must be specified in the declaration itself. Once declared, the size of a C array cannot be changed.
        Because Arrays are stored in the stack which is fixed unlike The Heap or Vector in C++ which is dynamic
        Example:
            int myNumbers[] = {25, 50, 75, 100};
            int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
            for (int i = 0; i < length; i++)
                printf("%d\n", myNumbers[i]); // We access each element in an array using arrayname[index] where index starts from 0

        Multidimensional Arrays
            A multidimensional array is basically an array of arrays.
            They can be of any dimension, 
            Example:
                int matrix[3][3] = { {1, 2, 3}, {4, 5, 6} , {7, 8, 9}};
                printf("%d\n", matrix[2][2]); // output is 9 as index starts from 0
                // Here the first [index] is refers to the row and the second [index] refers to the column
                for (int i = 0; i < 3; i++){
                    for (int j = 0; j < 3; j++)
                        printf("%d ", matrix[i][j]); // TO print All of Them
                    printf("\n"); // To put new line after each row
                }
            They can also be in even higher dimention like
            int matrix[3][3][3];
            int matrix[3][3][3][3]; // etc

        Pointers & Arrays
            Pointers and Arrays are closely related.
            You can also use pointers to access arrays. Because in C the name of an array is actually a pointer to the first element of the array.
            Example:
                int myNumbers[4] = {25, 50, 75, 100};
                printf("%p\n", myNumbers);      // Get the memory address of the myNumbers array
                printf("%p\n", &myNumbers[0]);  // Get the memory address of the first array element
                // We can do this instead of using index
                int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
                for (int i = 0; i < length; i++)
                    printf("%d\n", *(myNumbers + i));
                *(myNumber + 1) = 55; // Also possible to change the value of the second element using pointer 
    
    Function
       syntax: type func_name (type arg1, ...); 
       Here type of func_name is the return type of the function
       and type of arg1 is the type of the argument1
       Example:
            int add(int a, int b); // this is called prototyping
        check The Function Section for more info about Function
    */

// Type Conversion
    /*
    There are two types of conversion in C
        1. Implicit Conversion (automatically)
        2. Explicit Conversion (manually)

        Implicit Conversion
            Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
            For example, if you assign an int value to a float type.
            float myFloat = 9;
            printf("%f", myFloat); // 9.000000 (Automatic conversion: int to float)

            This can be risky, as you might lose control over specific values in certain situations.
            Especially if it was the other way around
            The following example automatically converts the float value 9.99 to an int value of 9
            int myInt = 9.99;
            printf("%d", myInt); // 9 (Automatic conversion: float to int)
            Here .99 is dropped and only the whole number (9) gets printed.

            As another example, if you divide two integers: 5 by 2, you know that the sum is 2.5. And if you store the sum as an integer, the result will only display the number 2. Therefore, it would be better to store the sum as a float or a double, right?
            Example
            float sum = 5 / 2;
            printf("%f", sum); // 2.000000

            Why is the result 2.00000 and not 2.5? Well, it is because 5 and 2 are still integers in the division. 
            In this case, you need to manually convert the integer values to floating-point values aka Explicit Conversion.

        Explicit Conversion
            Explicit conversion is done manually by placing the type in parentheses () in front of the value.
            Considering our problem from the example above, we can now get the right result:
            float sum = (float) 5 / 2; (Manual conversion: int to float)
            printf("%f", sum); // 2.500000 

            You can also place the type in front of a variable:
            int num1 = 5;
            int num2 = 2;
            float sum = (float) num1 / num2;
            printf("%.1f", sum); // 2.5
    */

// Preprocessor Commands 
    /*
    Including Common header files
        stdio.h − Provides input and output functions like printf and scanf.
        stdlib.h − Contains functions involving memory allocation, rand function, and other utility functions.
        math.h − Includes mathematical functions like sqrt, sin, cos, etc.
        string.h − Includes functions for manipulating strings, such as strcpy, strlen, etc.
        ctype.h − functions for testing and mapping characters, like isalpha, isdigit, etc.
        stdbool.h − Defines the boolean data type and values true and false.
        time.h − Contains functions for working with date and time.
        limits.h − Defines various implementation-specific limits on integer types.
    */

// C Compilation Process:
    /*
    Preprocessing
        It removes all the comments in the source file(s).
        It includes the code of the header file(s), which is a file with extension .h which contains C function declarations and macro definitions.
        It replaces all of the macros (fragments of code which have been given a name) by their values.
        try gcc -E main.c >> main.i
    Compiling
        The compiler generates the IR code (Intermediate Representation) from the preprocessed file, so this will produce a ".s" file
        try gcc -S main.c
    Assembling
        The assembler takes the IR code and transforms it into object code, that is code in machine language (i.e. binary). This will produce a file ending in ".o".
        try gcc -c main.c
    Linking
        The linker creates the final executable, in binary. It links object codes of all the source files together. The linker knows where to look for the function definitions in the static libraries or the dynamic libraries.
        Static libraries are the result of the linker making a copy of all the used library functions to the executable file. The code in dynamic libraries is not copied entirely, only the name of the library is placed in the binary file.
        try gcc main.o -o main
    ALL in One gcc main.c -o main.out/main.exe
    */


//Prints Hello, World! to the Screen (Comment/About Program)
#include <stdio.h> //including header file where printf() is defined (Preprocessor Command)

int main(){ //main function which will be run by default when program is executed, can also be void type but using int as it will return 0 if ran successfully (Function)
    
    int x = 7; //declaring and defining x and initilizing it with a value of 10 (Expression)
    printf("Hello, World!\n"); //to print Hello, World! in standard output and going to the next line   (Statement)
    
    return 0; //returning 0 (statement)
} 