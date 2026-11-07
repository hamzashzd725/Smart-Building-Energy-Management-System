#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class ElectricalDevice {
    // 
    private:
    // ID , Room ID, Scenario, time stamp, 
    protected:
    // Name, Power Rating, Status, Energy, Cost
    public:
    // Power Calculation, Power Consumption, Updating Device Behaviour, Display
};

class AirConditioner : public ElectricalDevice {
    //
    private:
    // Temp, Mode, Co2 Index, ID
    protected:
    // 
    public:
    // Sleep, Temperature Set, Display, Carbon emission calculation
};

class Light : public ElectricalDevice {
    //
    private:
    // WHite, Yellow, Blue, Type, ID, brightness
    protected:
    // 
    public:
    // display, sleep
};

class Fan : public ElectricalDevice {
    //
    private:
    // Motor Type, Mode, Speed, ID
    protected:
    //
    public:
    // Control speed, change mode, display
};

class Heater : public ElectricalDevice {
    //
    private:
    // temp, ID
    protected:
    //
    public:
    // temp control, timer, 
};

class Room {
    //
    private:
    // room ID, Electrical device, comfort range, acceptable temp, power consumption 
    protected:
    //
    public:
    // display, set Range, Set temperature, Calc power consumtion
};

class Building {
    //
    private:
    // Room, Total power consumtion, total number of rooms, under comfort range
    protected:
    //
    public:
    // calc power consumption
};

class DataLogger {
    //
    private:
    // Input file, Room, Building, ELectrical device
    protected:
    
    public:
    // building, devices, Set values by reading each file in objects of Room, Building and electrical devicesj
};

/*
 class GUI {

};
*/
