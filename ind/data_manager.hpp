#ifndef __DATA_MANAGER_HPP__
#define __DATA_MANAGER_HPP__

#include "global.hpp"

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
};

#endif
