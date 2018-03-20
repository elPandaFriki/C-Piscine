#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c){
	write(1, &c, 1);
}

int	omegatron(int size)//size 1 for example
{
	int floor;
	int width;
	int floor_step;

	floor = 1;//the first floor exists
	width = 1;//the first floor exists so at least we have 1 (can't be 0 cause of next 'width +=')
	floor_step = 4;//the first floor has 4 steps (also 1 door and 2 walls but fuck those abnormalities)
	while (floor <= size)//1 <= 1
	{
		width += 2 * (2 + floor);//first floor's first lowest level's width = last width (1) + 2 * (2 + 1) = 5 which is okay
		floor++;
		width += floor_step;//next step width = last width(5) + 4 = 9 which is okay since it's the max
		if (floor % 2 && floor < size)//did you finish setting this floor's level? go to next then
			floor_step += 2;//but remember that each floor grows 1 by each side from the previous one
	}
	width -= floor_step;
	return (width);
}

void	megatron(int decepticons)
{
	int skynet;

	skynet = 0;
	while (skynet < decepticons)//this should be infinite but some people belief Skynet is not retarded af
	{
		ft_putchar(' ');//i dont want to be near that people
		skynet++;
	}
}

void	constructionmachine4000turbo(int size, int floor, int width, int step)
{
	int door;
	int yes;

	door = 1 + 2 * ((floor - 1) / 2); //door is at the middle (floor/2) and grows from 1 for each grow 2 * of floor.
	yes = 0;//https://www.youtube.com/watch?v=sq_Fm7qfRQk
	while (yes < width)
	{
		if (yes == 0)
			ft_putchar('/');//leftside wall really nice
		else if (yes == width - 1)
			ft_putchar('\\');//rightside wall even nicer than leftside cause fuck you leftside wall no one likes you
		else
		{
			if (floor == size && yes >= (width - door) / 2 && yes < (width + door) / 2 && 2 + floor - step <= door) //need to know where the door goes right?
			{
				if (door >= 5 && step == 2 + floor - door / 2 - 1 && yes == (width + door) / 2 - 2) //need a handle to open the door right? RIGHT??
					ft_putchar('$'); //keep the handle i have my shit on that room
				else
					ft_putchar('|'); //let it go (or to die in the cold)
			}
			else
				ft_putchar('*'); //this is not a door
		}
		yes++;
	}
}

void	sastantua(int size)
{
	int height;	//total height
	int floor;	//actual height
	int step;		//actual width
	int width;	//total width

	if (size < 1)//we cant build a castle with 5$
		return ;
	floor = 1;//OMG MOM GAVE ME 50$ MORE
	width = 1;//MOM WE ARE GONNA BUILD A CASTLE AND IT'S GONNA BE HUGE
	while (floor <= size)//well, not too much cause 50$ doesnt mean infinite boxes
	{
		height = 2 + floor;//first floor's height = floor ('1') + 2 = 3; second floor's height = floor (2) + 2 = 4;...
		step = 0;
		while(step < height)//THIS WAS MY PROBLEM WTF BRAIN SIZE IS NOT HEIGHT
		{
			width += 2;
			megatron(( omegatron(size) - width) / 2);//WE NEED TO SET THE AREA FOR MY HUMONGOUS BUILDING AND WHO IS BETTER THAN THE ENEMY OF THE TRANSFORMERS
			constructionmachine4000turbo(size, floor, width, step);//C'MON MANOLO BUILD FASTER
			ft_putchar('\n');//it's lunch time
			step++;
		}
		floor++;
		width += 4 + 2 * ((floor - 2) / 2);//the width grows with every next floor so: width for first floor = previous width('0') + 4 new steps (two at each side) + 2 * ((floor ('1') -2) / 2) (the door and the walls)= 0 + 4 + 2 * (-1/2) = 5
	}
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1;
}

int main(void)  
{  
    int count;  
    int i;
    char c;
    
    count = 0;
    i = 0;  
    do
    {  
      printf("Enter an integer: ");
    }
    while (((scanf("%d%c", &i, &c) != 2 || c != '\n') && clean_stdin()));//This means expecting from the user input an integer and close to it a non numeric character.
    printf("\nEnjoy your new house!\n\n");
		sastantua(i);
    return 0;  
}