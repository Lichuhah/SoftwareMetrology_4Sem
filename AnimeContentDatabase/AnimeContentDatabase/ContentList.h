#include "Title.h"

struct NodeList
{
    NodeList* prev;
    NodeList* next;
    Title* title;
};

class ContentList {
public:
    NodeList* first;
    NodeList* last;
    int length = 0;
    ContentList();
   // void addNewIssue(Reader* reader, Book* book, QDate dataOfIssue, QDate dataOfReturn);
   // void deleteIssue(NodeReaderBook* node);
  //  QStringList outputList(Reader* reader);
   // void mergeSort();
   // NodeReaderBook* find(string readerId, double bookId);
  //  void deleteList();
private:
  //  NodeReaderBook* lastNode();
   // NodeReaderBook* merge(NodeReaderBook* first, NodeReaderBook* second);
   // NodeReaderBook* mergeSort(NodeReaderBook* head);
   // NodeReaderBook* split(NodeReaderBook* head);
};