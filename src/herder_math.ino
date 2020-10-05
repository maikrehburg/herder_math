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

// Subtrahiert zwei Zahlen vom Typ Integer miteinander und gibt einen Integer zurueck
int HerderSub(int num1, int num2)
{
    return num1 - num2;
}

// Verdoppelt eine Zahl vom Typ Integer und gibt sie als Integer zurueck. Sie ist gerade.
int HerderDup(int num1)
{
    return num1 * 2;
}

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int num1 = 3;
    int num2 = 4;

    Serial.print("HerderAdd: ");
    Serial.println(HerderAdd(num1, num2));

    Serial.print("HerderSub: ");
    Serial.println(HerderSub(num1, num2));

    Serial.print("HerderDup: ");
    Serial.println(HerderDup(num1));

    Serial.println("");
    delay(1000);
}
