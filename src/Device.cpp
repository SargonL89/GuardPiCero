#include "Device.h"

Device::Device(int id, std::string name){
    this->id = id;
    this->name = name;
}

int Device::getId(){
    return id;
}

std::string Device::getName(){
    return name;
}