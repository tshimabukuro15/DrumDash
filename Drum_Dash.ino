#include <MeggyJrSimple.h>    // Required code, line 1 of 2.
//Global variables go here
int xcoord = 2;
int ycoord = 2;

int mountains[8] = {0, 0, 0, 0, 0, 0, 0, 0}; // Create initial array with all zeros.
int SLOPE = 3; // This determines how much the elevation changes between columns.
int MAXHEIGHT = 4;
void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop() // run over and over again
{
DrawMountains();
DisplaySlate();
delay(500);
ClearSlate();
}
void DrawMountains()
{
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < mountains[i]; j++)
{
DrawPx(i,j,Green);
}

{
  CheckButtonsPress();

  if (Button_Right)
  {
    if(xcoord < 7)
     xcoord = xcoord + 1; // Also xcoord++;
  }

  if (Button_Left)
  {
    if(xcoord > 0)
    
    xcoord = xcoord -1;
  }
  
  if (Button_A)
  {
    if (ycoord < 3)
    ycoord = ycoord + 4;
  }
 
 
  DrawPx(xcoord,ycoord,Red); //Draws Dot

  
  DisplaySlate();
  delay(1);
 ClearSlate();
}
