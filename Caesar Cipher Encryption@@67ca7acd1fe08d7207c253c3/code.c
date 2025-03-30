// Your code here...
void caesarCipher(char* message, int shift, char* encrypted)
{
    int i = 0;
    while(message[i] != '\0')
    {
        if(message[i] <= 'Z' && message[i] >= 'A')
        {
            encrypted[i] = message[i] + shift > 'Z' ? message[i] + shift - 'A' : message[i] + shift;
        }
        else if(message[i] <= 'z' && message[i] >= 'a')
        {
            encrypted[i] = message[i] + shift > 'z' ? message[i] + shift - 'a' : message[i] + shift;
        }
        else {
            encrypted[i] = message[i];
        }
        ++i;
    }
    encrypted[i] = '\0';
}