/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#pragma once
#include "project.h"
#include <stdio.h>
#include "batteriControl.h"
#include "kadenceControl.h"
#include "trykControl.h"
#include "BLECommunication.h"

typedef struct POPEapp
{
    uint16 power;
    bool occupied;
    
}POPEapp;


void wakeUp();
uint16 calculatePower(uint32 vaegt, uint16 kadence);
bool testKadence(uint16 kadence);
void startIdleCountdown();
void resetIdleCountdown();
void sleep();
bool occupyPOPE();
bool calibratePOPE();

/* [] END OF FILE */
