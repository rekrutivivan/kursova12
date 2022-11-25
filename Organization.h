//
// Created by Ivan on 27.10.2022.
//

#ifndef KURSOVA_ORGANIZATION_H
#define KURSOVA_ORGANIZATION_H

#include <string>
#include <iostream>

using namespace std;

class Organization {
private:
    string nameOrganization;
    string adress;
    string phoneNumber;
    string ownerName;
    string ownerSurname;
public:
//  ============Constructors===========
    Organization() {}

    Organization(string name_organization, string adr, string phone_number, string owner_name, string owner_surname)
            : nameOrganization(name_organization),
              adress(adr), phoneNumber(phone_number), ownerName(owner_name), ownerSurname(owner_surname) {}

    Organization(const Organization &d) {
        this->nameOrganization = d.nameOrganization;
        this->adress = d.adress;
        this->phoneNumber = d.phoneNumber;
        this->ownerName = d.ownerName;
        this->ownerSurname = d.ownerSurname;
    }

//  ==========Get_methods=============
    string get_nameOrganization() const { return nameOrganization; }

    string get_adress() const { return adress; }

    string get_phoneNumber() const { return phoneNumber; }

    string get_ownerName() const { return ownerName; }

    string get_OwnerSurname() const { return ownerSurname; }

//  ==========Set_methods=============
    void set_nameOrganization(string value) { nameOrganization = value; }

    void set_adress(string value) { adress = value; }

    void set_phoneNumber(string value) { phoneNumber = value; }

    void set_ownerName(string value) { ownerName = value; }

    void set_OwnerSurname(string value) { ownerSurname = value; }

//  ========Methods================
    // перевантаження операцій введення та виведення
    friend ostream &operator<<(ostream &os, Organization &d);
    friend ifstream &operator>>(ifstream &is, Organization &d);
    // перевантаження операції присвоєєння
    Organization operator=(Organization &d) {
        Organization result;
        result.ownerName = d.ownerName;
        result.adress = d.adress;
        result.phoneNumber = d.phoneNumber;
        result.nameOrganization = d.nameOrganization;
        result.ownerSurname = d.ownerSurname;
        return result;
    }
    //віртуальний метод
    virtual string show_Name();

};

#endif //KURSOVA_ORGANIZATION_H
