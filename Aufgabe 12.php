<?php
function reverseString($str) {
return strrev($str); //Es gibt in php eine Funktion, mit dieser kann man Strings umkehren: strrev()
}
$string = "Hallo, Welt!";
$result = reverseString($string);
echo "Umgekehrter String: " . $result;
?>
