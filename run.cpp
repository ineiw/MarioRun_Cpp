#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
  COORD Pos {x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
CONSOLE_CURSOR_INFO cursorInfo = { 0, };
int main(int argc, char* argv[]){
  int arr[20][20]={0,};
  int cnt=0;
  // cursor info
  cursorInfo.dwSize = 1; //cursor thick
	cursorInfo.bVisible = FALSE; // visible bool
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
  

  // displaying map

  while(0<1)
  {
    for(int i=0;i<10;i++)
    {
      for(int j=0;j<10;j++)
      {
        printf("%d",arr[i][j]);
      }
      printf("\n");
    }
    cnt++;
    printf("%d",cnt);
    gotoxy(0,0);

  }
  return 0;
}
