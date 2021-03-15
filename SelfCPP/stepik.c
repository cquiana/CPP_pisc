
#include <stdio.h>

int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}



int ft_strstr(const char *text, const char *pattern)
{
    int i = 0;
    int j = 0;
    int len =  ft_strlen(pattern);
    int res = -1;
    if (len == 0)
        return 0;
    else{
    while (text[i] != '\0'){
        if (text[i] == pattern[j]){
            res = i;
            j = 0;
            while (pattern[j] != '\0'){
                if (text[i] == pattern[j])
                    i++;
                    j++;
            }
            if (j == len)
                return res;
        }
        i++;
    }
    }
    return res;
}

int		main()
{
	char *s1 = "Hello";
	char *s2 = "";

	int i = ft_strstr(s1, s2);
	printf("i = %d\n", i);

	// Sample instance;

	// instance.setF(42);
	// std::cout << "instance.getF() :" << instance.getF() << std::endl;

	// instance.setF(-42);
	// std::cout << "instance.getF() :" << instance.getF() << std::endl;
	return (0);
}
