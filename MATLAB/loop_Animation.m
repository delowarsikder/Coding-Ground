x=-2*pi:1/5:2*pi;
y=sin(x);
n=length(x);
for i=1:n
    plot(x(i),y(i),'r*')
    axis([min(x)-1 max(x)+1 min(y)-1 min(y)+1])
    m(i)=getframe;
end
movie(m)