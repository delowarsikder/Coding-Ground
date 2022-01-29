nsamples =5;
npoints =50;
for k=1:nsamples
    currentData =rand(npoints,1);
    sampleMean(k)=mean(currentData);
end
overallMean=mean(sampleMean)

%C:\Program Files\MATLAB\R2016a\toolbox\distcomp\parallel\@codistributed\sin.m  % codistributed method
for k=1:nsamples
   iterationString =['Iteration #',int2str(k)];
   disp(iterationString)
   currentData=rand(npoints,1);
   sampleMean(k)=mean(currentData)
end
overallMean=mean(sampleMean)