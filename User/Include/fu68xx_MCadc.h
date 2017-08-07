
/************************ (C) COPYRIGHT 2015 FT *******************************
* File Name          : 
* Author             : Application Team  Tom.wang 
* Version            : V2.0.0
* Date               : 06/15/2015
* Description        : 
********************************************************************************
/*******************************************************************************
* All Rights Reserved
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FU68XX_ADC_H
#define __FU68XX_ADC_H

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

* Function Name  : ADC_Config    
* Description    : ADC����
* Input          : 
* Output         : None
* Return         : None
*******************************************************************************/
void ADC_Config(void);

/*******************************************************************************
* Function Name  : ADCInit    
* Description    : adc��ʼ��
* Input          : 
* Output         : None
* Return         : None
*******************************************************************************/
void ADCInit(void);

/*******************************************************************************
* Function Name  : ADCGetValue    
* Description    : adc���ݶ�ȡ
* Input          : 
* Output         : None
* Return         : None
*******************************************************************************/
void ADCGetValue(void);

* Function Name  : ADCGetConversionValue    
* Description    : adcת��
* Input          : 
* Output         : None
* Return         : None
*******************************************************************************/
void ADCGetConversionValue(void);

/*******************************************************************************
* Function Name  : ADCGetFastValue    
* Description    : ����ADC����
* Input          : 
* Output         : None
* Return         : None
*******************************************************************************/
extern void ADCGetFastValue(void);

/*******************************************************************************
* Function Name  : FastADConvert    
* Description    : ����ADC����
* Input          : 
* Output         : None
* Return         : None
*******************************************************************************/
extern void FastADConvert(void);
#endif /* __HD_init_H */

/******************* (C) COPYRIGHT 2014 FT *****END OF FILE****/