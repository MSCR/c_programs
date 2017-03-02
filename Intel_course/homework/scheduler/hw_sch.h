#include <stdio.h>
#include <unistd.h>
// Include additional libraries needed to compile your program
typedef struct str_process{
	unsigned char activate;		// Indica si el proceso se debe de activar o no
	unsigned char isRunning;	// Status que indica si el proceso esta corriendo o no
	unsigned int start_time;	// Tiempo en el que el proceso se activa
	unsigned int stop_time;		// TIempo en el que el proceso se detiene
	void (*ptr_fun)(void);		//Puntero a la function que el proceso debe de ejecutar 
};

// Include the variables you will need in your programs
