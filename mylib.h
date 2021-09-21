int stringLen(char string[]){
    int i;
    for(i = 0; i < string[i] != '\0';i++);

    return i;
}

int stringPallindrome(char string[]){
    int flag = 1,i,j;
    i = stringLen(string)-1;
            
    for (j = 0; j < i; j++ ,i--)
    {
        if(string[i] != string[j])
        {
            flag =0;
            break;
        }
    }
    return flag;
}

void stringReverse(char string[]){   
    int i,n;
    
    // size of string
    for(i = 0; string[i] != '\0';i++);

    // Reverse string
    int j=0;
    for(n = i-1; j < n; j++,n--){
       char c = string[n];
       string[n]=string[j];
       string[j]=c;
    }  

}