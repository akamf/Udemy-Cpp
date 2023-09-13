#include <iostream>
#include <memory>
#include <vector>


class Test
{
public:
    Test() : data{0} { std::cout << "\tTest Constructor (" << data << ")" << std::endl; }
    Test(int data) : data{data} { std::cout << "\tTest Constructor (" << data << ")" << std::endl; }
    ~Test() { std::cout << "\tTest Destructor (" << data << ")" << std::endl; }

    int get_data() const { return data; }

private:
    int data;
};


auto make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);


int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();

    int num{};
    std::cout << "How many data points do you want to enter: "; std::cin >> num;

    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}

auto make() { return std::make_unique<std::vector<std::shared_ptr<Test>>>(); }
void fill(std::vector<std::shared_ptr<Test>> &vec, int num)
{
    int temp{};    

    for (int i = 1; i <= num; i++)
    {
        std::cout << "Enter data point [" << i << "] : "; std::cin >> temp;
        vec.push_back(std::make_shared<Test>(temp));
    }
}
void display(const std::vector<std::shared_ptr<Test>> &vec)
{
    std::cout << "\nDisplaying vector data\n=======================" << std::endl;
    for (const auto &test : vec)
        std::cout << test->get_data() << std::endl;
    std::cout << "=======================" << std::endl;
}