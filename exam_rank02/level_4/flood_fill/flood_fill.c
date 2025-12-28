#include "flood_fill.h"

static void	fill(char **tab,char target,t_point size,int y, int x)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if ( tab[y][x] == 'F' || tab[y][x] != target)
		return ;
	tab[y][x] = 'F';
	fill(tab,target,size,y + 1,x);
	fill(tab,target,size,y - 1,x);
	fill(tab,target,size,y,x + 1);
	fill(tab,target,size,y,x - 1);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	if (!tab || !*tab)
		return ;
	char target = tab[begin.y][begin.x];
	fill(tab,target,size,begin.y,begin.x);
}
