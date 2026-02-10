
#include<string>

class Cache {
    public:
        Cache(int size);
        void setPair(std::string key, std::string value);
        std::string getValue(std::string key);
        void deletePair(std::string key);
};
