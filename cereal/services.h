/* THIS IS AN AUTOGENERATED FILE, PLEASE EDIT services.py */
#ifndef __SERVICES_H
#define __SERVICES_H
#include <map>
#include <string>
struct service { std::string name; bool should_log; int frequency; int decimation; };
static std::map<std::string, service> services = {
  { "gyroscope", {"gyroscope", true, 104, 104}},
  { "gyroscope2", {"gyroscope2", true, 100, 100}},
  { "accelerometer", {"accelerometer", true, 104, 104}},
  { "accelerometer2", {"accelerometer2", true, 100, 100}},
  { "magnetometer", {"magnetometer", true, 25, -1}},
  { "lightSensor", {"lightSensor", true, 100, 100}},
  { "temperatureSensor", {"temperatureSensor", true, 2, 200}},
  { "temperatureSensor2", {"temperatureSensor2", true, 2, 200}},
  { "gpsNMEA", {"gpsNMEA", true, 9, -1}},
  { "deviceState", {"deviceState", true, 2, 1}},
  { "touch", {"touch", true, 20, 1}},
  { "can", {"can", true, 100, 2053}},
  { "controlsState", {"controlsState", true, 100, 10}},
  { "selfdriveState", {"selfdriveState", true, 100, 10}},
  { "pandaStates", {"pandaStates", true, 10, 1}},
  { "peripheralState", {"peripheralState", true, 2, 1}},
  { "radarState", {"radarState", true, 20, 5}},
  { "roadEncodeIdx", {"roadEncodeIdx", false, 20, 1}},
  { "liveTracks", {"liveTracks", true, 20, -1}},
  { "sendcan", {"sendcan", true, 100, 139}},
  { "logMessage", {"logMessage", true, 0, -1}},
  { "errorLogMessage", {"errorLogMessage", true, 0, 1}},
  { "liveCalibration", {"liveCalibration", true, 4, 4}},
  { "liveTorqueParameters", {"liveTorqueParameters", true, 4, 1}},
  { "androidLog", {"androidLog", true, 0, -1}},
  { "carState", {"carState", true, 100, 10}},
  { "carControl", {"carControl", true, 100, 10}},
  { "carOutput", {"carOutput", true, 100, 10}},
  { "longitudinalPlan", {"longitudinalPlan", true, 20, 10}},
  { "driverAssistance", {"driverAssistance", true, 20, 20}},
  { "procLog", {"procLog", true, 0, 15}},
  { "gpsLocationExternal", {"gpsLocationExternal", true, 10, 10}},
  { "gpsLocation", {"gpsLocation", true, 1, 1}},
  { "ubloxGnss", {"ubloxGnss", true, 10, -1}},
  { "qcomGnss", {"qcomGnss", true, 2, -1}},
  { "gnssMeasurements", {"gnssMeasurements", true, 10, 10}},
  { "clocks", {"clocks", true, 0, 1}},
  { "ubloxRaw", {"ubloxRaw", true, 20, -1}},
  { "livePose", {"livePose", true, 20, 4}},
  { "liveParameters", {"liveParameters", true, 20, 5}},
  { "cameraOdometry", {"cameraOdometry", true, 20, 10}},
  { "thumbnail", {"thumbnail", true, 0, 1}},
  { "onroadEvents", {"onroadEvents", true, 1, 1}},
  { "carParams", {"carParams", true, 0, 1}},
  { "roadCameraState", {"roadCameraState", true, 20, 20}},
  { "driverCameraState", {"driverCameraState", true, 20, 20}},
  { "driverEncodeIdx", {"driverEncodeIdx", false, 20, 1}},
  { "driverStateV2", {"driverStateV2", true, 20, 10}},
  { "driverMonitoringState", {"driverMonitoringState", true, 20, 10}},
  { "wideRoadEncodeIdx", {"wideRoadEncodeIdx", false, 20, 1}},
  { "wideRoadCameraState", {"wideRoadCameraState", true, 20, 20}},
  { "drivingModelData", {"drivingModelData", true, 20, 10}},
  { "modelV2", {"modelV2", true, 20, -1}},
  { "managerState", {"managerState", true, 2, 1}},
  { "uploaderState", {"uploaderState", true, 0, 1}},
  { "navInstruction", {"navInstruction", true, 1, 10}},
  { "navRoute", {"navRoute", true, 0, -1}},
  { "navThumbnail", {"navThumbnail", true, 0, -1}},
  { "qRoadEncodeIdx", {"qRoadEncodeIdx", false, 20, -1}},
  { "userFlag", {"userFlag", true, 0, 1}},
  { "microphone", {"microphone", true, 10, 10}},
  { "modelManagerSP", {"modelManagerSP", true, 0, 1}},
  { "uiDebug", {"uiDebug", true, 0, 1}},
  { "testJoystick", {"testJoystick", true, 0, -1}},
  { "alertDebug", {"alertDebug", true, 20, 5}},
  { "roadEncodeData", {"roadEncodeData", false, 20, -1}},
  { "driverEncodeData", {"driverEncodeData", false, 20, -1}},
  { "wideRoadEncodeData", {"wideRoadEncodeData", false, 20, -1}},
  { "qRoadEncodeData", {"qRoadEncodeData", false, 20, -1}},
  { "livestreamWideRoadEncodeIdx", {"livestreamWideRoadEncodeIdx", false, 20, -1}},
  { "livestreamRoadEncodeIdx", {"livestreamRoadEncodeIdx", false, 20, -1}},
  { "livestreamDriverEncodeIdx", {"livestreamDriverEncodeIdx", false, 20, -1}},
  { "livestreamWideRoadEncodeData", {"livestreamWideRoadEncodeData", false, 20, -1}},
  { "livestreamRoadEncodeData", {"livestreamRoadEncodeData", false, 20, -1}},
  { "livestreamDriverEncodeData", {"livestreamDriverEncodeData", false, 20, -1}},
  { "customReservedRawData0", {"customReservedRawData0", true, 0, -1}},
  { "customReservedRawData1", {"customReservedRawData1", true, 0, -1}},
  { "customReservedRawData2", {"customReservedRawData2", true, 0, -1}},
};
#endif

