* IN c for the dynamic memory is alocated using the malloc,calloc, free and realloc.
* As you know, an array is a collection of a fixed number of values. 
Once the size of an array is declared, you cannot change it.
* Sometimes the size of the array you declared may be insufficient. To solve this issue,
you can allocate memory manually during run-time. This is known as dynamic memory allocation in C programming.
#########################################################################################################################
* malloc() -> allocation of the memory in bytes of certain type.
* calloc() -> allocation of memory in bytes of certain type which is int or float.
* free() -> this is used to free the allocated memory.
* realloc -> re allocation of the memory when it is not sufficient.
#########################################################################################################################
Generally new operator is used to allocate the memory in c++.
1.int *a=new int;
a=5;
2.int *a=new int[5];
assigning the value 5 as the value of a.
3.int *a =new int(5);
alloated the 5 memory spaces for the a
#########################################################################################################################
@ ptr = (float*) malloc(100 * sizeof(float));
@ ptr = (float*) calloc(25, sizeof(float));
@ free(ptr);
@ ptr = realloc(ptr, x);
x is the new size.
###########################################################################################################################
* 
