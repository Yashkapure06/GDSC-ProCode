<script>

/*Javascript program to count number of palindrome
words in a sentence*/

// Function to check if a word is
// palindrome
function checkPalin(word)
{
	var n = word.length
	word = word.toLowerCase();

	for (var i = 0; i < n; i++,n--)
	if (word[i] != word[n - 1])
		return false;	
	return true;
}

// Function to count palindrome words
function countPalin( str)
{		
	// to check last word for palindrome
	str = str + " ";
	
	// to store each word
	var word = "";
	var count = 0;
	for (var i = 0; i < str.length; i++)
	{
		var ch = str[i];
		
		// extracting each word
		if (ch != ' ')
			word = word + ch;
		else {
			if (checkPalin(word))
				count++;
			word = "";
		}
	}
	
	return count;
}
	
// Driver code
document.write( countPalin("Madam Arora teaches malayalam") + "<br>");
			
document.write( countPalin("Nitin speaks malayalam"));

</script>
