function reverseWords(s: string): string {
    let result = "";
    for (let words of s.split(" ")) {
        let tempWord = words.split("");
        for (let i = 0; i < Math.floor(tempWord.length / 2); i++) {
            let temp = tempWord[i];
            tempWord[i] = tempWord[tempWord.length - i - 1];
            tempWord[tempWord.length - i - 1]  = temp;
        }
        result += tempWord.join("") + " ";
    }
    return result.trim();
};
