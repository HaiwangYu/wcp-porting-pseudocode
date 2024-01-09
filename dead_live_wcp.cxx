

void WCP2dToy::Clustering_live_dead(
    WCP::PR3DClusterSelection &live_clusters,
    WCP::PR3DClusterSelection &dead_clusters,
    WCP::map_pr3dcluster_double &cluster_length_map,
    WCP::PR3DClusterSet &cluster_connected_dead)
{
    // 1, form map between live and dead clusters using OverlapFast
    for (auto live_cluster : live_clusters) {
        for (auto dead_cluster : dead_clusters) {
            // goal: update dead_live_cluster_mapping, dead_live_mcells_mapping
            // using: Is_Connected(live_cluster, dead_cluster, offset=2);
        }
    }

    // 2, compare connected live clusters using PC:
    for (auto [dead, lives] : dead_live_cluster_mapping) {
        for (auto live1 : lives) {
            for (auto live2 : lives) {
                // goal: update to_be_merged_pairs (std::set<std::pair<WCP::PR3DCluster *, WCP::PR3DCluster *>>)
                // using:
                // Create_point_cloud()
                // get_point_cloud()
                // calc_ave_pos()
                // VHoughTrans()
            }
        }
    }

    // 3, convert to_be_merged_pairs to merge_clusters
    // std::set<std::pair<WCP::PR3DCluster *, WCP::PR3DCluster *>>
    // std::vector<std::set<PR3DCluster*>>

    // 4 IO
}