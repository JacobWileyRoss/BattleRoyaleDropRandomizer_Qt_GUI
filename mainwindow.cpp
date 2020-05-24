#include <QtWidgets/QAbstractItemDelegate>
#include <search.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    srand(time(NULL));


    ui->setupUi(this);


    ui->mapSelect->addItem("...");
    ui->locationDisplay->setAlignment(Qt::AlignCenter);
    ui->locationDisplay->setStyleSheet("font: 40pt; color: white; border: 2px solid black;");


    ui->menuFile->addAction("Apex", this, SLOT(apex()));
    ui->menuFile->addAction("Fortnite", this, SLOT(fortnite()));
    ui->menuFile->addAction("PUBG", this, SLOT(pubg()));
    ui->menuFile->addAction("Warzone", this, SLOT(warzone()));
}


QString MainWindow::randomize(const std::vector<QString> &locationsCache) {

    //return map.mapLocations.at(rand() % map.mapLocations.size());
    return locationsCache.at(rand()% locationsCache.size());
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_dropButton_clicked()
{
    updateLocationsCache();
    ui->locationDisplay->setText(randomize(locationsCache));
}


void MainWindow::apex() {
    qDebug("Apex Selected");

    ui->mapSelect->clear();
    ui->mapSelect->addItem("Kings Canyon");
    ui->mapSelect->addItem("World's Edge");
    ui->locationDisplay->setText("APEX");
}


void MainWindow::fortnite() {
    qDebug("Fortnite Selected");

    ui->mapSelect->clear();
    ui->mapSelect->addItem("Battle Royale Island");
    ui->locationDisplay->setText("FORTNITE");
}


void MainWindow::pubg() {
    qDebug("PUBG Selected");

    ui->mapSelect->clear();
    ui->mapSelect->addItem("Erangel");
    ui->mapSelect->addItem("Miramar");
    ui->mapSelect->addItem("Sanhok");
    ui->locationDisplay->setText("PUBG");
}


void MainWindow::warzone() {
    qDebug("Warzone Selected");

    ui->mapSelect->clear();
    ui->mapSelect->addItem("Verdansk");
    ui->locationDisplay->setText("WARZONE");
}


void MainWindow::updateLocationsCache() {
    //APEX MAP
    if (ui->mapSelect->currentText() == "Kings Canyon") {
        locationsCache = {"Airbase", "ARES Capacitor", "Artillery Battery", "Artillery Tunnel",
                          "Artillery Underpass", "Broken Coast", "Bunker Pass", "Cage", "Capacitor Junction",
                          "Capacitor Overlook", "Caves", "Creature Containment", "Crossroads",
                          "Destroyed Bridges", "Destroyed Cascades", "East Settlement", "The Farm",
                          "Golden Sands", "High Desert", "Hillside Outpost", "Hydro Dam", "Interstellar Relay",
                          "Market", "Octane's Gauntlet", "Offshore Rig", "Reclaimed Forest", "Repulsor",
                          "River's End", "River Center", "Runoff", "Salvage", "Singh Labs", "Singh Labs Interior",
                          "Suspended Skull", "Slum Lakes", "Swamps", "Terminal Station F-85", "The Pit",
                          "Two Spines", "Two Spines Outpost", "Watchtower North", "Watchtower South",
                          "Water Treatment", "Waterfall"};
    }

    if (ui->mapSelect->currentText() == "World's Edge"){
        locationsCache = {"Bloodhound's Trials", "Drill Site", "East Fragment", "Harvester", "Hill Valley",
                          "Hot Springs", "Lava City", "Lava Fissure", "Mirage Voyage", "Overlook", "Refinery",
                          "Skyhook", "Sorting Factory", "Spring's End", "Survey Camp", "Thermal Station",
                          "The Bridge", "The Dome", "The Epicenter", "The Geyser", "The Mining Pass",
                          "The Ridge", "The Rain Tunnel", "The Train", "The Tree", "The Train Yard",
                          "Uncharted Territories", "Underpass", "West Fragment"};
    }


    //FORTNITE MAP
    if(ui->mapSelect->currentText() == "Battle Royale Island"){
        locationsCache = {"Lazy Lake", "Risky Reels", "Craggy Cliffs", "Slurpy Swamp", "Misty Meadows",
                          "Dirty Docks", "Frenzy Farm", "Pleasant Park", "Sweaty Sands", "Steamy Stacks",
                          "Weeping Woods", "Holly Hedges", "Retail Row", "Salty Springs", "The Agency",
                          "The Shark", "The Yacht", "The Rig", "The Grotto"};
    }


    //PUBG MAPS
    if (ui->mapSelect->currentText() == "Erangel"){
        locationsCache = { "Kameshki","Zharki", "Stalber", "Northwest Bunker", "West Bunker", "East Bunker", "Shooting Range", "Yasnaya Compound",
                           "Plane Crash", "Georgopol", "Yasnaya Polyana", "Rozhok", "Hospital", "Georgopol Hills", "Ruins", "Water Town", "School",
                           "Apartments", "Mansion", "Lipovka", "Hay Farm", "Pochinki", "Pochinki Hills", "Shelter", "Prison", "Gatka Radio",
                           "Gatka Trenches", "Woodcutter Camp", "Mylta Power", "Swamp Town", "Farmlands", "Farm Ridge", "Farm", "Mylta", "Factory",
                           "Quarry", "Ridge Comples", "Primolsk", "Ferry Pier", "Novorepnoye", "Novorepnoye Radio", "Sosnovka Military Base" };
    }
    if (ui->mapSelect->currentText() == "Miramar"){
        locationsCache = { "Torre Ahumada", "Campo Militar", "Alcantara", "La Cobreria", "Cruz del Valle", "Tierra Bronca", "Ruins", "Trailer Park",
                           "Crater Fields", "Water Treatment", "El Pozo", "San Martin", "Hacienda del Patron", "El Azahar", "Monte Nuevo",
                           "Power Grid", "Graveyard", "Minas Generales", "Pecado", "La Bendita", " Impala", "Ladrillera", "Chumacera", "Los Leones",
                           "Valle del Mar", "Mines", "Puerto Paraiso", "Prison", "Minas del Sur", "Los Higos" };
    }
    if (ui->mapSelect->currentText() == "Sanhok"){
        locationsCache = { "Artillery Tunnel", "Artillery Battery", "Slum Lakes", "Watchtower North", "Artillery Underpass", "Interstellar Relay",
                           "High Desert", "The Pit", "Cascades", "Two Spines", "Wetlands", "Runoff", "Oasis", "Bunker", "The Farm",
                           "The Shattered Forest", "High Desert", "Pass", "River Center", "Bridge Valley", "Swamp Land", "Airbase", "Golden Sands",
                           "Caves", "Hydro Tunnel", "Hydro Dam", "Crossroads", "Market", "West Settlement", "Skull Town", "East Settlement",
                           "River's End", "Watchtower South", "Repulsor Station", "Thunderdome", "South Settlement", "Water Treatment","Landing Pad" };
    }


    //WARZONE MAP
    if (ui->mapSelect->currentText() == "Verdansk"){
        locationsCache = {"Dam", "Bloc 23", "Military Base", "Quarry", "Airport", "Riverside", "Lozoff Pass", "Storage Town", "Superstore",
                          "TV Station", "Bloc 18", "Junkyard", "Boneyard", "Graveyard", "Torsk Bloc", "Verdansk Stadium", "Lumber Yard",
                          "Train Station", "Hospital", "Downtown", "Farmland", "Kart Racing Track", "Promenade West", "Promenade East", "Hills",
                          "Park", "Port", "Prison"};
    }


    //Fail Safe
    if (ui->mapSelect->currentText() == "..."){
        locationsCache = {"NO GAME SELECTED"};
    }
}