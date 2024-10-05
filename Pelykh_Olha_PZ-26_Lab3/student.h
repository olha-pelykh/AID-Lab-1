#ifndef STUDENT_H
#define STUDENT_H
#include <QString>

class student {
private:
    QString name;
    int assessmen;
public:
    student(QString name, int assessmen)
        : name(name), assessmen(assessmen) {}

    QString getName() const { return name; }
    int getAssessmen() const { return assessmen; }

};

#endif // STUDENT_H
