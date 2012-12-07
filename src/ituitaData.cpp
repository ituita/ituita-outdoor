//
//  ituitaData.cpp
//  ituita-outdoor
//
//  Created by Felipe Turcheti on 8/15/12.
//

#include "ituitaData.h"

ituitaData::ituitaData() {
    initDataArrays();
}

void ituitaData::initDataArrays() {
    for(int i = 0; i < 3; i++) {
        personalData[i] = -1;
        neighborhoodData[i] = -1;
        cityData[i] = -1;
    }    
}

void ituitaData::generateRandomValues(int min, int max) {
    for(int i = 0; i < 3; i++) {
        personalData[i] = ofRandom(min, max);
        neighborhoodData[i] = ofRandom(min, max);
        cityData[i] = ofRandom(min, max);
    }
}

// --------------------------------------------
// MARK: GETTERS FOR PERSONAL DATA

int ituitaData::getPersonalNegatives() {
    return personalData[NEGATIVE];
}
int ituitaData::getPersonalNeutrals() {
    return personalData[NEUTRAL];
}
int ituitaData::getPersonalPositives() {
    return personalData[POSITIVE];
}

// --------------------------------------------
// MARK: GETTERS FOR NEIGHBOORHOOD DATA

int ituitaData::getNeighborhoodNegatives() {
    return neighborhoodData[NEGATIVE];
}
int ituitaData::getNeighborhoodNeutrals() {
    return neighborhoodData[NEUTRAL];
}
int ituitaData::getNeighborhoodPositives() {
    return neighborhoodData[POSITIVE];
}

// --------------------------------------------
// MARK: GETTERS FOR CITY DATA

int ituitaData::getCityNegatives() {
    return cityData[NEGATIVE];
}
int ituitaData::getCityNeutrals() {
    return cityData[NEUTRAL];
}
int ituitaData::getCityPositives() {
    return cityData[POSITIVE];
}


