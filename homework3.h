//homework3.h
#pragma once

#include <string>

struct StudentRecord {
    float midterm;
    float final;    
    StudentRecord(float midterm, float final): midterm(midterm), final(final) {}
};

// Struct version of Student
struct StudentStruct {
    std::string name;
    int id;
    struct StudentRecord record;
    StudentStruct() : name(""), id(-1), record(0.0f, 0.0f) {}
    StudentStruct (const char *name, int id, float midterm, float final): name(name), id(id), record(midterm, final) {}
};
void fillStudentRecord(StudentStruct *students, int &numbOfStudent);
void addStudent(StudentStruct *students, int *numOfStudent, const char* name, int id, float midterm, float final);
int findStudentByStudentID(StudentStruct* students, int numOfStudent, int id);
