* https://github.com/vignesh628/python_codes/blob/master/classes_1.ipynb check this linke for the classes.
* class is just like creating the template.
* once we create the template then we can use the same template for multiple things.
* For example i have the students in class if i create the template for the student.
* then using the object i can access the all properties of student in template.
#########################################################################################################################################
* object=class_name() -> creation of the object for the class
* object.method() -> calling the method using the object. the important thing here is we can pass the parameters for the method that we call.
#########################################################################################################################################
__init__ is the constructor that is present default for the class.
remember class is keyword, method __init__ inside is the method which is fixed. self is not fixed
The methods to which we pass the self are called as the class methods.
#########################################################################################################################################
object=Class_name(p1,p2,p3)
these p1,p2,p3 that we are passing will directly going into the __init__, be careful while writing the init.
########################################################################################################################################
* self is like the object inside the class. it can access the both objects and methods like how we are accessing the methods.
* self can be passed to the other methods which can be used by the methods.
########################################################################################################################################
* The parameters that are passed by the object will overwrite the parameters that are already present in the self.
* writing the self is just convention . it is not like that we should always use the self.
#######################################################################################################################################
* We can rewrite the objects of the self in any other method. when we are calling it.
* suppose we are calling the teacher method @ obj.teacher(100) where the self.increment=10 and we have incremnet 100 for teacher then
* obj.teacher(100)
* in teacher method def teacher(self,x):
                        self.increment=x
                        then the increment of the techer will gets changed accrodingly.
#######################################################################################################################################
*#conslusion only one running instance will be created.
#if you rewrite the variable value in running instance it will change
#that running isntance will be same any where within.
#that running instance will be accessible if we take that instance as argument.
#the running instance can also be passed as the parameter.
#######################################################################################################################################
@classmethod used in python as decorator which the methods will be able to access the class variables(variables that are created in 
classnot in the methods within the class)
@staticmethod is used in python which are the static methods that can be called directly whithout calling the class name. that's where 
the static name came in where it has scope allover the code.
####################################################################################################################################
