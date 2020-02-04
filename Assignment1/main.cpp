//
//  main.cpp
//  Assignment1
//
//  Created by Kevin Cruse on 2/1/20.
//  Copyright © 2020 Kevin Cruse. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "EmployeeRecord.h"

int main() {
    //EmployeeRecord rec1;
    char fName[] = "Kevin";
    char lName[] = "Cruse";
    EmployeeRecord *rec2 = new EmployeeRecord(1234, fName, lName, 4321, 100000);
    rec2 -> printRecord();
//    int ID;
//    int deptID;
//    double *sal;
//    double sala;
//    rec1.setID(ID);
//    rec1.getID();
//    char lastName[32], firstName[32];
//    rec1.setName(firstName, lastName);
//    rec1.getName(firstName, lastName);
//    rec1.setDept(deptID);
//    rec1.getDept(deptID);
//    rec1.setSalary(sala);
//    rec1.getSalary(sal);
//    rec1.printRecord();
    return 0;
}
