#include <iostream>
#include "SortedType.h"
#include "NodeType.h"
using namespace std;

template class SortedType<int>;
//template class SortedType<char>;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    currentPosition = NULL;
    listData = NULL;
    length = 0;
}

template<class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}

template<class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    NodeType<ItemType>* location;   //temp pointer?

    while(listData != NULL)
    {
        location = listData;
        listData = listData->GetNext();
        delete location;
        length--;
    }
    listData = NULL;
}

template<class ItemType>
bool SortedType<ItemType>::IsFull() const
{
    NodeType<ItemType>* location;
    try
    {
        location = new NodeType<ItemType>;
        delete location;
    }
    catch (bad_alloc exception)
    {
        return true;
    }
    return false;
}

template<class ItemType>
int SortedType<ItemType>::GetLength() const
{
    return length;
}

template<class ItemType>
bool SortedType<ItemType>::GetItem(ItemType& item)
{
    bool found;
    bool moreToSearch;
    NodeType<ItemType>* location;
    location = listData;
    found = false;
    moreToSearch = (location != NULL);

    while(moreToSearch && !found)
    {
        if((location->GetData()) == item)
        {
            item = location->GetData();
            found = true;
        }
        else
        {
            location = location->GetNext();
            moreToSearch = (location != NULL);
        }
    }
    return found;
}

template<class ItemType>
bool SortedType<ItemType>::PutItem(ItemType item)
{
    NodeType<ItemType>* newData;
    NodeType<ItemType>* location;
    NodeType<ItemType>* prevPtr;
    location = listData;
    prevPtr = listData;

    if(!location)
    {
        newData = new NodeType<ItemType>;
        newData->SetNext(listData);
        newData->SetData(item);
        listData=newData;
        length++;
        return true;
    }

    else
    {
        while(location)
        {
            if(listData->GetData() > item)
            {
                newData = new NodeType<ItemType>;
                newData->SetNext(listData);
                newData->SetData(item);
                listData=newData;
                length++;
                return true;
            }
            else if(location->GetData() > item)
            {
                newData = new NodeType<ItemType>(item);
                newData->SetNext(location);
                prevPtr->SetNext(newData);
                length++;
                return true;
            }
            else
            {
                prevPtr = location;
                location = location->GetNext();
            }
        }
        newData = new NodeType<ItemType>(item);
        newData->SetNext(location);
        prevPtr->SetNext(newData);
        length++;
        return true;
    }

}

template<class ItemType>
bool SortedType<ItemType>::DeleteItem(ItemType item)
{
    bool deleted;
    bool moreToSearch;
    NodeType<ItemType>* location;
    NodeType<ItemType>* prevLocation;
    prevLocation = listData;
    location = listData;
    deleted = false;
    moreToSearch = (location != NULL);

    while(moreToSearch && !deleted)
    {
        if(listData->GetData() == item)
        {
            deleted = DeleteItemAtFront();
        }
        else if(location->GetData() == item)
        {
            prevLocation->SetNext(location->GetNext());
            delete location;
            length--;
            deleted = true;
        }
        else
        {
            prevLocation = location;
            location = location->GetNext();
            moreToSearch = (location != NULL);
        }
    }

    return deleted;
}

template<class ItemType>
bool SortedType<ItemType>::DeleteItemAtFront()
{
    bool deleted = false;
    NodeType<ItemType>* tempPtr;
    if(listData != NULL)
    {
        tempPtr = listData;
        listData = tempPtr->GetNext();
        delete tempPtr;
        length--;
        deleted = true;
    }
    return deleted;
}

template<class ItemType>
void SortedType<ItemType>::PrintListContent()
{
    NodeType<ItemType>* location;
    location = listData;
    while(location)
    {
        cout<<location->GetData()<<" ";
        location=location->GetNext();
    }
    cout<<'\n';
}

template<class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPosition = NULL;
}

template<class ItemType>
ItemType SortedType<ItemType>::GetNextItem()
{
    currentPosition = ((currentPosition == NULL)
                       ? listData
                       : currentPosition->GetNext());


    return currentPosition->GetData();
}
