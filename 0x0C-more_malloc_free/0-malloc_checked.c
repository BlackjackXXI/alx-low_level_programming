#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *original_string = "Best School"; // Define the original string
    size_t string_length = strlen(original_string);
    char *copied_string = (char *)malloc((string_length + 1) * sizeof(char));

    if (copied_string == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return (1);
    }
    strcpy(copied_string, original_string);
    printf("Copied String: %s\n", copied_string);
    free(copied_string);
    return (0);
}
