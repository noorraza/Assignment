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
	while(i<nop)
	{
		printf("\nEnter Process Id for Process %d: ",i+1);
		scanf("%d",&P[i].process_id);
		printf("Enter the timing of I/O interaction: ");
		scanf("%d",&P[i].IO_term);
		i++;
		
	}
	for(int t=0,k=0;t<10,k<nop;t++,k++)
	{	
			
		if(P[k].IO_term!=t)
		{	
			lower_p[lp]=P[k];
			lp=lp+1;
		}
		else
		{
			higher_p[hp]=P[k];
			hp=hp+1;
		}
			
	}

	printf("\nProcesses in Lower Priority Queue:\n");
	for(int y=0;y<lp;y++)
	{
	printf("Process Id: %d\n",lower_p[y].process_id);
	}

	printf("\nProcesses in Higher Priority Queue:\n");
	for(int y=0;y<hp;y++)
	{
	printf("Process Id: %d\n",higher_p[y].process_id);
	}
}













