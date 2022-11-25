//
// Created by Ivan on 27.10.2022.
//

#include "Organization.h"
// віртуальний метод
string Organization::show_Name() {
    cout << "this is method of organization" << endl;
    return nameOrganization;
}
// перевантаження операції потокового введення
ifstream &operator>>(ifstream &is, Organization &d) {
    cout << "Write organization name:";
    cin >> d.nameOrganization;
    cout << "Write adress";
    cin >> d.adress;
    cout << "Write phone number:";
    cin >> d.phoneNumber;
    cout << "Write owner name:";
    cin >> d.ownerName;
    cout << "Write owner surname:";
    cin >> d.ownerSurname;
}
// перевантаження операції потокового виведення

ostream &operator<<(ostream &os, Organization &d) {
    cout << "Organization name: " << d.nameOrganization << endl;
    cout << "Organization adress: " << d.adress << endl;
    cout << "Organization phone number: " << d.phoneNumber << endl;
    cout << "Owner name: " << d.ownerName << endl;
    cout << "Owner surname: " << d.ownerSurname << endl;
}
