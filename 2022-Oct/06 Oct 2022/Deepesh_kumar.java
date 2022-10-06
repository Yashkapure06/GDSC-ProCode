class Deepesh_kumar
{
    public static void main(String args[])
    {
        //Take string input from user
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        //Split string into words
        String[] words = str.split(" ");
        String reverseString = "";
        for (int i = 0; i < words.length; i++)
        {
            String word = words[i];
            String reverseWord = "";
            for (int j = word.length()-1; j >= 0; j--)
            {
                //Reverse each word
                reverseWord = reverseWord + word.charAt(j);
            }
            reverseString = reverseString + reverseWord + " ";
        }
        System.out.println(reverseString);
        sc.close();
    }
}
