#include "Net.h"
#include <esp_log.h>

Net::Net() {}
Net::~Net() {}

bool Net::init() {
  // Initialize Wi-Fi/network hardware (ESP-IDF)
  return true;
}

bool Net::connect(const char *ssid, const char *password) {
  // Configure and connect to Wi-Fi AP
  // See esp_wifi.h for setup
  return false;
}

bool Net::disconnect() {
  // Disconnect from Wi-Fi
  return false;
}

bool Net::isConnected() {
  // Query connection state
  return false;
}

bool Net::startServer(int port) {
  // Start TCP server on given port
  return false;
}

void Net::stopServer() {
  // Stop TCP server
}

int Net::send(int clientId, const void *data, int len) {
  // Send data to client
  return -1;
}

int Net::receive(int clientId, void *buffer, int maxLen) {
  // Receive data from client
  return -1;
}

void Net::closeClient(int clientId) {
  // Close client connection
}

int Net::waitForClient() {
  // Wait for new client connection, return client id, -1 on error/timeout
  return -1;
}