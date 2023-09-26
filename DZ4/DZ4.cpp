#include <iostream>
#include <string>

using namespace std;

class Component {
public:
    string name;
    int price;

    Component(string name, int price) {
        this->name = name;
        this->price = price;
    }

    void display() {
        cout << "Название: " << this->name << endl;
        cout << "Цена: " << this->price << endl;
    }
};

class Processor : public Component {
public:
    string socket;
    int core_count;

    Processor(string name, int price, string socket, int core_count) : Component(name, price) {
        this->socket = socket;
        this->core_count = core_count;
    }

    void display() {
        Component::display();
        cout << "Сокет: " << this->socket << endl;
        cout << "Количество ядер: " << this->core_count << endl;
    }
};

class RAM : public Component {
public:
    int volume;
    int speed;

    RAM(string name, int price, int volume, int speed) : Component(name, price) {
        this->volume = volume;
        this->speed = speed;
    }

    void display() {
        Component::display();
        cout << "Объем: " << this->volume << endl;
        cout << "Скорость: " << this->speed << endl;
    }
};

class GraphicsCard : public Component {
public:
    int memory;
    int core_count;

    GraphicsCard(string name, int price, int memory, int core_count) : Component(name, price) {
        this->memory = memory;
        this->core_count = core_count;
    }

    void display() {
        Component::display();
        cout << "Память: " << this->memory << endl;
        cout << "Количество ядер: " << this->core_count << endl;
    }
};

int main() {
    setlocale(LC_ALL, "");
    Processor intel("Intel Core i9", 40000, "LGA1151", 8);
    RAM kingston("Kingston HyperX", 8000, 16, 3200);
    GraphicsCard nvidia("NVIDIA RTX 3090", 200000, 24, 3280);

    intel.display();
    cout << endl;
    kingston.display();
    cout << endl;
    nvidia.display();

    return 0;
}