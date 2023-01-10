#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string nameI, int ageI) {
		name = nameI;
		age = ageI;
	}

};


class Car {

public:
	string maker;
	int age;
	
	Car(string makerI, int ageI) {
		maker = makerI;
		age = ageI;
	}


};

template <class T>
class Average_Age {

public:

	static double Comp_Average_Age(const list<T>& items) {

			double sum = 0.0;
			for (const T& obj : items) {
				sum += obj.age;
			}
			return sum / items.size();
	}

};


int main() {

	list <Person> people = { Person("Ana", 30), Person("Maria", 20), Person("Larisa", 40) };
	list <Car> cars = { Car("Ford", 10), Car("BMW", 13), Car("Audi", 5) };

	//The average age of the Person objects

	double people_av = Average_Age<Person>::Comp_Average_Age(people);
	cout << "Average age of people : " << people_av << endl;

	//The average age of the Car objects

	double cars_av = Average_Age<Car>::Comp_Average_Age(cars);
	cout << "Average age of cars: " << cars_av << endl;

	return 0;
};