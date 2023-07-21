<?php
function calculateAverage($numbers) {
$result = array_sum($numbers) /count($numbers); //Ich habe die array_sum() und die count() Funktionen von php verwendet
return $result;
}
$numbers = [2, 4, 6, 8, 10];
$result = calculateAverage($numbers);
echo "Average: " . $result;
?>
