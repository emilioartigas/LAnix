struct Node
{
	int priority;
	void* data;
	struct Node *next;

};



class PQueue
{

	private:
		struct Node* front;

	public:

	PQueue()
  {
    front = NULL;
  }
	void push(void *data, int priority);
	void* top();
	void pop();
	void display();
};
