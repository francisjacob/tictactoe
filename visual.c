void draw(int box[3][3])
{
	int i,j,x=0,y=0;
	for(i=0;i<5;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<5;j++)
			{
		
				if(j%2==0)
				{
					if(box[x][y]==1)
						printf("x");
					else if(box[x][y]==2)
						printf("o");
					else
						printf(" ");
					y++;
				}
				else
					printf(" | ");
			}
			y=0;
			x++;
			
		}
		else
		{
			printf("\n -- -- -- \n");
		}
	}	
}
