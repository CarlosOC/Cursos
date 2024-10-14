class Animal {
public:
    virtual void hacerSonido() {
        cout << "El animal hace un sonido." << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "El perro ladra." << endl;
    }
};

class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "El gato maúlla." << endl;
    }
};

int main() {
    Animal* animal;
    Perro perro;
    Gato gato;

    // Animal apunta a un perro
    animal = &perro;
    animal->hacerSonido(); // Imprime "El perro ladra."

    // Animal apunta a un gato
    animal = &gato;
    animal->hacerSonido(); // Imprime "El gato maúlla."
}
