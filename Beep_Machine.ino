
 /*
  * Author: Mitchell Palermo
  * Date Created: 9-21-17
  * 
  * Created for Anne Weber for Psych Program
  */




long randNumber1; //establishes randNumber1
void setup ()
{
  for(int i = 0; i < 38; i++)
  {
    tone(11, 4500);//begins playing tone on digital I/O pin #11
    delay(250);//sustains tone for a quarter of a second
    noTone(11);//stops playing tone on pin #11
    delay(2000);//waits 2 seconds before playing another tone
  }

}

void loop ()
{
  
  }
