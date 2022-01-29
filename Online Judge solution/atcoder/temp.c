int *SortArray(int a[],int b[],int size_a,int size_b)
{
    int i=0,j=0,k=0;
    int stor[size_a+size_b+1];

    bool flag=false;
    while(i<size_a || j<size_b)
    {
        if(i<size_a && j<size_b)
        {
            if(a[i]<b[j])
            {
                stor[k++]=a[i++];
            }
            else
            {
                stor[k++]=b[j++];
            }
        }
        else
        {
            flag=true;
        }

        if(flag)
        {
            if(i<size_a)
            {
                stor[k++]=a[i++];
            }
            if(j<size_b)
            {
                stor[k++]=b[j++];
            }
        }
    }

    return stor;
}
