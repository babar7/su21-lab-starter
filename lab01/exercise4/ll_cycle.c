#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL) {
        // Empty list, no cycle
        return 0;
    }

    node *slowPtr = head;
    node *fastPtr = head;

    while (slowPtr != NULL && fastPtr != NULL && fastPtr->next != NULL) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;

        if (slowPtr == fastPtr) {
            // Cycle detected
            return 1;
        }
    }

    // No cycle found
    return 0;
}

