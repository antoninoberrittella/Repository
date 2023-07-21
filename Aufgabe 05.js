function checkPalindrome(word) {
    var reverseWord = "";
    for (var i = word.length-1; i >= 0; i--) { //Ich habe hier word.length-1 verwendet, damit der letzte Buchstabe im Arry korrekt erfasst wird. 
    reverseWord += word[i];
    }
    if (reverseWord === word) {
    return true;
    } 
    else {
    return false;
    }
    }
    var word = "level";
    var isPalindrome = checkPalindrome(word);
    console.log("Ist das Wort ein Palindrom? " + isPalindrome)