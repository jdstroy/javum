// prms-id: 6927

class Object {
public:
  Object();
  int Value;
};

Object::Object() : Value(-1) { }

Object *pArr = new Object[2];

main() {
  if (pArr[0].Value != -1 || pArr[1].Value != -1)
    return 1;
}
