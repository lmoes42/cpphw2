/******************************************************************************
* Function:         pow(a,b)
* Description:      Compute a^b
* Return:           a^b
*****************************************************************************/
size_t pow(size_t base, size_t exponent)
{
    size_t result = 1;

    while(exponent > 0)
    {

        // Check if exponent is odd
        if ((exponent & 1))
            result = result * base;

        // Divide exponent by 2
        exponent = exponent >> 1;
        base = base * base;

    }
    return result;
}

