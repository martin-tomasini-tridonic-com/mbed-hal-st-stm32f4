/*
 * crc_api.h
 *
 *  Created on: 11. Apr. 2016
 *      Author: martin.tomasini2
 */
#include "crc_api.h"
#include "cmsis.h"

static uint32_t l_CRC;

/* CRC handler declaration */
CRC_HandleTypeDef   CRC_HandleStruct;

int Init()
{
    __HAL_RCC_CRC_CLK_ENABLE();
    CRC_HandleStruct.Instance = CRC;
    HAL_CRC_Init(&CRC_HandleStruct);
}

int Reset()
{

}

int CalcSingle(uint8_t* ui32StartAddress, uint32_t ui32DataSize, uint32_t* pui32CRC)
{
   *pui32CRC = 2;
   return 0;
}

int CalcAccumulate(uint8_t* ui32StartAddress, uint32_t ui32DataSize, uint32_t* pui32CRC)
{
    *pui32CRC = 3;
    return 0;
}

