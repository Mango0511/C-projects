#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class car{
    public:
        int wheel;
        int person;
        char name[20];
    private:
    char engine[20];
};

int main(void){
    car bus, truck, taxi;

    strcpy(bus.name, "Bus");
    bus.wheel = 6;
    bus.person = 40;

    strcpy(truck.name, "Truck");
    truck.wheel = 8;
    truck.person = 3;

    strcpy(taxi.name, "Taxi");
    taxi.wheel = 4;
    taxi.persion = 5;

    printf("%s have %d wheels, %d persons",bus.name,bus.wheel, bus.person);
    printf("%s have %d wheels, %d persons",truck.name,truck.wheel, truck.person);
    printf("%s have %d wheels, %d persons",taxi.name,taxi.wheel, taxi.person);
    return 0;
}