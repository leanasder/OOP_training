//25.09.2024 developing this program. OOP Semen Panichev. 4_2 Homework.
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company;
    string model;
public:
    Car() {
        cout <<"dtor Car default " << endl;
    }
    Car(string p_company, string p_model): company(p_company), model(p_model) {
        cout << "dtor Car" << ' ' << company << ' ' << model << endl;
    }
    ~Car() {
        cout << "~Car" << endl;
    }
};

class PassengerCar : virtual public Car {
private:
    string company;
    string model;
public:
    PassengerCar() {cout << "dtor PassengerCar default\n";}
    PassengerCar(string p_company, string p_model): company(p_company), model(p_model) {
        cout << "dtor PassengerCar " << company << ' ' << model << endl;
    }
        ~PassengerCar() {cout << "~PassengerCar";}
        
    
};

class Bus : virtual public Car {
public:
    string company;
    string model;
public:
    Bus() {cout << "dtor Bus default\n";}
    Bus(string p_company, string p_model):  company(p_company), model(p_model) {
        cout << "dtor Bus " << company << ' ' << model << endl;
    }
    ~Bus() {cout << "~Bus";}
};

class Minivan : public PassengerCar, public Bus {
private:
    string company;
    string model;
public:
    Minivan(string p_company, string p_model) { 
         cout << "dtor Minivan " << p_company << ' ' << p_model << endl;
    }
    ~Minivan() {cout << "~Minivan";}
};
int main () {
    //Car bibika("leanasder's company,", " Nivat");
    //PassengerCar pcar("leanasder's company","NivaT");
    //Bus busik("bus park #1", "vezdevoz") ;
    //Minivan rafik("home holding", "ford transit");
    return 0;
}