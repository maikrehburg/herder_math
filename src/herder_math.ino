/* excercise for git workshop:
** Implement math functions in this file and use them in loop function.
** Commit your changes to your local repository and push it to github to make is accessible for the other students
*/


// -- math functions --------------------------


// Addiert zwei Zahlen vom Typ Integer miteinander und gibt einen Integer zurueck
int HerderAdd(int num1, int num2)
{
    return num1 + num2;
}

int HerderPower(int num)
{
    return num*num;
}

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int num1 = 3;
    int num2 = 4;
	int num3 = 19;

    Serial.print("HerderAdd: ");
    Serial.println(HerderAdd(num1, num2));
	
	Serial.print("HerderPower: ");
    Serial.println(HerderPower(num3));

    Serial.println("");
    delay(1000);
}