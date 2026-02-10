
#include<string>

class Cache {
    public:
        Cache(int size) noexcept;
        ~Cache();
        void setPair(std::string key, std::string value);
        std::string getValue(std::string key);
        void deletePair(std::string key);

    private:
        std::string *keys;
        std::string *values;

        int indexPointer;
        int size;
};
