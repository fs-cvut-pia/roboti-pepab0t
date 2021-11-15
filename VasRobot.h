#pragma once
#include "Bludiste.h"
#include "Prohledavac.h"

class VasRobot: public Prohledavac
{
public:

    VasRobot(std::string name);
    std::string Name;

    bool start(Bludiste& map);
    bool start(BludisteOdkryte& map);
    bool stop();
    void krok(Bludiste& map);
    void krok(BludisteOdkryte& map);
    std::string jmeno();

private:
    char direct = 'D';
    bool on;
    char mode;
};

