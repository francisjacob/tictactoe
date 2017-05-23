#include<stdio.h>
int checkwin(int box[3][3],int pos)
{
	int i,j;
	for(i=0;i<3;i++)
		if(box[i][0]==pos && box[i][1]==pos && box[i][2]==pos)
			return 1;
	for(i=0;i<3;i++)
		if(box[0][i]==pos && box[1][i]==pos && box[2][i]==pos)
			return 1;
	if(box[0][0]==pos && box[1][1]==pos && box[2][2]==pos)
		return 1;
	if(box[0][2]==pos && box[1][1]==pos && box[2][0]==pos)
		return 1;
	return 0;
}

int main()
{
	int box[3][3];
	int i,j,count=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			box[i][j]=0;
	
	int flag=0;
	int pos1,pos2,win=0;
	while(count<9)
	{ 
	if(flag==0)
	{
		printf("The positions available are:");
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				if(box[i][j]==0)
					printf("\t %d %d",i+1,j+1);
		printf("\n");
		scanf("%d %d",&pos1,&pos2);
		if(pos1>0 && pos1<4 &pos2>0 &pos2<4)
		{
			box[pos1-1][pos2-1]=1;
		}
		else
			printf("invalid entry");
		win=checkwin(box,1);
		if(win == 1)
		{
			printf("\nplayer 1 won the game");
			break;
		}
		flag=1;
		count++;
			
	}
	else	
	{
		printf("The positions available are:");
                for(i=0;i<3;i++)
                        for(j=0;j<3;j++)
                                if(box[i][j]==0)
                                        printf("\t %d %d",i+1,j+1);
                printf("\n");
		scanf("%d %d",&pos1,&pos2);
                if(pos1>0 && pos1<4 &pos2>0 &pos2<4)
                {
                        box[pos1-1][pos2-1]=2;
                }
                else
                        printf("invalid entry");
                win=checkwin(box,2);
                if(win == 1)
                {
                        printf("\nplayer 2 won the game");
                        break;
                }
                flag=0;
                count++;
	}
	}
	if(count==9)
		printf("draw matcch");

}
	
