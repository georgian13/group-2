#!/usr/bin/env python3
class People(object):
    def __init__(self,first_name ="Hrach",last_name ="Gevorgyan",age = 21):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
    def __str__(self):
        return "{ "+str(self.first_name) +" "+ str(self.last_name) +" "+ str(self.age)+" }"
class Employee(People):
    def __init__(self, first_name, last_name, age,staffnum ="enginer"):
        People.__init__(self,first_name, last_name,age)
        self.staffnum = staffnum
    def __str__(self):
        return "{ "+str(self.first_name) +" "+ str(self.last_name) +" "+ str(self.age)+" "+str(self.staffnum)+" }"

a = People("Hrach","Gevorgyan",21)
b = Employee("Hrach","Gevorgyan",21,"student")
print(a)
print(b)
