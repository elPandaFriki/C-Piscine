#include <stdio.h>

int isAvailable(int puzzle[][9], int row, int col, int num)
{
  int rowStart;
  int colStart;
  int i;
  int j;

	rowStart = (row / 3) * 3;
	colStart = (col / 3) * 3;
	i = 0;
  while (i < 9)
  {
    if (puzzle[row][i] == num) return 0;
    if (puzzle[i][col] == num) return 0;
    if (puzzle[rowStart + (i % 3)][colStart + (i / 3)] == num) return 0;
    i++;
  }
  return 1;
}

int fillSudoku(int puzzle[][9], int row, int col)
{
  int i;
  if (row < 9 && col < 9)
  {
    if (puzzle[row][col] != 0)
    {
      if ((col + 1) < 9) return fillSudoku(puzzle, row, col + 1);
      else if ((row + 1) < 9) return fillSudoku(puzzle, row + 1, 0);
      else return 1;
    }
    else
    {
    	i = 0;
      while (i < 9)
      {
        if (isAvailable(puzzle, row, col, i + 1))
        {
          puzzle[row][col] = i + 1;
          if ((col + 1) < 9)
          {
            if (fillSudoku(puzzle, row, col + 1)) return 1;
            else puzzle[row][col] = 0;
          }
          else if ((row + 1)<9)
          {
            if (fillSudoku(puzzle, row + 1, 0)) return 1;
            else puzzle[row][col] = 0;
          }
        	else return 1;
        }
        i++;
      }
    }
    return 0;
  }
  else return 1;
}


int main(void)
{
	int i;
	int j;
	int intoku[9][9];
	char chardoku[9][9] = {{"8........"},
												 {"..36....."},
												 {".7..9.2.."},
												 {".5...7..."},
												 {"....457.."},
												 {"...1...3."},
												 {"..1....68"},
												 {"..85...1."},
												 {".9....4.."}};
	printf("This is your original sudoku:\n\n");
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("%c ", chardoku[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
	  while (j < 9)
	  {
	  	if (chardoku[i][j] == '.')
	  		intoku[i][j] = 0;
	  	else
	  		intoku[i][j] = chardoku[i][j] - '0';
	  	j++;
	  }
	  i++;
	}
	printf("\n\n\nThis is your resolved sudoku:\n\n");
	if(fillSudoku(intoku, 0, 0))
  {
  	i = 0;
    while (i < 9)
    {
    	j = 0;
      while (j < 9)
      {
      	printf("%d ", intoku[i][j]);
      	j++;
      }
      printf("\n");
      i++;
    }
  }
  else printf("\n\nNO SOLUTION\n\n");
	return (0);
}