x=-2*pi:1/100:2*pi;
y1=sin(x);
y2=cos(x);
subplot(1,2,1)
title('normal plot')
xlabel('x')
ylabel('sinx')
plot(x,y1,'r--')
subplot(1,2,2)
title('animation')
xlabel('x')
ylabel('cosx')
comet(x,y2)