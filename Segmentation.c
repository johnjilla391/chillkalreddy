#include <stdio.h>
#define SEGMENTS 3
int main() {
 int base[SEGMENTS] = {1000, 2000, 3000};
 int limit[SEGMENTS] = {400, 300, 500};
 int seg_no, offset;
 printf("Enter Segment Number (0-2): ");
 scanf("%d", &seg_no);
 printf("Enter Offset: ");
 scanf("%d", &offset);
 if (seg_no >= SEGMENTS || offset >= limit[seg_no]) {
 printf("Memory Access Violation\n");
 } else {
 int physical_address = base[seg_no] + offset;
 printf("Physical Address: %d\n", physical_address);
 }
 return 0;
}
