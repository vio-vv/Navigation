#ifndef __DATA_MANAGER_HPP__
#define __DATA_MANAGER_HPP__

#include "global.hpp"
#include <unordered_map>
#include <vector>
#include <queue>

struct pairHash {
    std::size_t operator() (const std::pair<int, int> &pair) const {
        auto hash1 = std::hash<int>{}(pair.first);
        auto hash2 = std::hash<int>{}(pair.second);
        return hash1 ^ (hash2 << 1); // Combine the two hashes
    }
};
class DataManager {
public:
    DataManager(const Graph &graph);
    ~DataManager();
    /**
     * @brief 查询视口内的数据
     * @param left 视口的左边界
     * @param right 视口的右边界
     * @param top 视口的上边界
     * @param bottom 视口的下边界
     * @param level 查询的图的层级
     * @return Graph 视口内的节点和边
     */
    Graph GraphqueryDataInViewport(
        int left, int right, int top, int bottom, int level
    );

private:
    //网格大小
    double cellWidth;
    double cellHeight;
    //边界
    double leftBound;
    double rightBound;
    double topBound;
    double bottomBound;
    //行数列数
    int colNums;
    int rowNums;
    std::unordered_map<std::pair<int,int>, std::vector<const Node*>, pairHash> cellBucket;
    Graph graphManager;
    void initCellData(const Graph& graph);
    void initHash(const Graph& graph);
};

#endif
