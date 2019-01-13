Nazwy klas w ProperCase.
Nazwy metod, funkcji, zmiennych i parametrów w camelCase.
Prywatne pola w klasie camelCase z sufiksem _; tu dodam, że pola publiczne są naprawdę rzadkością – jeśli są, to camelCase.
Akcesory pól prywatnych (jeśli są potrzebne) tak jak nazwa pola bez sufiksu (np. pole T foo_, getter T foo() const, setter T& foo()).
Stałe najczęściej UPPER_CASE.
Parametr template'owy oznaczający typ w UpperCase z prefiksem T (np. TOut); jeśli jest tylko jeden parametr, to po prostu T.
Parametr remplate'owy oznaczający wartość w UpperCase.

const int CONST_VALUE = 123;
 
class MyClass {
public:
    MyClass(int bar) : bar_(bar) {
        double myVar = 3.14;
    }
 
    bool foo(int baz) const {
        return baz == bar_;
    }
 
    int bar() const {
        return bar_;
    }
 
    int& bar() {
        return bar_;
    }
 
private:
    int bar_;
};
 
int main() {
    MyClass myClass(7);
}