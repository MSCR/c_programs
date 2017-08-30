#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include <stdio.h>

void Start_up(void);
void Init_SCI(void);
void print(char *string);

void Start_up(void){
  SOPT1=0x02;       //Desabilitar Watchdog
  Init_SCI();       //Inicializar el modulo SCI
}

void Init_SCI(void){
  SCI1BDH=0x00;     
  SCI1BDL=0x11;     //Baud Rate de 9600
  SCI1C1=0x00;      //No Loop Mode, no stop SCI en wait mode, 9 bits, Paridad habilitada, Paridad impar
  SCI1C2=0x08;      //Interrupcion en transmision completa, interrupcion para receiver,Transmitter y
                    //Receiver habilitado
  SCI1C3=0x00;      //Transmitter como output, Interrupcion para error de paridad. 
  //SCI1S1=0x0;
}

void print(char *string){
  SCI1D=0xD;
  while (*string != 0x0){
    SCI1S1=0x00;
    SCI1D=*string++;  //Mientras el puntero no llegue al caracter null seguira enviando caracteres
  }
  SCI1D='\n';  
}

void main(void) {
  
  Start_up();
  EnableInterrupts; /* enable interrupts */
  print("Hola mundo");

  for(;;) {
  } 
}                                                        

interrupt VectorNumber_Vsci1tx void Transmitter_SCI(void){
  SCI1C2=0x08;
  SCI1S1=0x00;         //Reiniciar las banderas despues de la transmision  
}

interrupt VectorNumber_Vsci1rx void Receiver_SCI(void){

}

interrupt VectorNumber_Vsci1err void Error_SCI(void){

}
