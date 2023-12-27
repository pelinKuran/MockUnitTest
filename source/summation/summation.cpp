#include "summation.h"

bool Summation::onMessageARequested(int unitID, int clientID, int mode, float value)
{
    Mode a;
    if (unitID == 001 && clientID == 0)
    {
    
        if (mode == a.VALUE)
        {
            flag1 = true;
            flag2 = false;
            flag3 = true;
        
        }
        if (mode == a.SPEED)
        {
            if (value == 1.0f)
            {
                flag1 = true;
                flag2 = true;
            }
            else
            {
                flag1 = true;
                flag2 = true;
            }
        }
        return flag2;
    }
    return flag2;
}

Summation::Summation()
{
}

Summation::~Summation()
{
}
