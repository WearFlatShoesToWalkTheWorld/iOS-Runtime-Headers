/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBatteryAgent : PLAgent {
    PLTimer * _EABatteryTimer;
    double  _EAEnergyDrained;
    BOOL  _allowGasGaugeRead;
    PLXPCResponderOperatorComposition * _batteryDischargeCurrentResponder;
    PLXPCResponderOperatorComposition * _batteryInfoResponder;
    double  _batteryLevelPercent;
    PLXPCResponderOperatorComposition * _batteryTemperatureResponder;
    PLEntryNotificationOperatorComposition * _canSleepEntryNotifications;
    PLSemaphore * _canSleepSemaphore;
    BOOL  _deviceIsPluggedIn;
    NSString * _entryKeyEABattery;
    NSString * _entryKeyEAPencilStats;
    struct ggcontext { } * _gasGagueConnection;
    int  _gasGaugeConsecutiveEmptyEntriesCount;
    PLTimer * _gasGaugeTimer;
    PLIOKitOperatorComposition * _ioAccessoryManager;
    PLIOKitOperatorComposition * _iokit;
    BOOL  _isEABatteryConnected;
    bool  _isFirstTimeCheckingPingPong;
    bool  _isPingPongCharging;
    NSNumber * _lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
    int  _priIOAccessoryPowerMode;
    double  _rawBatteryVoltageVolt;
    PLMonotonicTimer * _significantBatteryChangeTimer;
    NSMutableArray * _trackedAccessories;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
}

@property (retain) PLTimer *EABatteryTimer;
@property double EAEnergyDrained;
@property BOOL allowGasGaugeRead;
@property (retain) PLXPCResponderOperatorComposition *batteryDischargeCurrentResponder;
@property (retain) PLXPCResponderOperatorComposition *batteryInfoResponder;
@property double batteryLevelPercent;
@property (retain) PLXPCResponderOperatorComposition *batteryTemperatureResponder;
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications;
@property (retain) PLSemaphore *canSleepSemaphore;
@property BOOL deviceIsPluggedIn;
@property (readonly) NSString *entryKeyEABattery;
@property (readonly) NSString *entryKeyEAPencilStats;
@property struct ggcontext { }*gasGagueConnection;
@property int gasGaugeConsecutiveEmptyEntriesCount;
@property (retain) PLTimer *gasGaugeTimer;
@property (readonly) PLIOKitOperatorComposition *ioAccessoryManager;
@property (readonly) PLIOKitOperatorComposition *iokit;
@property BOOL isEABatteryConnected;
@property bool isFirstTimeCheckingPingPong;
@property bool isPingPongCharging;
@property (retain) NSNumber *lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
@property int priIOAccessoryPowerMode;
@property double rawBatteryVoltageVolt;
@property (retain) PLMonotonicTimer *significantBatteryChangeTimer;
@property (retain) NSMutableArray *trackedAccessories;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;

+ (id)defaults;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitionEABattery;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionEAPencil;
+ (id)entryEventForwardDefinitionLightningConnectorStatus;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionBatteryConfig;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionBatteryShutdown;
+ (id)entryEventPointDefinitionEAPencil;
+ (id)entryEventPointDefinitionGasGaugeReconnect;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)EABatteryTimer;
- (double)EAEnergyDrained;
- (void)accessoryConnected:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (BOOL)allowGasGaugeRead;
- (bool)assetThresholdsChanged;
- (id)batteryDischargeCurrentResponder;
- (id)batteryInfoResponder;
- (double)batteryLevelPercent;
- (int)batteryLifetimeUPOCount;
- (id)batteryTemperatureResponder;
- (id)canSleepEntryNotifications;
- (id)canSleepSemaphore;
- (void)cancelEALogging;
- (void)checkBatteryHealthForBUISuggestion:(id)arg1;
- (bool)clearBatteryShutdownData;
- (void)dealloc;
- (void)detectEAPencilConnectionWithNotification:(id)arg1;
- (BOOL)deviceIsPluggedIn;
- (id)entryKeyEABattery;
- (id)entryKeyEAPencilStats;
- (void)fakeLogEntry:(id)arg1;
- (struct ggcontext { }*)gasGagueConnection;
- (int)gasGaugeConsecutiveEmptyEntriesCount;
- (BOOL)gasGaugeOpenAndStartLogging;
- (void)gasGaugeRead;
- (BOOL)gasGaugeStopLoggingAndClose;
- (id)gasGaugeTimer;
- (id)getBaseIdentifierFromDevice:(id)arg1;
- (id)getBatteryShutdownData;
- (id)getIOPSDevices;
- (BOOL)givePluggedInFreePass;
- (id)init;
- (void)initOperatorDependancies;
- (id)ioAccessoryManager;
- (id)iokit;
- (BOOL)isEABatteryConnected;
- (BOOL)isEABatteryConnectedNow;
- (BOOL)isEAPencilConnectedNow;
- (bool)isFirstTimeCheckingPingPong;
- (bool)isNewBattery:(id)arg1;
- (bool)isPingPongCharging;
- (bool)isServiceBatteryDefaultSet;
- (id)lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
- (void)log;
- (void)logBatteryConfigToAggd:(id)arg1;
- (void)logBatteryShutdownToAggd:(id)arg1;
- (void)logEABatteryStatistics;
- (void)logEventBackwardBattery;
- (void)logEventIntervalGasGauge;
- (void)logEventNoneBatteryConfigWithRawData:(id)arg1;
- (void)logEventPointBatteryShutdown;
- (int)priIOAccessoryPowerMode;
- (double)rawBatteryVoltageVolt;
- (void)refreshEABatteryStatus;
- (void)setAggdIntegerValueFromEntry:(id)arg1 forKey:(id)arg2 withPrefix:(id)arg3;
- (void)setAllowGasGaugeRead:(BOOL)arg1;
- (void)setBatteryDischargeCurrentResponder:(id)arg1;
- (void)setBatteryInfoResponder:(id)arg1;
- (void)setBatteryLevelPercent:(double)arg1;
- (void)setBatteryTemperatureResponder:(id)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setDeviceIsPluggedIn:(BOOL)arg1;
- (void)setEABatteryTimer:(id)arg1;
- (void)setEAEnergyDrained:(double)arg1;
- (void)setGasGagueConnection:(struct ggcontext { }*)arg1;
- (void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1;
- (void)setGasGaugeTimer:(id)arg1;
- (void)setIsEABatteryConnected:(BOOL)arg1;
- (void)setIsFirstTimeCheckingPingPong:(bool)arg1;
- (void)setIsPingPongCharging:(bool)arg1;
- (void)setLastkIOPSAppleBatteryCaseCumulativeCurrentKey:(id)arg1;
- (void)setPriIOAccessoryPowerMode:(int)arg1;
- (void)setRawBatteryVoltageVolt:(double)arg1;
- (void)setServiceBatteryDefaults:(bool)arg1;
- (void)setSignificantBatteryChangeTimer:(id)arg1;
- (void)setTrackedAccessories:(id)arg1;
- (void)setupEALogging;
- (id)significantBatteryChangeTimer;
- (id)trackedAccessories;
- (id)wakeEntryNotifications;

@end
