#ifndef MASSIVE_H
#define MASSIVE_H
#include "qelapsedtimer.h"
#include <vector>
#include <QElapsedTimer>
#include "student.h"

class massive {
public:
    massive();
    ~massive();

    void AddStudent(const QString& studName, int studAssessmen);
    void sortStudentsByName(QElapsedTimer &timer);
    const std::vector<student>& GetStudents() const;
    void displaySortTime(qint64 ms);
private:
    std::vector<student> studentList;
};
#endif //MASSIVE_H
