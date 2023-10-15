function arrayToLinkedList(arr) {
    if (arr.length === 0) {
        return null;
    }

    const head = new ListNode(arr[0]);
    let current = head;

    for (let i = 1; i < arr.length; i++) {
        const newNode = new ListNode(arr[i]);
        current.next = newNode;
        current = newNode;
    }

    return head;
}

var mergeKLists = function(lists) {
    let sol = [];
    for (let i = 0; i < lists.length; i++) {
        let current = lists[i];
        while (current) {
            sol.push(current.val);
            current = current.next;
        }
    }

    sol.sort((a, b) => a - b); // Sort the values


    return arrayToLinkedList(sol);
};
