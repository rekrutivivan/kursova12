#include <iostream>
#include "Organization.h"
#include "kafedra.h"
#include "university.h"

int main() {
    string organization_Name;
    string organization_addr;
    string organization_ownerName;
    string organization_ownerSurname;
    string organization_ownerPhoneNumber;
    string speciality;
    int masters;
    int bachelors;
    int specilist;
    int option;
    again1:
    cout << "Write option" << endl
         << "\t" << "1-Organization" << endl
         << "\t" << "2-kafedra" << endl
         << "\t" << "3-University" << endl
         << "\t" << "4-Late binding" << endl;
    cin >> option;
    if (option == 1) {
        cout << "Creating Organization:" << endl;
        cout << "Write organization name: " << endl;
        cin >> organization_Name;
        cout << "Write organization address: " << endl;
        cin >> organization_addr;
        cout << "Write owner`s name: " << endl;
        cin >> organization_ownerName;
        cout << "Write owner`s surname: " << endl;
        cin >> organization_ownerSurname;
        cout << "Write owner`s phone number: " << endl;
        cin >> organization_ownerPhoneNumber;
        Organization d(organization_Name, organization_addr, organization_ownerPhoneNumber, organization_ownerName,
                       organization_ownerSurname);
        cout << d;
        int option1;
        again2:
        cout << "Write option" << endl;
        cout << "\t" << "1-Change fields" << endl
             << "\t" << "2-Show info" << endl
             << "\t" << "3-return back" << endl;
        cin >> option1;
        switch (option1) {

            case 1:
                cout << "Creating Organization:" << endl;
                cout << "Write organization name: " << endl;
                cin >> organization_Name;
                cout << "Write organization address: " << endl;
                cin >> organization_addr;
                cout << "Write owner`s name: " << endl;
                cin >> organization_ownerName;
                cout << "Write owner`s surname: " << endl;
                cin >> organization_ownerSurname;
                cout << "Write owner`s phone number: " << endl;
                cin >> organization_ownerPhoneNumber;
                d.set_ownerName(organization_ownerName);
                d.set_nameOrganization(organization_Name);
                d.set_adress(organization_addr);
                d.set_OwnerSurname(organization_ownerSurname);
                d.set_phoneNumber(organization_ownerPhoneNumber);
                cout << d;
                goto again2;
            case 2:
                cout << d;
                goto again2;
            case 3:
                goto again1;
        }
    }
    if (option == 2) {
        cout << "Creating kafedra:" << endl;
        cout << "Write kafedra speciality: " << endl;
        cin >> speciality;
        cout << "Write count of masters: " << endl;
        cin >> masters;
        cout << "Write count of specialist: " << endl;
        cin >> specilist;
        cout << "Write count of bachelors " << endl;
        cin >> bachelors;
        cout << "Write organization name: " << endl;
        cin >> organization_Name;
        cout << "Write organization address: " << endl;
        cin >> organization_addr;
        cout << "Write owner`s name: " << endl;
        cin >> organization_ownerName;
        cout << "Write owner`s surname: " << endl;
        cin >> organization_ownerSurname;
        cout << "Write owner`s phone number: " << endl;
        cin >> organization_ownerPhoneNumber;
        kafedra f(speciality, bachelors, specilist, masters, organization_Name, organization_addr,
                  organization_ownerPhoneNumber, organization_ownerName, organization_ownerSurname);
        cout << f;
        int option1;
        again3:
        cout << "Write option" << endl;
        cout << "\t" << "1-Change fields" << endl
             << "\t" << "2-Show info" << endl
             << "\t" << "3-return back" << endl;
        cin >> option1;
        switch (option1) {

            case 1:
                cout << "Write kafedra speciality: " << endl;
                cin >> speciality;
                cout << "Write count of masters: " << endl;
                cin >> masters;
                cout << "Write count of specialist: " << endl;
                cin >> specilist;
                cout << "Write count of bachelors " << endl;
                cin >> bachelors;
                cout << "Write organization name: " << endl;
                cin >> organization_Name;
                cout << "Write organization address: " << endl;
                cin >> organization_addr;
                cout << "Write owner`s name: " << endl;
                cin >> organization_ownerName;
                cout << "Write owner`s surname: " << endl;
                cin >> organization_ownerSurname;
                cout << "Write owner`s phone number: " << endl;
                cin >> organization_ownerPhoneNumber;
                f.set_bachelors(bachelors);
                f.set_masters(masters);
                f.set_specialist(specilist);
                f.set_speciality(speciality);
                f.set_ownerName(organization_ownerName);
                f.set_nameOrganization(organization_Name);
                f.set_adress(organization_addr);
                f.set_OwnerSurname(organization_ownerSurname);
                f.set_phoneNumber(organization_ownerPhoneNumber);
                cout << f;
                goto again3;
            case 2:
                cout << f;
                goto again3;
            case 3:
                goto again1;
        }
    }
    if (option == 3) {
        int option4;
        again6:
        cout << "Write option" << endl;
        cout << "\t" << "1-Create University" << endl
             << "\t" << "2-return back" << endl;
        cin >> option4;
        if (option4 == 1) {
            university a;
            a.display();
            goto again6;
        } else if (option4 == 2) {
            goto again1;
        }
    }
    if (option == 4) {
        int option4;
        again5:
        cout << "Write option" << endl;
        cout << "\t" << "1-Demonstrate late binding" << endl
             << "\t" << "2-return back" << endl;
        cin >> option4;
        if (option4 == 1) {
            kafedra Sa("System Analysis", 100, 20, 50, "Nulp", "St. Bandera ", "09555550", "noname", "noname");
            Organization &organization = Sa;
            cout << organization << endl;
            cout << Sa << endl;
            cout << organization.show_Name() << endl;
            goto again5;
        } else if (option4 == 2) {
            goto again1;
        }
    }
}

