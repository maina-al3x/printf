The aim of the project:



Code execution through use of a modified printf function (_printf).



Functions and headers to be used for the different functions:

•	  Printf:

The functionsin the printf() family produce output  according  to a format as described below.  The functions printf()  and vprintf() write output to stdout,  the  standard  output stream;  fprintf()  and vfprintf() write output to the given output stream; sprintf(), snprintf(), vsprintf() and  vs‐nprintf() write to the character string str.



Header file to be used #include <stdio.h>



•      Write

write - write to a file descriptor

write() writes up to count bytes from the buffer starting at  buf to the file referred to by the file descriptor fd.

On success, the number of bytes written is returned.  On error, -1 is returned, and errno is set to indicate the  cause  of the error.



Header file to be used   #include <unistd.h>



•      Malloc and free

 malloc,  free,  calloc,  realloc - allocate and free dynamic  memory
 
The  malloc()function allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized. If size is 0,then malloc() returns either NULL, or a                                                                                    unique pointer value that can later be  successfully  passed to free().



The  free()  function  frees  the memory space pointed to by ptr, which must have been returned by  a  previous  call  to malloc(),   calloc(),   or   realloc().   Otherwise,  or  if  free(ptr) has already been called before, undefined behavior occurs.  If ptr is NULL, no operation is performed.



Header file to be used #include <stdlib.h>



•      Stdarg,  va_start,  va_arg, va_end, va_copy



stdarg,  va_start,  va_arg, va_end, va_copy - variable argument lists

A function may be called with a

varying number of arguments of  varying  types.  The include file <stdarg.h> declares a  type va_list and defines three macros for stepping through a list  of  arguments  whose number and types are not known to the called function.

The called function must declare an object of type va_list which  is  used  by  the  macros  va_start(),  va_arg(), and va_end().



   va_start()
   
The va_start() macro initializes

ap for subsequent use  by va_arg() and va_end(), and must be called first.

                                                                                                                                                                                                                                                                                          va_arg()
																																			  
The va_arg() macro

expands to an expression that has the type and value of the next argument in the call.  The  argument  ap  is the va_list ap initialized by va_start().  Each call to va_arg() modifies ap so that the next  call  returns the  next argument.  The argument type is a type name specified so that the type of a pointer to an object that has the specified type can be obtained simply by adding a * to type.



   va_end()
   
 Each  invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function.After the  call va_end(ap) the variable ap is undefined. Multiple traversals of the list, eachbracketed  by  va_start()  and va_end()  are  possible.  va_end() may be a macro or a function.
 


   va_copy()
   
The va_copy()macrocopiesthe(previously  initialized)  variable  argument  list src to dest.  The behavior is as if va_start() were applied to dest with the same last argument,  followed by the same number of va_arg() invocations that was used to reach the current state of src.



Header file to be used #include <stdarg.h>





Tasks





0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

1. Education is when you read the fine print. Experience is what you get if you don't

2. With a face like mine, I do better in print

3. What one has not experienced, one will never understand in print

4. Nothing in fine print is ever good news

5. My weakness is wearing too much leopard print

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

7. The big print gives and the small print takes away

8. Sarcasm is lost in print

9. Print some money and give it to us for the rain forests

10. The negative is the equivalent of the composer's score, and the print the performance

11. It's depressing when you're still around and your albums are out of print

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

13. Print is the sharpest and the strongest weapon of our party

14. The flood of print has turned reading into a process of gulping rather than savoring

15. *

All the above options work well together.


