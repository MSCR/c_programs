#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */

void Init_timer();

void main(void) {

  Init_timer();
  SOPT1=0x02;
  EnableInterrupts; /* enable interrupts */
  /* include your code here */



  for(;;) {
    
  } /* loop forever */
  /* please make sure that you never leave main */
}

void Init_timer(){
  TPM1SC=0x4E;
  
  TPM1C0SC=0x44;
  
}

interrupt VectorNumber_Vtpm1ch0 void TPM_ISR(void){

}