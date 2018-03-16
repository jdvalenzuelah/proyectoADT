/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h" 
#include "abdrive.h"
#include "ping.h"

//Moverse hacia delante
void move()
{
  drive_ramp(128,128);
}

// Cruzar hacia la derecha
void turn_right()
{
<<<<<<< HEAD
  drive_goto(26,-25);s
  
=======
  drive_goto(26,-25);
>>>>>>> 74bb5d5c4b20e59d9d50481c044cf14b192368fd
}

// Cruzar hacia la izquierda
void turn_left(){
  drive_goto(-26,25);
}  

// Vuelta de 180 grados
void oneETurn(){
  turn_right();
  pause(20);
  turn_right();
}
  
// Funcion principal del programa
int main()                          
{
  // Add startup code here.
  
 // loop del programa
  while(1)
  {
    // Si no hay nada al frente nos movemos
    if(ping_cm(8) > 18){
      move();
    }      
    
    // Si hay algo por delante paramos y cruzamos a la derecha
    if(ping_cm(8) < 18){
      drive_ramp(0,0);
      turn_right();
    }
                    
  }  
  
}
