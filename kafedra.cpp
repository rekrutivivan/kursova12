    //
    // Created by Ivan on 01.11.2022.
    //

    #include "kafedra.h"

    // перевантаження потокового виведення
    ostream &operator<<(ostream &os, kafedra &d) {
        cout << d.get_speciality() << endl;
        os << "Speciality:" << d.speciality << endl << "Count of Specialist:" << d.count_specialist << endl
           << "Count of Masters:" << d.count_masters << endl << "Count of Bachelors:" << d.count_bachelors << endl
           << "Count of all students: " << d.count_allStudents << endl
           << "Organization name: " << d.get_nameOrganization() << endl
           << "Organization adress: " << d.get_adress() << endl
           << "Organization phone number: " << d.get_phoneNumber() << endl
           << "Owner name: " << d.get_ownerName() << endl
           << "Owner surname: " << d.get_OwnerSurname() << endl;
        return os;
    }

    // перевантаження потокового введення
    istream &operator>>(istream &is, kafedra &d) {
        cout << "Write Speciality: ";
        cin >> d.speciality;
        cout << "Write count of Bachelors: ";
        cin >> d.count_bachelors;
        cout << "Write count of Masters: ";
        cin >> d.count_masters;
        cout << "Write count of Specialist: ";
        cin >> d.count_specialist;
    }

    //перевантаження оператора присвоєння
    kafedra &kafedra::operator=(const kafedra &d) {
        kafedra g;
        g.speciality = d.speciality;
        g.count_masters = d.count_masters;
        g.count_specialist = d.count_specialist;
        g.count_bachelors = d.count_bachelors;
        g.set_nameOrganization(d.get_nameOrganization());
        g.set_OwnerSurname(d.get_OwnerSurname());
        g.set_ownerName(d.get_ownerName());
        g.set_adress(d.get_adress());
        g.set_phoneNumber(d.get_phoneNumber());
        return g;
    }
    //конструктор копіювання
    kafedra::kafedra(const kafedra &d) {
        this->count_bachelors = d.count_bachelors;
        this->speciality = d.speciality;
        this->count_specialist = d.count_specialist;
        this->count_masters = d.count_masters;
    }

