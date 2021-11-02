/*********************************************************************************************************
*                                               <Module name>
*						<Module description>
*
*						<Copyright>
*
*						<Copyright or distribution terms>
*
*
*********************************************************************************************************/

/*********************************************************************************************************
*                                               <File description>
*
* Filename	: Filename
* Version	: Module version					
* Programmer(s) : Programmer initial(s)
**********************************************************************************************************
*  Note(s):
*
*
*
*********************************************************************************************************/

/*********************************************************************************************************
 *
 * \file		${file_name}
 * \brief		Descripcion del modulo
 * \date		${date}
 * \author		Nicolas Ferragamo nferragamo@frba.utn.edu.ar
 * \version 
*********************************************************************************************************/

/*********************************************************************************************************
 *** INCLUDES
*********************************************************************************************************/

#include <Arduino.h>
#include <util/delay.h>

/*********************************************************************************************************
 *** DEFINES PRIVADOS AL MODULO
*********************************************************************************************************/

/*********************************************************************************************************
 *** MACROS PRIVADAS AL MODULO
*********************************************************************************************************/
#define SET_PIN(PORT,PIN) (PORT|= 1<<PIN)
#define CLEAR_PIN(PORT,PIN) (PORT&=~(1<<PIN))
#define IS_CLEAR_PIN(PORT,PIN) (((PORT>>PIN)&0x01)==0 ? 1 :0)
#define IS_SET_PIN(PORT,PIN) (((PORT>>PIN)&0x01)==1 ? 1 :0)

// ejemplo si quiere usar una macro para cada botón
#define Boton1 ((PINDC>>PC0)&0x01)

/*********************************************************************************************************
 *** TIPOS DE DATOS PRIVADOS AL MODULO
*********************************************************************************************************/

/*********************************************************************************************************
 *** TABLAS PRIVADAS AL MODULO
*********************************************************************************************************/



/*********************************************************************************************************
 *** VARIABLES GLOBALES PUBLICAS
 *   se escriben en CamelCase y están precedidas por la identificación del 
 *   módulo seguida de un _ 
 *   ej: MEM_POOL  Mem_PoolHeap; 
*********************************************************************************************************/



/*********************************************************************************************************
 *** VARIABLES GLOBALES PRIVADAS AL MODULO
 *   se declaran con static y se escriben en CamelCase y están precedidas por la 
 *   identificación del módulo seguida de un _ y usan _ para separar las palabras
 *   cuando tienen nombres compuestos
 *   ej: static MEM_POOL  Mem_Pool_Heap; 
*********************************************************************************************************/



/*********************************************************************************************************
 *** PROTOTIPO DE FUNCIONES PRIVADAS AL MODULO
 * se declaran como estaticas y se escriben en CamelCase, están precedidas por la
 * identificación del módulo seguida de un _. No se decaran en el .h
 * ej static void Clk_DateTimer(parametros)
*********************************************************************************************************/



/*********************************************************************************************************
 *** FUNCIONES PRIVADAS AL MODULO
*********************************************************************************************************/



/*********************************************************************************************************
 *** FUNCIONES GLOBALES AL MODULO
*********************************************************************************************************/

/**
	\fn  		Nombre de la Funcion
	\brief 		Descripcion
 	\author 	Nombre
 	\date 		${date}
 	\param [in] 	parametros de entrada
 	\param [out] 	parametros de salida
	\return tipo 	y descripcion de retorno
*/





/*

Respetar este pin out.

PC0 -> BOTON 1 
PC1 -> BOTON 2 
PC2 -> BOTON 3 
PC3 -> BOTON 4

PD2 -> LED 1   
PD3 -> LED 2 
PD4 -> LED 3
PD5 -> LED 4 
PD6 -> LED 5 
PD7 -> LED 6
PB0 -> LED 7
PB1 -> LED 8

*/

/*
** The main function. Application starts here.
*/
int main (void)
{
 
 nhinbhuhbuibhhu
  //! aca se escriben las inicializasiones

  while(1)
  {
   //! aca se escribe el programa principal
  }

  return 0;
}

/*********************************************************************************************************
** end of file
*********************************************************************************************************/
