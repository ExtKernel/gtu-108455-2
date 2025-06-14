class Animal {
    public:
        virtual void sound() { cout << "Animal sound\n"; }
};
class Dog : public Animal {
    public:
        void sound() override { cout << "Bark\n"; }
};
