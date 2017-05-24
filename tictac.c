#include<stdio.h>
#include<stdlib.h>
#include"visual.c"
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
	//	printf("The positions available are:");
	//	for(i=0;i<3;i++)
	//		for(j=0;j<3;j++)
	//			if(box[i][j]==0)
	//				printf("\t %d %d",i+1,j+1);
		draw(box);
		printf("\n Enter play 1's move:\t");
		scanf("%d %d",&pos1,&pos2);
		if(pos1>0 && pos1<4 &pos2>0 &pos2<4 && box[pos1-1][pos2-1]!=2 )
		{
			box[pos1-1][pos2-1]=1;
		}
		else
		{
			printf("invalid entry\n");
			continue;
		}
		win=checkwin(box,1);
		printf("\n");
		if(win == 1)
		{
			draw(box);
			printf("\nplayer 1 won the game");
			break;
		}
		flag=1;
		count++;
			
	}
	else	
	{
	//	printf("The positions available are:");
        //        for(i=0;i<3;i++)
        //                for(j=0;j<3;j++)
        //                        if(box[i][j]==0)
        //                                printf("\t %d %d",i+1,j+1);
		draw(box);
		count++;
		flag=0;
                int i,j,check=0;
        	for(i=0;i<3;i++)
		{
               		if(box[i][0]==1 && box[i][1]==1 && box[i][2]==0)
                	{
				box[i][2]=2;
				win=checkwin(box,2);
				check=1;
		                printf("\n");
               			 if(win == 1)
               			 {
                       			 draw(box);
                       			 printf("\nplayer 2 won the game");
                       			 exit(0);
               			 }
				continue;
				
			}
		}
		if(check==1)
			continue;
		for(i=0;i<3;i++)
		{
                        if(box[i][0]==1 && box[i][1]==0 && box[i][2]==1)
                        {
                                box[i][1]=2;
                                win=checkwin(box,2);
                                printf("\n");
				check=1;
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                        }
		}
                if(check==1)
                        continue;

		for(i=0;i<3;i++)
                {
		        if(box[i][0]==0 && box[i][1]==1 && box[i][2]==1)
                        {
                                box[i][0]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                check=1;
				 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                        }
		}
                if(check==1)
                        continue;
		
        	for(i=0;i<3;i++)
		{
                	if(box[0][i]==1 && box[1][i]==1 && box[2][i]==0)
                       	{
				box[2][i]=2;
                                win=checkwin(box,2);
				check=1;
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


			}
		}
                if(check==1)
                        continue;

		for(i=0;i<3;i++)
		{
                        if(box[0][i]==1 && box[1][i]==0 && box[2][i]==1)
                        {
                                box[1][i]=2;
                                win=checkwin(box,2);
				check=1;
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                        }
		}
                if(check==1)
                        continue;

		for(i=0;i<3;i++)
		{
                        if(box[0][i]==0 && box[1][i]==1 && box[2][i]==1)
                        {
                                box[0][i]=2;
                                win=checkwin(box,2);
                                printf("\n");
				check=1;
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                        }
		}
                if(check==1)
                        continue;

        	if(box[0][0]==1 && box[1][1]==1 && box[2][2]==0)
                {
			box[2][2]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


		}
		if(box[0][0]==1 && box[1][1]==0 && box[2][2]==1)
                {
                        box[1][1]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                }
		if(box[0][0]==0 && box[1][1]==1 && box[2][2]==1)
                {
                        box[0][0]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                }

        	if(box[0][2]==1 && box[1][1]==1 && box[2][0]==0)
              	{
			box[2][0]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


		}
		if(box[0][2]==1 && box[1][1]==0 && box[2][0]==1)
                {
                        box[1][1]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                }
		if(box[0][2]==0 && box[1][1]==1 && box[2][0]==1)
                {
                        box[0][2]=2;
                                win=checkwin(box,2);
                                printf("\n");
                                 if(win == 1)
                                 {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                                 }
                                continue;


                }
		int x1,y1;
	//	int randflag=0;
		while(1)
		{
			x1= rand()%3;
			y1= rand()%3;
			if(box[x1][y1]==0)
				break;
		}
		box[x1][y1]=2;
                win=checkwin(box,2);
                printf("\n");
                if(win == 1)
                {
                                         draw(box);
                                         printf("\nplayer 2 won the game");
                                         exit(0);
                 }
                               

			
        

	}	
	}
	if(count==9)
	{
		draw(box);	
		printf("draw match");
	}

}
	
