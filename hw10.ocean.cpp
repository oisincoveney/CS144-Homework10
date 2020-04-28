//
// Created by oisin on 4/27/2020.
//
#include "hw10.ocean.h"
#include "hw10.sea.h"


Ocean::Ocean() {
    seas.push_back(new Sea(0, 0, true));
}

void Ocean::SimulateOneStep(){
    for(int i = 0; i < seas.size(); ++i) {
        seas[i]->SimulateOneStep();
    }
}

void Ocean::MakeAndConnectSea(int sx, int sy) {}

void Ocean::Print() {}

void Ocean::PopulationCensus(int& nshark, int& nfish) {}

