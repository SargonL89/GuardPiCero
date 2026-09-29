#include <iostream>
#include "Device.h"
using namespace std;

int main(){
    Device camera(1, "Camara entrada");

    cout << "ID: " << camera.getId() << endl;
    cout << "Nombre: " << camera.getName() << endl;
}