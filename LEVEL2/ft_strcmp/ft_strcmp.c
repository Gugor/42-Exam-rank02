int    ft_strcmp(char *s1, char *s2)
{
    int i;
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;
	 
    i = -1;
    while (s1[++i] && s2[i] && s1[i] == s2[i])
        ;;
    return (s1[i] - s2[i]);
}
