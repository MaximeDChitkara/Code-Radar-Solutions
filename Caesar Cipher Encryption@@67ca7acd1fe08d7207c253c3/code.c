// Your code here...
void caesarCipher(char* message, int shift, char* encrypted)
{
    int i = 0;
    while(message[i] != '\0')
    {
        if(message[i] <= 'Z' && message[i] >= 'A')
        {
            encrypted[i] = 'A' + (message[i] - 'A' + shift) % 26;
        }
        else if(message[i] <= 'z' && message[i] >= 'a')
        {
            encrypted[i] = 'a' + (message[i] - 'a' + shift) % 26;
        }
        else {
            encrypted[i] = message[i];
        }
        ++i;
    }
    encrypted[i] = '\0';
}