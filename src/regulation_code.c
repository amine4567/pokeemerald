#include "global.h"

u8 CharToDec(u8 character)
{
    if(character >= 161 && character <= 170){
        return character - 161;
    }
    if(character >= 187 && character <= 192){
        return character - 177;
    }
}

u16 Get_RegCode_Species(u8 regCode[REGULATION_CODE_LENGTH])
{
    return CharToDec(regCode[2])*16*16 + CharToDec(regCode[1])*16 + CharToDec(regCode[0]);
}