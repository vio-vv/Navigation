#ifndef __DATA_MAKER_HPP__
#define __DATA_MAKER_HPP__

/**
 * @brief 数据生成器
 */

#include "global.hpp"

class DataMaker {
public:
    /**
     * @brief 生成图
     * @param left 图的左边界
     * @param right 图的右边界
     * @param top 图的上边界
     * @param bottom 图的下边界
     * @param node_num 图的节点数量
     * @param edge_num 图的边数量
     * @param level_num 图的层数量
     * @param level_volume 图的层流量容量
     * @return Graph 图的节点和边
     */
    DataMaker(
        double left, double right, double top, double bottom,
        int node_num, int edge_num, 
        int level_num = 5, int level_volume = 50
        // 可以继续加其他参数
    );
    ~DataMaker();
    /**
     * @brief 获取图
     * @return Graph 图的节点和边
     */
    const Graph &getGraph();
    /**
     * @brief 查询边的当前流量
     * @param edge 边
     * @return 边的当前流量
     */
    int queryCurrentFlowInEdge(Edge *edge);
};
 
#endif
