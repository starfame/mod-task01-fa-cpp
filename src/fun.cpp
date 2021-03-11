unsigned int faStr1(const char* str)
{
	int i = 0, count = 0;
	char state = 'e'; //w - state word, e - state empty
	bool isLegalWord = false;
	while (str[i] != '\0')
	{
		if (state == 'e' && str[i] != ' ')
		{
			state = 'w';
			if (str[i] > 57 || str[i] < 48) 
				isLegalWord = true;
		}
		if (state == 'w')
		{
			if (!(str[i] > 57 || str[i] < 48)) 
				isLegalWord = false;
		}
		if (state == 'w' && str[i] == ' ')
		{
			if (isLegalWord)
			{
				count++;
			}
			isLegalWord = false;
			state = 'e';
		}
		i++;
	}
	if (state == 'w' && isLegalWord == true) 
		count++;
	return count;
}
unsigned int faStr2(const char* str)
{
    int i = 0, count = 0;
	char state = 'e'; //w - state word, e - state empty
	bool isLegalWord = false;
	bool isFirstSym = false;
	while (str[i] != '\0')
	{
		if (state == 'e' && str[i] != ' ')
		{
			state = 'w';
			if (str[i] >= 65 && str[i] <= 90); 
				isLegalWord = true;
			isFirstSym = true;
		}
		if (state == 'w' && isFirstSym == false)
		{
			if (!(str[i] >= 97 && str[i] <= 122)) 
				isLegalWord = false;
		}
		if (state == 'w' && str[i] == ' ')
		{
			if (isLegalWord)
			{
				count++;
			}
			isLegalWord = false;
			state = 'e';
		}
		isFirstSym = false;
		i++;
	}
	if (state == 'w' && isFirstSym == false)
		{
			if (!(str[i] >= 97 && str[i] <= 122)) 
				isLegalWord = false;
		}
	if (state == 'w' && isLegalWord == true) 
		count++;
	return count;
}
unsigned int faStr3(const char* str)
{
    int i = 0, count = 0, L = 0, mediumLen;
	float summLen;
	char state = 'e'; //w - state word, e - state empty 
    while (str[i] != '\0')
    {
        if (state == 'e' && str[i] != ' ')
        {
			L++;
            count++;
            state = 'w';	
        }
        if (state == 'w' && str[i] == ' ')
        {
			L = 0;
            summLen += L;
			state = 'e';
        }
        L++;
        i++;
    }
    if (state == 'w') 
		summLen += L;
    summLen = summLen / (float)count;
    mediumLen = summLen;
    return mediumLen;
}