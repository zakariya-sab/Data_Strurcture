/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true
*/

//solution


bool isValid(char* s)
{
    int size = strlen(s);
    if ( size == 0 ){
         return 0;
    }
    char* a = (char*)malloc(sizeof(char)*size);
    int cp = 1;
    a[0]=s[0];
    int i = 1;
    while (cp != size  )
    {
        a[i]=s[cp];
        if (i==0)
        {
            cp++ ; i++;
        }
    else if( (a[i]=='}' && a[i-1]=='{') ||( a[i]==']' && a[i-1]=='[') || (a[i]==')' && a[i-1]=='('))
        {
                i--;
                cp++;
        }
        else
        {
            cp++ ;
            i++ ;
        }
    }

    if(i==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
