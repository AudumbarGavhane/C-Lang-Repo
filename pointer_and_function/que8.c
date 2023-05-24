/*8. Write a recursive function to calculate the sum of digits of a number till you get a single digit number. 
 Example: 961 -> 16 -> 5. (Note: Do not use a loop)*/
 #include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;

    // Calculate the sum of digits of the number
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // If the sum is a single digit number, return it
    if (sum < 10) {
        return sum;
    }
    // Otherwise, recursively call the function with the sum
    else {
        return sum_of_digits(sum);
    }
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sum_of_digits(num);

    printf("The sum of digits of %d till you get a single digit number is %d\n", num, result);

    return 0;
}
