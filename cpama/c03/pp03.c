/*
*   Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
(Older ISBNs use 10 digits.) The first group (the GS1 prefix) is currently either 978 or 979.
The group identifier specifies the language or country of origin (for example, 0 and 1 are used in English-speaking countries). The publisher code identifies the publisher (393 is the code for W. W. Norton). The item number is assigned by the publisher to identify a specific book (97950 is the code for this book). An ISBN ends with a check digit that’s used to verify the accuracy of the preceding digits. Write a program that breaks down an ISBN entered by the user:
*/

#include <stdio.h>

int main()
{
  printf("Enter ISBN: ");

  int gsi_prefix,
      group_id,
      pub_code,
      item_no,
      check_digit;

  scanf("%d-%d-%d-%d-%d",
        &gsi_prefix,
        &group_id,
        &pub_code,
        &item_no,
        &check_digit);

  printf("\nGSI prefix: %d", gsi_prefix);
  printf("\nGroup Identifier: %d", group_id);
  printf("\nPublisher code: %d", pub_code);
  printf("\nItem no: %d", item_no);
  printf("\nCheck digit: %d", check_digit);
  printf("\n\n");

  return 0;
}
