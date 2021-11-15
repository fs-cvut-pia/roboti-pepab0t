#include "VasRobot.h"
#include <iostream>

VasRobot::VasRobot(std::string name) {
	Name = name;
}

bool VasRobot::start(Bludiste& map) {
	on = true;
	mode = 'v';
	return on;
}

bool VasRobot::start(BludisteOdkryte& map) {
	on = true;
	mode = 'v';
	return on;
}

bool VasRobot::stop() {
	on = false;
	return !on;
}

void VasRobot::krok(Bludiste& map) {
//	std::cout << "krok" << std::endl;
    if (mode == 'v') {
        if (direct == 'D'){
            if (!map.nahoru()){
                map.vpravo();
                direct = 'N';
            }
        } else if (direct == 'N') {
            if (!map.dolu()){
                map.vpravo();
                direct = 'D';
            }
        }
    }

//	std::cout << map.poloha().x << ", " << map.poloha().y << mode <<std::endl;
}

void VasRobot::krok(BludisteOdkryte& map) {
//	std::cout << "krok" << std::endl;
    if (mode == 'v') {
        if (direct == 'D'){
            if (!map.nahoru()){
                map.vpravo();
                direct = 'N';
            }
        } else if (direct == 'N') {
            if (!map.dolu()){
                map.vpravo();
                direct = 'D';
            }
        }
    }

//	std::cout << map.poloha().x << ", " << map.poloha().y << mode <<std::endl;
}

std::string VasRobot::jmeno() {
	return Name;
}
