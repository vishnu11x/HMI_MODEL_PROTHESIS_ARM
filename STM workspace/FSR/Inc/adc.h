/*
 * adc.h
 *
 *  Created on: Sep 21, 2024
 *      Author: Vishnu
 */

#ifndef ADC_H_
#define ADC_H_


#include <stdint.h>
#include <stdio.h>
#include <arm_math.h>
#include <stm32f4xx.h>

#define NUM_SAMPLE 3
#define ADC_VREF         3.3         // ADC reference voltage
#define ADC_RES          (pow(2,12)-1)  // Resolution of ADC (12-bit)

extern volatile uint16_t dma2_status;
extern volatile uint32_t adc_data[NUM_SAMPLE];
extern float_t adc_vdata[NUM_SAMPLE];



void adc_init(void);
void adc_start(void);
void adc_convert(void);

#endif /* ADC_H_ */
