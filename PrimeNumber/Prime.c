/**
  * This function takes a number and returns if it is prime or not
  */

int isprime(int n)
{
    int i;

    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
            return 0;
    }

    return 1;
}
