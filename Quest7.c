/*Researchers designed one system that classified interactive and noninteractive processes
automatically by looking at the amount of terminal I/O. If a process did not input or
output to the terminal in a 1-second interval, the process was classified as noninteractive
and was moved to a lower-priority queue. In response to this policy, one programmer
modified his programs to write an arbitrary character to the terminal at regular intervals
of less than 1 second. The system gave his programs a high priority, even though the
terminal output was completely meaningless.*/



#include<unistd.h>
#include<stdio.h>

struct Process
{
	int process_id;
	int IO_term;
};

int main()
{
	struct Process P[50],higher_p[50],lower_p[50];
	int hp=0,lp=0;
	int nop;
	printf("Enter the total no. of processes: ");
	scanf("%d",&nop);
	int i=0;
