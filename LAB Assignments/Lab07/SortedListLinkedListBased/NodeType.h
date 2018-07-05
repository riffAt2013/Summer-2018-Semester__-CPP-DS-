
#ifndef NODETYPE_H_INCLUDED
#define NODETYPE_H_INCLUDED

template<class ItemType>
class NodeType
{

public:
    NodeType(); //Constr
    NodeType(ItemType data);    //Alternate Constr
    ~NodeType();    //Destruct

    void SetData(ItemType data);
    ItemType GetData();
    void SetNext(NodeType* next);
    NodeType<ItemType>* GetNext();

private:
    ItemType data;
    NodeType<ItemType>* next;
};

#endif // SORTEDTYPE_H_INCLUDED
