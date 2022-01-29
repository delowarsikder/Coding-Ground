Class Visit
{
    String Name,
    int id;
    int Time, //in milleseconds, 0 for default, start time for time visit, after value for after event
    int ParentVisitId;
}

/*
v1(0) -> v2(1),v3(5)
v4(100) -> v5(2) -> v6(3)

v6,v1,v3,v2,v4,v5

v1(0) -> v2(2) -> v3(5) -> v4 -> v5 -> v6)

*/
vector<Visit> visits;
bool cmp(vector<Visit> visits1,vector<Visit> visits2)
{
    if(visits1.Time<visits2.Time)
    {
        return true;
    }
    else
    {
        return false;

    }
}
int UpdateTime(int storparentid,vector<Visit>v)
{
    if(storparentid==-1)
    {
        return visits[storparentid].Time;
    }
    return UpdateTime(visits[storParentId].ParenetVisitId,vector<Visit>v);
}

vector<Visit> GetSortedVisits(vector<Visit> visits)
{
    for(int i=0; i<visits.size(); i++)
    {
        int storParentId=visits[i].ParentVisitId;
//        while(storParentId!=-1)
//        {
//            visits[i].Time=visits[i].Time + visits[storParentId].Time;
//            storParentId=visits[storParentId].ParenetVisitId;
//        }

        visits[i].Time=UpdateTime(storParentId,visits);
    }


    sort(visits.begin(),visits.end(),cmp);

}
