#include "stDynamicType.h"

tDynamicType::~tDynamicType()
{
}

char *
tDynamicType::convertDataToChar()
{
    char *dataChar = new char(sizeof (this->Data));
    memcpy(dataChar, this->Data, sizeof (this->Data));
    return dataChar;
};

void
tDynamicType::setData(double *data)
{
    this->Data = data;
}
