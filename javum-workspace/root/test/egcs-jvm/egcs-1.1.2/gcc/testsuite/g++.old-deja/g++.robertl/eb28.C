//Build don't link: 
#include <vector.h>
enum s { S };
class a
{
        vector<s> vs;
        friend class b;
};
class b
{
        vector<a> va;
        operator vector< vector<s> >()
        {
                vector< vector<s> > vvs(va.size());
                return vvs;
        }
};
