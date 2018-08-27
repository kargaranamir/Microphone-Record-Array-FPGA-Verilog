clc
clear all;
close all;

load 'example.txt';
load untitled;
E = zeros(500000,1);
for i = 1: 500000
    if(example(i,2)<2^23)
        E(i) = example(i,2);
    else
        E(i) = example(i,2) - 2^24;
    end
end
D = filter(coeff,1,E);
for i = 1: 500000
    D(i) = D(i)/(2^24);
    E(i) = E(i)/(2^24);
end
plot(E(1:10000),'.');
hold on
plot(D(1:10000),'r');
sound(D,32000);


