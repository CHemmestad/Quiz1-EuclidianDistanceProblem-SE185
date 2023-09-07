/*
Caleb Hemmestad
SE185 FALL2023
Quiz 1 Euclidian Distance Problem

Description: Write a complete c program that prints the Euclidian distance between the school
and the following students
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

    //Making an array to store the coordinates for each person
    float locs[5][2] = {{22.05 , 85.10} 
                      , {43.25 , 9.80} 
                      , {2.55 , 72.86} 
                      , {15.15 , 40.40} 
                      , {15.55 , 55.15}};

    //Making an array of strings for the names of each person
    char names[4][10] = {{"Mike"} , {"Mary"} , {"Gary"} , {"Logan"}};

    //Making an array to store the distances of each person
    float dist[4];

    //Using a for loop to go through the arrays and calculate the distance and then printing it
    for(int y = 0 ; y < 4 ; y++) {
        dist[y] = sqrt(pow(locs[y][0] - locs[4][0] , 2) + pow(locs[y][1] - locs[4][1] , 2));
        printf("The E distance for %s is: %f\n" , names[y] , dist[y]);
    };

    return 0;
}