#ifndef STRUCT_H
#define STRUCT_H

// struct which requires int key and string value
struct IntStringPair {
    int key;
    std::string value;
};

//geneneric struct which can take any type of key and value
template <typename Key, typename Value>
struct Pair {
    Key key;
    Value value;
};

#endif //STRUCT_H
