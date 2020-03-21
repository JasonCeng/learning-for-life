/**
 * Return the length of the shortest path between root and target node.
 */
int BFS(Node root, Node target) {
    Queue<Node> queue = new LinkedList();  // store all nodes which are waiting to be processed
    int step = 0;  // number of steps neeeded from root to current node
    // initialize: add root to queue;
    queue.offer(root);
    // BFS
    while(queue is not empty) {
        step = step + 1;
        // iterate the nodes which are already in the queue
        int size = queue.size();
        for(int i = 0; i < size; ++i) {
            Node cur =  queue.peek();// first node in queue;
            if(cur == target) { // return step if cur is target;
                return step;
            }
            for(Node next : the neighbors of cur) {
                q.offer(next);  // add next to queue;
            }
            q.poll();   // remove the first node from queue;
        }
    }
    return -1;  // there is no path from root to target
}