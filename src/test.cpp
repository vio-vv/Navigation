#include "global.hpp"
#include "data_manager.hpp"
/** 
* @brief 测试构造函数
* @note 测试一般情况的图
*/
void normalConstructorTest();

/**
 * @brief 测试函数
 */
int main()
{
    normalConstructorTest();
}


void normalConstructorTest()
{
    std::set<const Node*> nodes={
        new Node{"A", {}, 0, 0, {0}},
        new Node{"B", {}, 1, 0, {1}},
        new Node{"C", {}, 0, 1, {2}},
        new Node{"D", {}, 1, 1, {3}}
    };
    Graph graph={nodes,{}};
    DataManager dataManager(graph);
    for(auto it:nodes)
    {
        delete it;
    }

}



