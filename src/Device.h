#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device {
    private:
        int id;
        std::string name;
    
    public:
        Device(int id, std::string name);
        int getId();
        std::string getName();
};

#endif