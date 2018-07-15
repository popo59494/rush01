#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
} 
//affichage
void	display(char **argv)
{
	int y;
	int x;
	
	y = 1;
	x = 0;
	while (y < 10)
	{
		while (x < 9)
		{
			ft_putchar(argv[y][x]);
			if (x != 8)
				ft_putchar(' ');
			x++;
		}
		x = 0;
		ft_putchar('\n');
		y++;
	}
}

//test pour ligne
int		checkline(int test, char **grid, int y)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (grid[y][x] == test)
			return (0);
		x++;
	}
	return (1);
}
// test pour colonne
int		 checkcolumn(int test, char **grid, int x)
{
	int y;

	y = 0;
    while (y < 9)
	{
        if (x[y][x] == k)
            return (0);
		y++;
	}
    return (1);
}
// test pour block
int		 checkblock(int test, char **grid, int y, int x)
{
    int yblock;
	int xblock;

	yblock = y-(y%3) + 1;
	xblock = x-(x%3);
	y = yblock;
	x = xblock;
    while (y < yblock+3)
	{
        while (x < xblock+3)
		{
            if (grille[y][x] == test)
                return (0);
			x++;
		}
		x = 0;
		y++;
	}
    return (1);
}
//test validite
int  estValide (char **grid, int position)
{
	int y;
	int x;
	int test;
	// si position > 81 alors grille finie
    if (position == 9*9)
        return (1);

    y = position/9; 
	x = position%9;
	test = 1
	// si deja un chiffre alors on passe au suivant
    if (argv[y][x] != 0)
        return estValide(argv, position+1);
	// test des chiffre
    while (test <= 9)
    {	//tests pour lignes, colonnes et blocks
        if (checkline(test,argv,y) && checkcolumn(test,argv,x) && checkblock(test,argv,y,x))
        {
            argv[y][x] = test;

            if ( estValide (argv, position+1) )
                return (1);
        }
		test++;
    }
    argv[y][x] = 0;

    return (0);
}

int main (int argc, char **argv)
{
	display(argv);
	return (0);
}

