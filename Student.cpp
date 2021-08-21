#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

   void Student::assignDetails(int sId, char sName[]) {
        StudentId=sId;
        strcpy(name,sName);
  }

  void Student::display() {
    cout<<"-------------------------------------"<<endl;
    cout<<"Student Id \t:"<<StudentId<<endl;
    cout<<"Student Name \t:"<<name<<endl; 
  }
