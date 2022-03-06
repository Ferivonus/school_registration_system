// class library for Student


#ifndef SCHOOL_H
#define SCHOOL_H


#include <iostream>
#include <string>
#include "LinkedList.h"
namespace std
{
    class PersonalInfo{
        public:
            int id;
            string name;
            string surname;
            string full_name;
            string address;
            string email;
            string website;
            int phone_number;
        PersonalInfo(){
            id = 0;
            name = "";
            surname = "";
            full_name = "";
            address = "";
            email = "";
            website = "";
            phone_number = 0;
        }};

    class Student
    {
        protected:
        PersonalInfo StudentInfos;     
        public:
        static int Student_ıd_counter;
            Student();
            Student(int Student_id, string name, string surname, string address, string email, string website, int phone_number);
            ~Student();
            Student(const Student& other);
            Student& operator=(const Student& other);
            
            int getStudent_id() const;
            string getName() const;
            string getSurname() const;
            string getAddress() const;
            string getEmail() const;
            string getWebsite() const;
            int getPhone_number() const;
            
            void setStudent_id(int Student_id);
            void setName(string name);
            void setSurname(string surname);
            void setAddress(string address);
            void setEmail(string email);
            void setWebsite(string website);
            void setPhone_number(int phone_number);
            
            friend ostream& operator<<(ostream& out, const Student& Student);
            friend istream& operator>>(istream& in, Student& Student);

    };
    int Student::Student_ıd_counter = 1;

    Student::Student()
    {
        StudentInfos.id = 0;
        StudentInfos.name = "";
        StudentInfos.surname = "";
        StudentInfos.address = "";
        StudentInfos.email = "";
        StudentInfos.website = "";
        StudentInfos.phone_number = 0;
    }

    Student::Student(int Student_id, string name, string surname, string address, string email, string website, int phone_number)
    {
        StudentInfos.id = Student_ıd_counter;
        StudentInfos.name = name;
        StudentInfos.surname = surname;
        StudentInfos.address = address;
        StudentInfos.email = email;
        StudentInfos.website = website;
        StudentInfos.phone_number = phone_number;
        Student_ıd_counter++;
    }

    Student::~Student()
    {
        cout << "the student of "<< StudentInfos.name <<" deported from school." << endl;
    }

    Student::Student(const Student& other)
    {
        StudentInfos.id = other.StudentInfos.id;
        StudentInfos.name = other.StudentInfos.name;
        StudentInfos.surname = other.StudentInfos.surname;
        StudentInfos.address = other.StudentInfos.address;
        StudentInfos.email = other.StudentInfos.email;
        StudentInfos.website = other.StudentInfos.website;
        StudentInfos.phone_number = other.StudentInfos.phone_number;
    }

    Student& Student::operator=(const Student& other)
    {
        if (this != &other)
        {
            StudentInfos.id = other.StudentInfos.id;
            StudentInfos.name = other.StudentInfos.name;
            StudentInfos.surname = other.StudentInfos.surname;
            StudentInfos.address = other.StudentInfos.address;
            StudentInfos.email = other.StudentInfos.email;
            StudentInfos.website = other.StudentInfos.website;
            StudentInfos.phone_number = other.StudentInfos.phone_number;
        }
        return *this;
    }

    int Student::getStudent_id() const
    {
        return StudentInfos.id;
    }

    string Student::getName() const
    {
        return StudentInfos.name;
    }

    string Student::getSurname() const
    {
        return StudentInfos.surname;
    }

    string Student::getAddress() const
    {
        return StudentInfos.address;
    }

    string Student::getEmail() const
    {
        return StudentInfos.email;
    }

    string Student::getWebsite() const
    {
        return StudentInfos.website;
    }

    int Student::getPhone_number() const
    {
        return StudentInfos.phone_number;
    }

    void Student::setStudent_id(int Student_id)
    {
        StudentInfos.id = Student_id;
    }

    void Student::setName(string name)
    {
        StudentInfos.name = name;
    }

    void Student::setSurname(string surname)
    {
        StudentInfos.surname = surname;
    }

    void Student::setAddress(string address)
    {
        StudentInfos.address = address;
    }

    void Student::setEmail(string email)
    {
        StudentInfos.email = email;
    }

    void Student::setWebsite(string website)
    {
        StudentInfos.website = website;
    }

    void Student::setPhone_number(int phone_number)
    {
        StudentInfos.phone_number = phone_number;
    }

    ostream& operator<<(ostream& out, const Student& Student)
    {
        out << "Student ID: " << Student.StudentInfos.id << endl;
        out << "Name: " << Student.StudentInfos.name << endl;
        out << "Surname: " << Student.StudentInfos.surname << endl;
        out << "Address: " << Student.StudentInfos.address << endl;
        out << "Email: " << Student.StudentInfos.email << endl;
        out << "Website: " << Student.StudentInfos.website << endl;
        out << "Phone Number: " << Student.StudentInfos.phone_number << endl;
        return out;
    }

    istream& operator>>(istream& in, Student& Student)
    {
        Student.StudentInfos.id = Student.Student_ıd_counter;
        cout << "Enter Name: ";
        in >> Student.StudentInfos.name;
        cout << "Enter Surname: ";
        in >> Student.StudentInfos.surname;
        cout << "Enter Address: ";
        in >> Student.StudentInfos.address;
        cout << "Enter Email: ";
        in >> Student.StudentInfos.email;
        cout << "Enter Website: ";
        in >> Student.StudentInfos.website;
        cout << "Enter Phone Number: ";
        in >> Student.StudentInfos.phone_number;
        Student.Student_ıd_counter++;
        return in;
    }

    class teacher
    {
        protected:
        PersonalInfo TeacherInfos;
        
        public:
        static int teacher_id_counter;
            teacher();
            teacher(int teacher_id, string name, string surname, string address, string email, string website, int phone_number);
            ~teacher();
            teacher(const teacher& other);
            teacher& operator=(const teacher& other);
            
            int getteacher_id() const;
            string getName() const;
            string getSurname() const;
            string getAddress() const;
            string getEmail() const;
            string getWebsite() const;
            int getPhone_number() const;
            
            void setteacher_id(int teacher_id);
            void setName(string name);
            void setSurname(string surname);
            void setAddress(string address);
            void setEmail(string email);
            void setWebsite(string website);
            void setPhone_number(int phone_number);
            
            friend ostream& operator<<(ostream& out, const teacher& teacher);
            friend istream& operator>>(istream& in, teacher& teacher);

 
    };
    int teacher::teacher_id_counter = 1;

    teacher::teacher()
    {
        TeacherInfos.id = 0;
        TeacherInfos.name = "";
        TeacherInfos.surname = "";
        TeacherInfos.address = "";
        TeacherInfos.email = "";
        TeacherInfos.website = "";
        TeacherInfos.phone_number = 0;
    }

    teacher::teacher(int teacher_id, string name, string surname, string address, string email, string website, int phone_number)
    {
        TeacherInfos.id = teacher_id;
        TeacherInfos.name = name;
        TeacherInfos.surname = surname;
        TeacherInfos.address = address;
        TeacherInfos.email = email;
        TeacherInfos.website = website;
        TeacherInfos.phone_number = phone_number;
    }

    teacher::~teacher()
    {
        cout << "Teacher of "<< TeacherInfos.name <<" deported from school. " << endl;
    }

    teacher::teacher(const teacher& other)
    {
        TeacherInfos.id = other.TeacherInfos.id;
        TeacherInfos.name = other.TeacherInfos.name;
        TeacherInfos.surname = other.TeacherInfos.surname;
        TeacherInfos.address = other.TeacherInfos.address;
        TeacherInfos.email = other.TeacherInfos.email;
        TeacherInfos.website = other.TeacherInfos.website;
        TeacherInfos.phone_number = other.TeacherInfos.phone_number;
    }

    teacher& teacher::operator=(const teacher& other)
    {
        if (this != &other)
        {
            TeacherInfos.id = other.TeacherInfos.id;
            TeacherInfos.name = other.TeacherInfos.name;
            TeacherInfos.surname = other.TeacherInfos.surname;
            TeacherInfos.address = other.TeacherInfos.address;
            TeacherInfos.email = other.TeacherInfos.email;
            TeacherInfos.website = other.TeacherInfos.website;
            TeacherInfos.phone_number = other.TeacherInfos.phone_number;
        }
        return *this;
    }

    int teacher::getteacher_id() const
    {
        return TeacherInfos.id;
    }

    string teacher::getName() const
    {
        return TeacherInfos.name;
    }

    string teacher::getSurname() const
    {
        return TeacherInfos.surname;
    }   

    string teacher::getAddress() const
    {
        return TeacherInfos.address;
    }

    string teacher::getEmail() const
    {
        return TeacherInfos.email;
    }

    string teacher::getWebsite() const
    {
        return TeacherInfos.website;
    }

    int teacher::getPhone_number() const
    {
        return TeacherInfos.phone_number;
    }

    void teacher::setteacher_id(int teacher_id)
    {
        TeacherInfos.id = teacher_id;
    }

    void teacher::setName(string name)
    {
        TeacherInfos.name = name;
    }

    void teacher::setSurname(string surname)
    {
        TeacherInfos.surname = surname;
    }

    void teacher::setAddress(string address)
    {
        TeacherInfos.address = address;
    }

    void teacher::setEmail(string email)
    {
        TeacherInfos.email = email;
    }

    void teacher::setWebsite(string website)
    {
        TeacherInfos.website = website;
    }

    void teacher::setPhone_number(int phone_number)
    {
        TeacherInfos.phone_number = phone_number;
    }

    ostream& operator<<(ostream& out, const teacher& teacher)
    {
        out << "Teacher ID: " << teacher.TeacherInfos.id << endl;
        out << "Name: " << teacher.TeacherInfos.name << endl;
        out << "Surname: " << teacher.TeacherInfos.surname << endl;
        out << "Address: " << teacher.TeacherInfos.address << endl;
        out << "Email: " << teacher.TeacherInfos.email << endl;
        out << "Website: " << teacher.TeacherInfos.website << endl;
        out << "Phone Number: " << teacher.TeacherInfos.phone_number << endl;
        return out;
    }

    istream& operator>>(istream& in, teacher& teacher)
    {
        teacher.TeacherInfos.id = teacher.teacher_id_counter;
        cout << "Enter Name: ";
        in >> teacher.TeacherInfos.name;
        cout << "Enter Surname: ";
        in >> teacher.TeacherInfos.surname;
        cout << "Enter Address: ";
        in >> teacher.TeacherInfos.address;
        cout << "Enter Email: ";
        in >> teacher.TeacherInfos.email;
        cout << "Enter Website: ";
        in >> teacher.TeacherInfos.website;
        cout << "Enter Phone Number: ";
        in >> teacher.TeacherInfos.phone_number;
        teacher.teacher_id_counter++;
        return in;
    }

    // write school class with students and teachers classes:

    class school{
        private:
            PersonalInfo SchoolInfos;
            LinkedList<Student> students;
            LinkedList<teacher> teachers;
        public:
            static int school_id_counter;
            school();
            school(int school_id, string school_name, string school_address, string school_email, string school_website, int school_phone_number);
            school(const school& other);
            school& operator=(const school& other);
            
            int getschool_id() const;
            string getschool_name() const;
            string getschool_address() const;
            string getschool_email() const;
            string getschool_website() const;
            int getschool_phone_number() const;
            
            void setschool_id(int school_id);
            void setschool_name(string school_name);
            void setschool_address(string school_address);
            void setschool_email(string school_email);
            void setschool_website(string school_website);
            void setschool_phone_number(int school_phone_number);
            
            void addStudent(Student& student);
            void addTeacher(teacher& teacher);
            void clearStudents();
            void clearTeachers();
            void printStudents() const;
            void printTeachers() const;
            void printSchool() const;
            
            friend ostream& operator<<(ostream& out, const school& school);
            friend istream& operator>>(istream& in, school& school);
    };
    int school::school_id_counter = 1;

    school::school()
    {
        SchoolInfos.id = 0;
        SchoolInfos.name = "";
        SchoolInfos.address = "";
        SchoolInfos.email = "";
        SchoolInfos.website = "";
        SchoolInfos.phone_number = 0;
    }

    school::school(int school_id, string school_name, string school_address, string school_email, string school_website, int school_phone_number)
    {
        SchoolInfos.id = school_id;
        SchoolInfos.name = school_name;
        SchoolInfos.address = school_address;
        SchoolInfos.email = school_email;
        SchoolInfos.website = school_website;
        SchoolInfos.phone_number = school_phone_number;
    }

    school::school(const school& other)
    {
        SchoolInfos.id = other.SchoolInfos.id;
        SchoolInfos.name = other.SchoolInfos.name;
        SchoolInfos.address = other.SchoolInfos.address;
        SchoolInfos.email = other.SchoolInfos.email;
        SchoolInfos.website = other.SchoolInfos.website;
        SchoolInfos.phone_number = other.SchoolInfos.phone_number;
    }

    school& school::operator=(const school& other)
    {
        if (this != &other)
        {
            SchoolInfos.id = other.SchoolInfos.id;
            SchoolInfos.name = other.SchoolInfos.name;
            SchoolInfos.address = other.SchoolInfos.address;
            SchoolInfos.email = other.SchoolInfos.email;
            SchoolInfos.website = other.SchoolInfos.website;
            SchoolInfos.phone_number = other.SchoolInfos.phone_number;
        }
        return *this;
    }

    int school::getschool_id() const
    {
        return SchoolInfos.id;
    }

    string school::getschool_name() const
    {
        return SchoolInfos.name;
    }

    string school::getschool_address() const
    {
        return SchoolInfos.address;
    }

    string school::getschool_email() const
    {
        return SchoolInfos.email;
    }

    string school::getschool_website() const
    {
        return SchoolInfos.website;
    }

    int school::getschool_phone_number() const
    {
        return SchoolInfos.phone_number;
    }

    void school::setschool_id(int school_id)
    {
        SchoolInfos.id = school_id;
    }

    void school::setschool_name(string school_name)
    {
        SchoolInfos.name = school_name;
    }

    void school::setschool_address(string school_address)
    {
        SchoolInfos.address = school_address;
    }

    void school::setschool_email(string school_email)
    {
        SchoolInfos.email = school_email;
    }

    void school::setschool_website(string school_website)
    {
        SchoolInfos.website = school_website;
    }

    void school::setschool_phone_number(int school_phone_number)
    {
        SchoolInfos.phone_number = school_phone_number;
    }

    void school::addStudent(Student& student)
    {
        students.insertLast(student);
    }

    void school::addTeacher(teacher& teacher)
    {
        teachers.insertLast(teacher);

    }

    void school::clearStudents()
    {
        students.clearList();
    }

    void school::clearTeachers()
    {
        teachers.clearList();
    }

    void school::printStudents() const
    {
        cout << students;
    }

    void school::printTeachers() const
    {
        cout << teachers;
    }

    void school::printSchool() const
    {
        cout << "School ID: " << SchoolInfos.id << endl;
        cout << "School Name: " << SchoolInfos.name << endl;
        cout << "School Address: " << SchoolInfos.address << endl;
        cout << "School Email: " << SchoolInfos.email << endl;
        cout << "School Website: " << SchoolInfos.website << endl;
        cout << "School Phone Number: " << SchoolInfos.phone_number << endl;
    }

    ostream& operator<<(ostream& out, const school& school)
    {
        out << "School ID: " << school.SchoolInfos.id << endl;
        out << "School Name: " << school.SchoolInfos.name << endl;
        out << "School Address: " << school.SchoolInfos.address << endl;
        out << "School Email: " << school.SchoolInfos.email << endl;
        out << "School Website: " << school.SchoolInfos.website << endl;
        out << "School Phone Number: " << school.SchoolInfos.phone_number << endl;
        return out;
    }

    istream& operator>>(istream& in, school& school)
    {
        school.SchoolInfos.id = school.school_id_counter;
        cout << "Enter School Name: ";
        getline(in, school.SchoolInfos.name);
        cout << "Enter School Address: ";
        in >> school.SchoolInfos.address;
        cout << "Enter School Email: ";
        in >> school.SchoolInfos.email;
        cout << "Enter School Website: ";
        in >> school.SchoolInfos.website;
        cout << "Enter School Phone Number: ";
        in >> school.SchoolInfos.phone_number;
        school.school_id_counter++;
        return in;
    }
    
}

 // namespace std


#endif /* SCHOOL_H_ */
