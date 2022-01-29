groupages=[8 43 25;35 44 26;49 30 42];
subplot(2,2,1)
bar(groupages,'stacked');
xlabel('group');
ylabel('ages');

% histogram
subplot(2,2,2)
quize=[10,8,5,10,9,6,8,7,8,10,2,8];
hist(quize)
title('quize grade')
xlabel('grade')
ylabel('#')
c=hist(quize)

