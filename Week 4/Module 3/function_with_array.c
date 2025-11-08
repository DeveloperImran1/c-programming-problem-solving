#include <stdio.h>

void setNewValue(int x)
{
    x = 100;
}

void setNewValueInArray(int arr[])
{
    arr[0] = 100;
}

int main()
{
    int x = 10;
    setNewValue(x);
    printf("%d\n", x); // Output: 10  --> karon function er moddhe value pass hoiase, reference pass hoini. Jarfole new value set hoini.

    int myArr[5] = {10, 20, 30, 40, 50};
    setNewValueInArray(myArr);
    printf("%d\n", myArr[0]); // Output: 100  --> setNewValueInArray() function er moddhe arrayke pass koresi, jar fole array er 0 number index a new value set hoiase. Tahole kono akta function er moddhe variable pass korle change hossena. But array pass korle new value set hosse. Karon ki??
    // Main reason holo: kono function a variable sent korle by default value pass hoi. But jokhon array pass kora hoi, tokhon by default array er reference pass hoi. Jar fole array er 0 number index er value change hoiase.

    // Tahole akhon kotha hosse, normal variable and array er moddhe airokom diferent thakar karon ki? Er main reason holo akta array er moddhe onok gulo value thakte pare. Seita jodi onno akta function er moddhe value hisabe pass hoi. Tahole sei function er moddhe gia new akta array create kore. Ba sei poriman memory allocate kore. Jeita memory onek consume kore. So airokom system.

    return 0;
}