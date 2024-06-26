void display(LIST L){
    if(L == NULL){
        printf("LIST is empty.\n");
    }else{
        for(; L != NULL; L = (*L).next){
            printf("Name: %s\n", (*L).name);
        }
        printf("\n");    
    }
}

void insertBeginning(LIST *L, char x[]){
    LIST node = calloc(1, sizeof(struct node));
    strcpy((*node).name, x);
    
    if(*L == NULL){
        *L = node;
    }else{
        LIST temp = *L;
        (*node).next = temp;
        *L = node;
    }
}

void insertEnd(LIST *L, char x[]){
    LIST node = calloc(1, sizeof(struct node));
    strcpy((*node).name, x);
    
    LIST *trav = L;
    for(; *trav != NULL; trav = &(**trav).next){
    }
    *trav = node;
}

void insertAtMiddle(LIST *L, char x[], int pos){
    // First node is at index 0
    LIST node = (LIST) calloc(1, sizeof(struct node));
    strcpy((*node).name, x);
    
    LIST *trav = L;
    int count = 0;
    for(; count < pos && *trav != NULL ; trav = &(**trav).next){
        count++;
    }
    LIST temp = *trav;
    (*node).next = temp;
    *trav = node;
}

void deleteFirst(LIST *L)
{
    if (*L == NULL) // Scenario 1: List is empty
    {
        printf("List is empty.\n");
    }
    else
    {
        // Scenario 2: List is not empty
        LIST temp = *L;  // Pointer to node
        *L = temp->link; // L is a pointer to a pointer to a node hence you need to dereference it
        free(temp);
    }
}

void deleteLast(LIST *L)
{
    LIST *trav; // Pointer to pointer to node
    for (trav = L; (*trav)->link != NULL; trav = &(*trav)->link)
    {
    }
    LIST temp;
    temp = (*trav)->link;
    *trav = temp;
    free(temp);
}

void deletePos(LIST *L, int position)
{
    LIST *trav; // Pointer to pointer to node
    int count = 0;
    for (trav = L; (*trav)->link != NULL && count < position; trav = &(*trav)->link)
    {
        count++;
    }

    LIST temp;
    temp = (*trav)->link;
    (*trav) = temp;
    free(temp);
}

void initializeStack(STACK *S)
{
    (*S) = (STACK)malloc(sizeof(struct node));
    if (*S != NULL)
    {
        (*S)->top = -1; // Empty stack
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
}

void displayStack(STACK S)
{
    int count;

    printf("top: %d\n", S->top);

    for (count = S->top; count > -1; count--)
    {
        printf("[%c] %d\n", S->arr[count], count);
    }
    printf("\n");
}

void push(STACK *S, char elem)
{
    (*S)->top += 1;
    (*S)->arr[(*S)->top] = elem;
}

char pop(STACK *S)
{
    char elem = (*S)->arr[(*S)->top];
    (*S)->top -= 1;

    return elem;
}

char peek(STACK S)
{
    return S->arr[S->top];
}

boolean isEmpty(STACK S)
{
    return S->top == -1 ? T : F;
}

boolean isFull(STACK S)
{
    return S->top == (MAX - 1) ? T : F;
}

void initializeQueue(QUEUE *Q)
{
    (*Q) = (QUEUE)malloc(sizeof(struct node));
    if ((*Q) != NULL)
    {
        (*Q)->elemPtr = (char *)malloc(sizeof(char) * MAX);
        (*Q)->front = -1; // Empty queue
        (*Q)->rear = -1;  // Empty queue
    }
}

void displayQueue(QUEUE Q)
{
    int count;
    printf("front: %d\trear: %d\n", Q->front, Q->rear);
    for (count = Q->front; count <= Q->rear; count++)
    {
        printf("[%c] ", Q->elemPtr[count]);
    }
    printf("\n\n");
}

void enqueue(QUEUE Q, char elem)
{
    if (Q->rear == MAX - 1)
    {
        printf("Queue is FULL.\n");
    }
    else
    {
        if (Q->front == -1)
        {
            // Only 1 element in the queue, front = rear
            Q->front += 1;
            Q->rear = Q->front;
            Q->elemPtr[Q->rear] = elem;
        }
        else
        {
            Q->rear += 1;
            Q->elemPtr[Q->rear] = elem;
        }
    }
}

char dequeue(QUEUE Q)
{
    if (Q->rear == -1)
    {
        printf("Queue is EMPTY.\n");
    }
    else
    {
        char elem = Q->elemPtr[Q->front];

        int count;
        for (count = 0; count < Q->rear; count++) // Shifting
        {
            Q->elemPtr[count] = Q->elemPtr[count + 1];
        }

        Q->rear--; // Decrement rear

        return elem;
    }
}

void displaySET(SET X)
{
    int n;
    for (n = 0; n < MAX; n++)
    {
        printf("%d [ %d ]\n", n, X[n]);
    }
    printf("\n");
}

SET *unionSET(SET X, SET Y)
{
    int n;

    SET *Z = (SET *)calloc(MAX, sizeof(int));
    if (*Z == NULL)
    {
        printf("Memory allocation failed.\n");
    }

    for (n = 0; n < MAX; n++)
    {
        if (X[n] || Y[n]) // Check if either `X[n]` or `Y[n]` is TRUE
        {
            (*Z)[n] = 1; // Dereference to pass the actual array
        }
    }

    return Z;
}

SET *intersectionSET(SET X, SET Y)
{
    int n;

    SET *Z = (SET *)calloc(MAX, sizeof(int));
    if (Z == NULL)
    {
        printf("Memory allocation failed.\n");
    }

    for (n = 0; n < MAX; n++)
    {
        if (X[n] && Y[n])
        {
            (*Z)[n] = 1;
        }
    }

    return Z;
}

SET *differenceSET(SET X, SET Y)
{
    int n;

    SET *Z = (SET *)calloc(MAX, sizeof(int));
    if (Z == NULL)
    {
        printf("Memory allocation failed.\n");
    }

    for (n = 0; n < MAX; n++)
    {
        if (X[n] == 1 && Y[n] == 0)
        {
            (*Z)[n] = 1;
        }
    }

    return Z;
}

void initDictionary(Dictionary D)
{
    int n;
    for (n = 0; n < MAX; n++)
    {
        D[n] = NULL;
    }
}

void displayDictionary(Dictionary D)
{
    int n;
    SET trav;

    printf("SET #\n");
    for (n = 0; n < MAX; n++)
    {
        printf("%d:\t", n);
        for (trav = D[n]; trav != NULL; trav = trav->link)
        {
            printf("%d\t", trav->elem);
        }
        printf("\n");
    }
    printf("\n");
}

int hash(int elem)
{
    return elem % 10;
}

Boolean isMember(Dictionary D, int elem)
{
    int pos = hash(elem);
    SET trav;
    Boolean member = False;

    for (trav = D[pos]; trav != NULL; trav = trav->link)
    {
        if (trav->elem == elem)
        {
            member = True;
        }
    }

    return member;
}

void insert(Dictionary D, int elem)
{
    if ((isMember(D, elem)) == True)
    {
        printf("Insertion is not allowed. Element MUST be UNIQUE.\n");
    }
    else
    {
        // Element does not exist hence insertion is allowed
        // Elements must be sorted
        // Implement PPN since insertion

        // Create new node because element is unique
        SET newNode = (SET)malloc(sizeof(struct node));
        if (newNode != NULL)
        {
            newNode->elem = elem;
            newNode->link = NULL;
        }
        else
        {
            printf("Memory allocation failed.\n");
        }

        int pos = hash(elem);

        SET *trav, temp;
        for (trav = &(D[pos]); *trav != NULL && (*trav)->elem < newNode->elem; trav = &(*trav)->link)
        {
        }
        temp = *trav;
        *trav = newNode;
        newNode->link = temp;
    }
}

void delete(Dictionary D, int elem)
{
    if ((isMember(D, elem)) == False)
    {
        printf("Element does NOT exist. Deletion is NOT allowed.\n");
    }
    else
    {
        // Element exist in the list hence deletion is allowed
        // Implement PPN since deletion
        SET *trav, temp;

        int pos = hash(elem);

        for (trav = &(D[pos]); *trav != NULL && (*trav)->elem != elem; trav = &(*trav)->link)
        {
        }
        temp = *trav;
        *trav = temp->link;
        free(temp);
    }
}

// Function definition
void initDictionary(Dictionary D)
{
    int n;

    for (n = 0; n < MAX; n++)
    {
        D[n] = EMPTY;
    }
}

void displayDictionary(Dictionary D)
{
    int n;

    printf("Index\tElement\n");
    for (n = 0; n < MAX; n++)
    {
        if (D[n] == EMPTY)
        {
            printf("%d:\t\t[ EMPTY ]\n", n);
        }
        else if (D[n] == DELETED)
        {
            printf("%d:\t\t[ DELETED ]\n", n);
        }
        else
        {
            printf("%d:\t\t[ %c ]\n", n, D[n]);
        }
    }
    printf("\n");
}

int hash(char elem)
{
    return tolower(elem - 'a');
}

void insert(Dictionary D, char elem)
{
    int n, count;

    for (n = hash(elem), count = 0; D[n] != EMPTY && D[n] != DELETED && count < MAX; n = (n + 1) % MAX, count++)
    {
    }
    if (count < MAX)
    {
        D[n] = elem;
    }
    else
    {
        printf("Dictionary is FULL. Cannot insert '%c'.\n", elem);
    }
}

Boolean isMember(Dictionary D, char elem)
{
    int n, count;
    Boolean member = False;

    for (n = hash(elem), count = 0; count < MAX && D[n] != elem; n = (n + 1) % MAX, count++)
    {
    }
    if (D[n] == elem)
    {
        member = True;
    }

    return member;
}

void delete(Dictionary D, char elem)
{
    int n, count;

    for (n = hash(elem), count = 0; D[n] != elem && count < MAX; n = (n + 1) % MAX, count++)
    {
    }
    if (isMember(&D[n], elem) == True)
    {
        D[n] = DELETED;
    }
    else
    {
        printf("Deletion of '%c' is NOT allowed. Element is not found in the Dictionary.\n", elem);
    }
}
