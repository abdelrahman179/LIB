/****************************************************************/
/*   Author             :    AbdElrahman Ibrahim Zaki		    */
/*	 Date 				:                                         */
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Bit Math File                      */
/****************************************************************/

// Guard File

#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(REG , BIT_NUM)  REG  |=  (1 << BIT_NUM)

#define CLR_BIT(REG , BIT_NUM)  REG  &= ~(1 << BIT_NUM)

#define TGL_BIT(REG , BIT_NUM)  REG  ^=  (1 << BIT_NUM) 

#define GET_BIT(REG , BIT_NUM)  ( (REG >> BIT_NUM) & 1 )

#endif
