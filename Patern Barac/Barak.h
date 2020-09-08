#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Unit {
    string name;
    size_t HP;
    size_t damage;
public:
    Unit() = default;
    Unit(const string&name, size_t HP, size_t damage) :name(name),HP(HP), damage(damage) {
        
    }
    void print() const {
        cout << "Name->" << name << endl;
        cout << "HP->" << HP << endl;
        cout << "Damage->" << damage << endl;
    }
};

class Marine :public Unit {
    
public:
    Marine( const string&name,size_t hp, size_t damage) :Unit(name,hp, damage){

    }
    void print() const {
        Unit::print();
    }
};
class Doctor:public Unit
{
    
public:
    Doctor(const string&name, size_t hp, size_t damage) :Unit(name,hp, damage) {

    }
    void print() const {
        Unit::print();
    }
};
class CrazyDoctor :public Unit {
    
public:
    CrazyDoctor(const string&name,size_t hp=0, size_t damage=0) :Unit(name,hp, damage) {

    }
    void print() const {
        Unit::print();
    }
};
class Barracks :public Unit {
    vector<Unit*>units;
public:
    Barracks() {

    }
    void addUnit(Unit* unit) {
        units.push_back(unit);
    }
    void print()const {
        for (auto u : units) {
            u->print();
        }
    }
    
};