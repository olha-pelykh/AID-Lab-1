#include "massive.h"
#include "quicksort.h"

massive::massive() {
}

massive::~massive() {
}

void massive::AddStudent(const QString& studName, int studAssessmen) {
    student newStudent(studName, studAssessmen);
    studentList.push_back(newStudent);
}

const std::vector<student>& massive::GetStudents() const {
    return studentList;
}

void massive::sortStudentsByName(QElapsedTimer &timer) {
    timer.start();
    std::vector<QString> names;
    for (const student& student : studentList) {
        names.push_back(student.getName());
    }

    quickSort(names, 0, names.size() - 1);

    std::vector<student> sortedList;
    for (const QString& name : names) {
        for (const student& student : studentList) {
            if (student.getName() == name) {
                sortedList.push_back(student);
                break;
            }
        }
    }
    studentList = sortedList;
    qint64 elapsed = timer.elapsed();
}

