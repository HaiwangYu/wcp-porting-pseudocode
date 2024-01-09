


// Point PR3DCluster::calc_ave_pos(Point& p, double dis)
cluster_t c = get<cluster_t>(n);
DisjointDS dds_3d = c.scoped_pc("3d");
map<int, double> idx2dist = dds_3d.kdtree().get_closest_index(point, radius);


set<blob_t> bset = unique_daughters_contain_points(c, idx2dist);
{
    /// TODO: is this do-able? fast?
    blob_t b = c.get_daughter(idx);
}

Point pos = ave_pos(bset)
{
    /// TODO: get_center()?
    ret += b.get_center()*b.get_charge();
}