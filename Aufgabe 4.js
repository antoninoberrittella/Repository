function calculateAverage(numbers) {
    var sum = 0;
    for (var i = 0; i < numbers.length; i++) { // < nicht <=
    sum += numbers[i];
    }
    var average = sum / numbers.length;
    return average;
    }
    var numbers = [1, 2, 3, 4, 5];
    var average = calculateAverage(numbers);
    console.log("Der Durchschnitt beträgt: " +average);