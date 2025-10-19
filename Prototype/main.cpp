#include <iostream>
#include "prototypes/TextBox.hpp"
#include "prototypes/Image.hpp"
#include "prototypes/Table.hpp"
#include "prototypes/Chart.hpp"
#include "PrototypeRegistry.hpp"

int main() {
    PrototypeRegistry registry;
    TextBox* defaultTextBox = new TextBox("Default Text", 12);
    Image* defaultImage = new Image("default.png", 300, 200);
    Table* defaultTable = new Table(3, 3);
    defaultTable->setCell(0, 0, "Header1");
    defaultTable->setCell(0, 1, "Header2");
    defaultTable->setCell(0, 2, "Header3");
    Chart* defaultChart = new Chart("Sales Chart");
    defaultChart->addDataPoint(10);
    defaultChart->addDataPoint(20);
    defaultChart->addDataPoint(30);
    registry.registerPrototype("TextBox", defaultTextBox);
    registry.registerPrototype("Image", defaultImage);
    registry.registerPrototype("Table", defaultTable);
    registry.registerPrototype("Chart", defaultChart);
    DocumentElement* myTextBox = registry.createClone("TextBox");
    DocumentElement* myImage = registry.createClone("Image");
    DocumentElement* myTable = registry.createClone("Table");
    DocumentElement* myChart = registry.createClone("Chart");
    if (auto txt = dynamic_cast<TextBox*>(myTextBox)) {
        txt->setText("Hello, Prototype Pattern!");
    }
    std::cout << "Cloned Document Elements:\n";
    myTextBox->print();
    myImage->print();
    myTable->print();
    myChart->print();
    delete myTextBox;
    delete myImage;
    delete myTable;
    delete myChart;

    return 0;
}
