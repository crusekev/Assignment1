//
//  EmployeeRecord.cpp
//  Assignment1
//
//  Created by Kevin Cruse on 2/1/20.
//  Copyright © 2020 Kevin Cruse. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include "EmployeeRecord.h"
#include <iostream>
#include <string>

// default constructor
EmployeeRecord::EmployeeRecord() {
    std::cout << "Function reached 1\n";
    m_iEmployeeID = 0;
    strcpy(m_sLastName, "");
    strcpy(m_sFirstName, "");
    m_iDeptID = 0;
    m_dSalary = 0;
}
// parameterized constructor
EmployeeRecord::EmployeeRecord(int ID, char *fName, char *lName, int dept, double sal) {
    std::cout << "Function reached 2\n";
    m_iEmployeeID = ID;
    strcpy(m_sFirstName, fName);
    strcpy(m_sLastName, lName);
    m_iDeptID = dept;
    m_dSalary = sal;
}
// destructor
EmployeeRecord::~EmployeeRecord() {
    std::cout << "Function reached 3\n";
}
int EmployeeRecord::getID() {
    std::cout << "Function reached 4\n";
    return m_iEmployeeID;
}
void EmployeeRecord::setID(int ID) {
    std::cout << "Function reached 5\n";
    m_iEmployeeID = ID;
}
void EmployeeRecord::getName(char *fName, char *lName) {
    std::cout << "Function reached 6\n";
    fName = m_sFirstName;
    lName = m_sLastName;
}
void EmployeeRecord::setName(char *fName, char *lName) {
    std::cout << "Function reached 7\n";
    fName = m_sFirstName;
    lName = m_sLastName;
}
void EmployeeRecord::getDept(int &d) {
    std::cout << "Function reached 8\n";
    d = m_iDeptID;
}
void EmployeeRecord::setDept(int d) {
    std::cout << "Function reached 9\n";
    m_iDeptID = d;
}
void EmployeeRecord::getSalary(double *sal) {
    std::cout << "Function reached 10\n";
    sal = &m_dSalary;
}
void EmployeeRecord::setSalary(double sal) {
    std::cout << "Function reached 11\n";
    m_dSalary = sal;
}
void EmployeeRecord::printRecord() {
    std::cout << "Function reached 12\n";
    std::cout << "Employee ID: " << m_iEmployeeID << std::endl;
    std::cout << "Last name: " << m_sLastName << std::endl;
    std::cout << "First name: " << m_sFirstName << std::endl;
    std::cout << "Department ID: " << m_iDeptID << std::endl;
    std::cout << "Salary: " << m_dSalary << std::endl;
}
