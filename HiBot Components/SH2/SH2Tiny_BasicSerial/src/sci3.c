#include "iodefine.h"
#include "sci3.h"

void	myputc_sci3(char c);	//����ꕶ�����M
void	myputs_sci3(char* s);	//���앶���񑗐M

void init_sci3(void)
{
	INTC.IPRI.WORD		|= 0x0700;	
	SCI3.SCR.BYTE = 0x70;	//0111 00xx�@��M���荞�݁C����M���\��
	SCI3.SMR.BYTE = 0x00;	// 0000 0000 ��������8bit�m���p���e�BSTOP1bit
	SCI3.BRR      = 5;		// P��=22MHz, bps=115200 �� n=0,N=5
}
/************************************/

void	myputc_sci3(char c)
{
	while(!SCI3.SSR.BIT.TDRE);			//���M�\��Ԃ܂ő҂D
	SCI3.TDR = c;
	SCI3.SSR.BIT.TDRE = 0;				/* TDRE �N���A			*/

}

void	myputs_sci3(char* s)
{
	short i;

	for(i=0; s[i]; i++)
	{
		while(!SCI3.SSR.BIT.TDRE);			//���M�\��Ԃ܂ő҂D
		SCI3.TDR = s[i];
		SCI3.SSR.BIT.TDRE = 0;				/* TDRE �N���A			*/
	}

}



