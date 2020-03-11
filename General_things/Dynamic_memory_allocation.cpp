* Memory in c++ program,
* The stack-> All the variables declared inside the function will take up the memory from the stack.
* The Heap->This is unused part of memory can be allocated when the program runs dynamically,.
#####################################################################################################################
You can use the new operator to allocate the memory at run time for the variable of given type.
You can use the delete operator when you no more need the memory that you have dynamically allocated.
#####################################################################################################################
* When a data member is declared as static, only one copy of the data is maintained for all objects of the class.
#####################################################################################################################
How we allocate the memory at the run time using the new operator??
  basically new is used to allocate the memory to the pointer variables.
  int *a=new int[20];
this value of the 20 can be decided at the run time.
  for example,
class a:
private:
int x;
list<int> *adjlist;
public:
void set(int y)
{
  x=y;
  list<int> *adjlist=new list<int>[y];
}
};
int main()
{
  a obj;
  obj.set(20);
}
like this based on the value that we pass we can initialise the number of lists as per the requiorement.
########################################################################################################################
