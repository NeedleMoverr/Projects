/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver


 * Author: Magdy Mohammed
 ******************************************************************************/


#include "Port.h"


#ifndef PORT_PBCFG_H_
#define PORT_PBCFG_H_

/*
* SW Module Version is 1.0.0
*/
#define PORT_PBCFG_SW_MAJOR_VERSION             (1U)
#define PORT_PBCFG_SW_MINOR_VERSION             (0U)
#define PORT_PBCFG_SW_PATCH_VERSION             (0U)

/*
* AUTOSAR Version is 4.0.2 compatible
*/
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Check compatibility of Port.h AUTOSAR version with
* Port_PBcfg.c AUTOSAR version.
*/
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
    #error "The AR version of Port.h does not match the expected version"
#endif

/* Check compatibility of Port.h SW version with
* Port_PBcfg.c SW version.
*/
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
    #error "The AR version of Port.h does not match the expected version"
#endif



const Port_ConfigType Port_Configuration= {

     PORT_A,PORT_PIN0,PORT_PIN_IN,PORT_A_PIN_0_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN1,PORT_PIN_IN,PORT_A_PIN_1_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN2,PORT_PIN_IN,PORT_A_PIN_2_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN3,PORT_PIN_IN,PORT_A_PIN_3_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN4,PORT_PIN_IN,PORT_A_PIN_4_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN5,PORT_PIN_IN,PORT_A_PIN_5_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN6,PORT_PIN_IN,PORT_A_PIN_6_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_A,PORT_PIN7,PORT_PIN_IN,PORT_A_PIN_7_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
       /*****************************PORT B**************************/
         PORT_B,PORT_PIN0,PORT_PIN_IN,PORT_B_PIN_0_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN1,PORT_PIN_IN,PORT_B_PIN_1_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN2,PORT_PIN_IN,PORT_B_PIN_2_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN3,PORT_PIN_IN,PORT_B_PIN_3_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN4,PORT_PIN_IN,PORT_B_PIN_4_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN5,PORT_PIN_IN,PORT_B_PIN_5_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN6,PORT_PIN_IN,PORT_B_PIN_6_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_B,PORT_PIN7,PORT_PIN_IN,PORT_B_PIN_7_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
        /**************************PORT C*************************/
     PORT_C,PORT_PIN0,PORT_PIN_IN,PORT_C_PIN_0_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN1,PORT_PIN_IN,PORT_C_PIN_1_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN2,PORT_PIN_IN,PORT_C_PIN_2_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN3,PORT_PIN_IN,PORT_C_PIN_3_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN4,PORT_PIN_IN,PORT_C_PIN_4_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN5,PORT_PIN_IN,PORT_C_PIN_5_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN6,PORT_PIN_IN,PORT_C_PIN_6_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_C,PORT_PIN7,PORT_PIN_IN,PORT_C_PIN_7_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
          /*******************PORT D**********************/
         PORT_D,PORT_PIN0,PORT_PIN_IN,PORT_D_PIN_0_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN1,PORT_PIN_IN,PORT_D_PIN_1_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN2,PORT_PIN_IN,PORT_D_PIN_2_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN3,PORT_PIN_IN,PORT_D_PIN_3_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN4,PORT_PIN_IN,PORT_D_PIN_4_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN5,PORT_PIN_IN,PORT_D_PIN_5_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN6,PORT_PIN_IN,PORT_D_PIN_6_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_D,PORT_PIN7,PORT_PIN_IN,PORT_D_PIN_7_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         /*******************PORT E**********************/
         PORT_E,PORT_PIN0,PORT_PIN_IN,PORT_E_PIN_0_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_E,PORT_PIN1,PORT_PIN_IN,PORT_E_PIN_1_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_E,PORT_PIN2,PORT_PIN_IN,PORT_E_PIN_2_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_E,PORT_PIN3,PORT_PIN_IN,PORT_E_PIN_3_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_E,PORT_PIN4,PORT_PIN_IN,PORT_E_PIN_4_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_E,PORT_PIN5,PORT_PIN_IN,PORT_E_PIN_5_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         /*******************PORT F**********************/
         PORT_F,PORT_PIN0,PORT_PIN_IN,PORT_F_PIN_0_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_F,PORT_PIN1,PORT_PIN_OUT,PORT_F_PIN_1_DIR_CHANG,OFF,STD_LOW,PORT_PIN_MODE_DIO,             //LED
         PORT_F,PORT_PIN2,PORT_PIN_IN,PORT_F_PIN_2_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_F,PORT_PIN3,PORT_PIN_IN,PORT_F_PIN_3_DIR_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
         PORT_F,PORT_PIN4,PORT_PIN_IN,PORT_F_PIN_4_DIR_CHANG,PULL_UP,STD_LOW,PORT_PIN_MODE_DIO,        //BUTTON

};
#endif



