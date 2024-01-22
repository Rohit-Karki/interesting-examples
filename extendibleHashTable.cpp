#include <iostream>

class Bucket
{
    int depth, size;
    std::map<int, string> values;

public:
    Bucket(int depth, int size);
    int insert(int key, string value);
    int remove(int key);
    int update(int key, string value);
    void search(int key);
    int isFull(void);
    int isEmpty(void);
    int getDepth(void);
    int increaseDepth(void);
    int decreaseDepth(void);
    std::map<int, string> copy(void);
    void clear(void);
    void display(void);
}

class Directory
{
    int global_depth, bucket_size;
    std::vector<Bucket *> buckets;
    int hash(int n);
    void grow(void);
    void split(int bucket_no);
    void merge(int bucket_no);
    string bucket_id(int n);

public:
    Directory(int depth, int bucket_size);
    void insert(int key, string value, bool reinserted);
    void remove(int key, int mode);
    void update(int key, string value);
    void search(int key);
    void display(bool duplicates);
}

int
main()
{
    cout << "Rohit" << endl;
}

Directory::Directory(int depth, int bucket_size)
{
    this->global_depth = depth;
    this->bucket_size = bucket_size;
    for (int i = 0; i < 1 << depth; i++)
    {
        buckets.push_back(new Bucket(depth, bucket_size));
    }
}

Directory::hash(int n)
{
    return n & ((1 << global_depth) - 1);
}

void Directory::grow(void)
{
    for (int i = 0; i < 1 << global_depth; i++)
        buckets.push_back(buckets[i]);
    global_depth++;
}
