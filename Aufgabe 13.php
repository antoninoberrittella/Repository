<?php
function findUniqueWords($text) {
$words = explode(" ", $text);
$result = [];
$occurrences = count($words);//Ich habe die count() Funktion verwendet
$result[] = $occurrences;
return $result;
}
$text = "The quick brown fox jumps over the lazy dog";
$uniqueWords = findUniqueWords($text);
echo "Unique words: ";
foreach ($uniqueWords as $word) {
echo $word . " ";
}?>