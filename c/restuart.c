#include <stdio.h>
#include <stdlib.h>

#define MAX_CUSTOMERS 10

struct table {
  char customers[MAX_CUSTOMERS][20];
  int num_customers;
};

struct table *create_table() {
  struct table *table = malloc(sizeof(struct table));
  table->num_customers = 0;
  return table;
}

void add_customer(struct table *table, char *name) {
  if (table->num_customers < MAX_CUSTOMERS) {
    strcpy(table->customers[table->num_customers++], name);
  } else {
    printf("Table is full.\n");
  }
}

void serve_customers(struct table *table) {
  for (int i = 0; i < table->num_customers; i++) {
    printf("Serving customer: %s\n", table->customers[i]);
  }
}

// Wait for the next customer to arrive.
void wait_for_customer() {
  printf("Waiting for next customer...\n");
  // Implement this function to wait for the next customer to arrive.
}

int main() {
  // Create a new table.
  struct table *table = create_table();

  // Add some customers to the table.
  struct customer customer1 = {1, "Alice"};
  struct customer customer2 = {2, "Bob"};
  struct customer customer3 = {3, "Carol"};
  add_customer(table, &customer1);
  add_customer(table, &customer2);
  add_customer(table, &customer3);

  // Serve the customers at the table.
  serve_customers(table);

  // Wait for the next customer to arrive.
  wait_for_customer();

  return 0;
}