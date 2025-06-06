#include <pthread.h>
#include <stddef.h>
#include <stdlib.h>
#include "cpu.h"
#include "list.h"
#include "schedulers.h"
#include "task.h"

static int task_id = 0;
static struct node* head = NULL;

void add(char* name, int priority, int burst) {
    // Create a new task
    struct task* task = malloc(sizeof(struct task));
    task->name = name;
    task->priority = priority;
    task->burst = burst;
    task->tid = task_id++;

    // insert the node at the end of the list
    insert(&head, task);
}

void schedule() {
    // Implement Priority scheduling
    while (head != NULL) {
        // Find the task with the highest priority
        struct node* current = head;
        struct node* highest_priority = head;
        while (current != NULL) {
            if (current->task->priority > highest_priority->task->priority)
                highest_priority = current;
            current = current->next;
        }

        // Execute the highest priority task
        run(highest_priority->task, highest_priority->task->burst);

        // Remove the task from the list
        struct node* temp = highest_priority;
        delete (&head, temp->task);

        // Free the task and node
        free(temp->task);
        free(temp);
    }
}