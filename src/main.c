/**
 * @file playing_with_characers.c
 * @author Mohadeseh_Forghani (m4ghaniofficial@gmail.com)
 * @brief It is about  how to take all type of characters as input by using secureInput.h geader in C and 
 * print them as output.
 * @version 0.2.0
 * @date 25 jul 2021
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "secureInput.h"

int main()
{
    struct input data;

    initMemory(&data);

    getCharacter(&data);

    getWord(&data);

    getSentence(&data);


    printf("%c\n",data.character);

    printf("%s\n",data.word);

    printf("%s\n",data.sentence);
   
    cleanData(&data);

    return 0;
}
