#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构
struct Node {
    int data;
    struct Node* next;
};

// 在链表头部插入新节点
void insertAtHead(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// 删除链表中第一个匹配给定键的节点
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

// 遍历链表并打印每个节点的数据
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// 主函数
int main() {
    struct Node* head = NULL;

    insertAtHead(&head, 1);
    insertAtHead(&head, 2);
    insertAtHead(&head, 3);
    insertAtHead(&head, 4);

    printf("Created Linked List: ");
    printList(head);

    deleteNode(&head, 3);
    printf("Linked List after Deletion of 3: ");
    printList(head);

    return 0;
}
