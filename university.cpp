//
// Created by Ivan on 02.11.2022.
//

#include "university.h"
//ініціалізація конструктора
university::university() {
    array[1]=kafedra("System Analysis",1000,510,100,"NULP","Bandera","099999999","noOwner","noOwner");
    array[3]=kafedra("Business Analysis",1020,503,240,"NULP","Bandera","099999999","noOwner","noOwner");
    array[2]=kafedra("Computer Enginering",1500,200,400,"NULP","Bandera","099999999","noOwner","noOwner");
    array[4]=kafedra("Busines Intelegince",1700,400,400,"NULP","Bandera","099999999","noOwner","noOwner");
    array[5]=kafedra("Computer Network",1006,506,205,"NULP","Bandera","099999999","noOwner","noOwner");
    array[6]=kafedra("Automated System",1080,570,280,"NULP","Bandera","099999999","noOwner","noOwner");
    array[7]=kafedra("Art and Music",1090,509,209,"NULP","Bandera","099999999","noOwner","noOwner");
    array[8]=kafedra("Math",1000,1500,140,"NULP","Bandera","099999999","noOwner","noOwner");
    array[9]=kafedra("English language",1200,540,204,"NULP","Bandera","099999999","noOwner","noOwner");
    array[0]=kafedra("Ukranian Language",1300,400,200,"NULP","Bandera","099999999","noOwner","noOwner");

}
// метод для виведення інформації
void university::display() {
    for (iter i = begin(); i != end(); ++i) {//цикл, від першого до останнього елемента, ізкроком ітератора = 1
        cout<<(*i)<<endl;
    }
}
