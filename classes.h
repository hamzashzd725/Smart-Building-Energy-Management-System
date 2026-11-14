#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct t {
    int hours;
    int minutes;
    int seconds;
};

struct lightType {
    bool white;
    bool yellow;
    bool blue;
};

struct Power {
    double power;
    double consumtion;
    double rating;
};

class ElectricalDevice {
    // 
    private:
        // ID , Room ID, Scenario, time stamp, 
        int deviceID, RoomID;
        string Scenario;
        t time;
    protected:
        // Name, Power Rating, Status, Energy, Cost
        string deviceName;
        double Energy, Cost;
        Power devicePower;
        bool status;
    public:
        // Power Calculation, Power Consumption, Updating Device Behaviour, Display
        ElectricalDevice () {
            
        }
        double powerCalc () {

        }

        double powerConsumtion () {

        }
        void updateDeviceBehaviour() {

        }
        void display () {

        }
};

class AirConditioner : public ElectricalDevice {
    //
    private:
        // Temp, Mode, Co2 Index, ID
        int deviceID;
        double Temperature, co2Index;
        string mode;
    public:
        // Sleep, Temperature Set, Display, Carbon emission calculation
        void setSleepTime() {

        }
        void setTemperature() {

        }
        void display() {

        }
        void calculateCarbonEmission() {

        }
};

class Light : public ElectricalDevice {
    //
    private:
        // WHite, Yellow, Blue, Type, ID, brightness
        lightType light;
        float brightness;
    public:
        // display, sleep
        void setBrightness() {

        }
        void setMode() {

        }
};

class Fan : public ElectricalDevice {
    private:
        // Motor Type, Mode, Speed, ID
        string motorType;
        int speed;

    protected:
    //
    public:
        // Control speed, change mode, display
        void controlSpeed() {

        }
        void changeMode() {
            
        }
        void display() {

        }
};

class Heater : public ElectricalDevice {
    //
    private:
        // temp, ID
        double temperature;
    public:
        // temp control, timer,
        double setTemperature() {

        }
        void setTime() {

        } 
};

class Room {
    //
    private:
        // room ID, Electrical device, comfort range, acceptable temp, power consumption
        int roomID, numDevices;
        ElectricalDevice *device;
        double comfortRange, acceptableTemperature;
        Power roomPower;
    public:
        // display, set Range, Set temperature, Calc power consumtion
        void display() {

        }
        void setRangeTemp() {

        }
        void calculateRoomPower() {

        }
        void setRoomTemp() {

        }
};

class Building {
    //
    private:
        // Room, Total power consumtion, total number of rooms, under comfort range
        Room *room;
        Power buildingPower;
        int numRooms;
    public:
    // calc power consumption
    void calculateTotalPowerConsumtion() {

    }
};

class DataLogger {
    //
    private:
    // Input file, Room, Building, ELectrical device
    ifstream infile;
    ofstream ofile;
    Room *rooms;
    Building* buildings;
    ElectricalDevice* devices;
    protected:
    
    public:
    // building, devices, Set values by reading each file in objects of Room, Building and electrical devices
    void getValues() {

    }
    void logData() {

    }
};

/*
 class GUI {

};
*/
