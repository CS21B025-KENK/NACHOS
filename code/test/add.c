/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
    int i,j,k;
    k= 10;
    	PrintString("Start\n");
	i = VFork(1);
	if(i == 0) {
		k = 11;
	}
	PrintNum(i);
	PrintString("\n");
	PrintNum(k);
	i = VFork(2);
	PrintNum(i);
	PrintString("\n");
	PrintString("Completed\n");

//	while(1);
}
