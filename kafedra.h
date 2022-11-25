    //
    // Created by Ivan on 01.11.2022.
    //

    #ifndef KURSOVA_KAFEDRA_H
    #define KURSOVA_KAFEDRA_H

    #include "Organization.h"

    class kafedra : public Organization {
    private:
        string speciality;
        int count_bachelors;
        int count_specialist;
        int count_masters;
        int count_allStudents;
    public:
    // constructors
        kafedra() {}

        kafedra(string Speciality, int bachelors, int specialist, int masters, string nameOrganization, string adress,
                string phoneNumber, string ownerName,
                string ownerSurname) : Organization(nameOrganization, adress, phoneNumber, ownerName, ownerSurname) {
            speciality = Speciality;
            count_bachelors = bachelors;
            count_specialist = specialist;
            count_masters = masters;
            sum_AllStudents();
        }
    // copy constructor
        kafedra (const kafedra & d);

    //  ========Set_Methods======
        void set_speciality(string sp) { speciality = sp; }

        void set_bachelors(int bachelors) {
            sum_AllStudents();
            count_bachelors = bachelors; }

        void set_specialist(int specialist) { count_specialist = specialist;
            sum_AllStudents();
        }

        void set_masters(int masters) {
            count_masters = masters;
            sum_AllStudents();
        }

    //    =========Get_Methods==========
        string get_speciality() const { return speciality; }

        int get_masters() const { return count_masters; }

        int get_bachelors() const { return count_bachelors; }

        int get_specialist() const { return count_specialist; }
        int get_sumAllStudent() const{return count_allStudents;};
        void sum_AllStudents () {count_allStudents=count_specialist+count_bachelors+count_masters;}
        // перевантаженна операція присвоєння
        kafedra & operator = ( const kafedra &d);
        //перевантажені операції введення та виведення
        friend ostream &operator<<(ostream &os, kafedra &d);
        friend istream &operator>>(istream &is, kafedra &d);
       //віртуальний метод
        virtual string show_Name(){
            cout << "This is method of kafedra.h;" << endl;
            return speciality;
        }

    };


    #endif //KURSOVA_KAFEDRA_H
