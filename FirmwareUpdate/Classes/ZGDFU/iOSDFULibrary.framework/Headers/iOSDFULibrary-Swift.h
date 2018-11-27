// Generated by Apple Swift version 4.2 effective-4.1.50 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="iOSDFULibrary",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, DFUError, closed) {
  DFUErrorRemoteLegacyDFUSuccess = 1,
  DFUErrorRemoteLegacyDFUInvalidState = 2,
  DFUErrorRemoteLegacyDFUNotSupported = 3,
  DFUErrorRemoteLegacyDFUDataExceedsLimit = 4,
  DFUErrorRemoteLegacyDFUCrcError = 5,
  DFUErrorRemoteLegacyDFUOperationFailed = 6,
  DFUErrorRemoteSecureDFUSuccess = 11,
  DFUErrorRemoteSecureDFUOpCodeNotSupported = 12,
  DFUErrorRemoteSecureDFUInvalidParameter = 13,
  DFUErrorRemoteSecureDFUInsufficientResources = 14,
  DFUErrorRemoteSecureDFUInvalidObject = 15,
  DFUErrorRemoteSecureDFUSignatureMismatch = 16,
  DFUErrorRemoteSecureDFUUnsupportedType = 17,
  DFUErrorRemoteSecureDFUOperationNotpermitted = 18,
  DFUErrorRemoteSecureDFUOperationFailed = 20,
  DFUErrorRemoteSecureDFUExtendedError = 21,
  DFUErrorRemoteExperimentalButtonlessDFUSuccess = 9001,
  DFUErrorRemoteExperimentalButtonlessDFUOpCodeNotSupported = 9002,
  DFUErrorRemoteExperimentalButtonlessDFUOperationFailed = 9004,
  DFUErrorRemoteButtonlessDFUSuccess = 31,
  DFUErrorRemoteButtonlessDFUOpCodeNotSupported = 32,
  DFUErrorRemoteButtonlessDFUOperationFailed = 34,
/// Providing the DFUFirmware is required.
  DFUErrorFileNotSpecified = 101,
/// Given firmware file is not supported.
  DFUErrorFileInvalid = 102,
/// Since SDK 7.0.0 the DFU Bootloader requires the extended Init Packet. For more details, see:
/// http://infocenter.nordicsemi.com/topic/com.nordic.infocenter.sdk5.v11.0.0/bledfu_example_init.html?cp=4_0_0_4_2_1_1_3
  DFUErrorExtendedInitPacketRequired = 103,
/// Before SDK 7.0.0 the init packet could have contained only 2-byte CRC value, and was optional.
/// Providing an extended one instead would cause CRC error during validation (the bootloader assumes that the 2 first bytes
/// of the init packet are the firmware CRC).
  DFUErrorInitPacketRequired = 104,
  DFUErrorFailedToConnect = 201,
  DFUErrorDeviceDisconnected = 202,
  DFUErrorBluetoothDisabled = 203,
  DFUErrorServiceDiscoveryFailed = 301,
  DFUErrorDeviceNotSupported = 302,
  DFUErrorReadingVersionFailed = 303,
  DFUErrorEnablingControlPointFailed = 304,
  DFUErrorWritingCharacteristicFailed = 305,
  DFUErrorReceivingNotificationFailed = 306,
  DFUErrorUnsupportedResponse = 307,
/// Error raised during upload when the number of bytes sent is not equal to number of bytes confirmed in Packet Receipt Notification.
  DFUErrorBytesLost = 308,
/// Error raised when the CRC reported by the remote device does not match. Service has done 3 tries to send the data.
  DFUErrorCrcError = 309,
};

@class DFUFirmwareSize;
enum DFUFirmwareType : uint8_t;

/// The DFUFirmware object wraps the firmware file.
SWIFT_CLASS("_TtC13iOSDFULibrary11DFUFirmware")
@interface DFUFirmware : NSObject
/// The name of the firmware file.
@property (nonatomic, readonly, copy) NSString * _Nullable fileName;
/// The URL to the firmware file.
@property (nonatomic, readonly, copy) NSURL * _Nullable fileUrl;
/// Information whether the firmware was successfully initialized.
@property (nonatomic, readonly) BOOL valid;
/// The size of each component of the firmware.
@property (nonatomic, readonly, strong) DFUFirmwareSize * _Nonnull size;
/// Number of connectinos required to transfer the firmware. This does not include the connection needed to switch to the DFU mode.
@property (nonatomic, readonly) NSInteger parts;
/// Creates the DFU Firmware object from a Distribution packet (ZIP). Such file must contain a manifest.json file
/// with firmware metadata and at least one firmware binaries. Read more about the Distribution packet on
/// the DFU documentation.
/// \param urlToZipFile URL to the Distribution packet (ZIP)
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithUrlToZipFile:(NSURL * _Nonnull)urlToZipFile;
/// Creates the DFU Firmware object from a Distribution packet (ZIP). Such file must contain a manifest.json file
/// with firmware metadata and at least one firmware binaries. Read more about the Distribution packet on
/// the DFU documentation.
/// \param urlToZipFile URL to the Distribution packet (ZIP)
///
/// \param type The type of the firmware to use
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithUrlToZipFile:(NSURL * _Nonnull)urlToZipFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER;
/// Creates the DFU Firmware object from a Distribution packet (ZIP). Such file must contain a manifest.json file
/// with firmware metadata and at least one firmware binaries. Read more about the Distribution packet on
/// the DFU documentation.
/// \param zipFile The Distribution packet (ZIP) data
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithZipFile:(NSData * _Nonnull)zipFile;
/// Creates the DFU Firmware object from a Distribution packet (ZIP). Such file must contain a manifest.json file
/// with firmware metadata and at least one firmware binaries. Read more about the Distribution packet on
/// the DFU documentation.
/// \param zipFile The Distribution packet (ZIP) data
///
/// \param type The type of the firmware to use
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithZipFile:(NSData * _Nonnull)zipFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER;
/// Creates the DFU Firmware object from a BIN or HEX file. Setting the DAT file with an Init packet is optional,
/// but may be required by the bootloader (SDK 7.0.0+).
/// \param urlToBinOrHexFile URL to a BIN or HEX file with the firmware
///
/// \param urlToDatFile An optional URL to a DAT file with the Init packet
///
/// \param type The type of the firmware
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithUrlToBinOrHexFile:(NSURL * _Nonnull)urlToBinOrHexFile urlToDatFile:(NSURL * _Nullable)urlToDatFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER;
/// Creates the DFU Firmware object from a BIN data. Setting the DAT file with an Init packet is optional,
/// but may be required by the bootloader (SDK 7.0.0+).
/// \param binFile Content of the new firmware as BIN
///
/// \param datFile An optional DAT file data with the Init packet
///
/// \param type The type of the firmware
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithBinFile:(NSData * _Nonnull)binFile datFile:(NSData * _Nullable)datFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER;
/// Creates the DFU Firmware object from a HEX data. Setting the DAT file with an Init packet is optional,
/// but may be required by the bootloader (SDK 7.0.0+).
/// \param binFile Content of the HEX file containing new firmware
///
/// \param datFile An optional DAT file data with the Init packet
///
/// \param type The type of the firmware
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithHexFile:(NSData * _Nonnull)hexFile datFile:(NSData * _Nullable)datFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13iOSDFULibrary15DFUFirmwareSize")
@interface DFUFirmwareSize : NSObject
/// Size of the softdevice in bytes.
/// If not even, add it to the bootloader size to get size of softdevice_bootloader.bin.
@property (nonatomic, readonly) uint32_t softdevice;
/// Size of the bootloader in bytes.
/// If equal to 1 the ZIP contains SD+BL and size of SD or BL is not known exactly, but their sum is known.
@property (nonatomic, readonly) uint32_t bootloader;
/// Size of the application in bytes.
@property (nonatomic, readonly) uint32_t application;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// The type of the BIN or HEX file, or selection of content from the Distribution packet (ZIP) file.
/// Select .softdeviceBootloaderApplication to sent all files from the ZIP (even it there is let’s say
/// only application). This works as a filter. If you have SD+BL+App in the ZIP, but want to send
/// only App, you may set the type to .application.
/// <ul>
///   <li>
///     softdevice:           Firmware file will be sent as a new Softdevice
///   </li>
///   <li>
///     bootloader:           Firmware file will be sent as a new Bootloader
///   </li>
///   <li>
///     application:          Firmware file will be sent as a new application
///   </li>
///   <li>
///     softdeviceBootloader: Firmware file will be sent as a new Softdevice + Bootloader
///   </li>
///   <li>
///     softdeviceBootloaderApplication: All content of the ZIP file will be sent
///   </li>
/// </ul>
typedef SWIFT_ENUM(uint8_t, DFUFirmwareType, closed) {
  DFUFirmwareTypeSoftdevice = 1,
  DFUFirmwareTypeBootloader = 2,
  DFUFirmwareTypeApplication = 4,
  DFUFirmwareTypeSoftdeviceBootloader = 3,
  DFUFirmwareTypeSoftdeviceBootloaderApplication = 7,
};

@class CBPeripheral;
@class NSNumber;
@class CBUUID;

/// The DFUPeripheralSelectorDelegate is used when both the Softdevice (or Softdevice and Bootloader) and Application
/// are going to be updated, or when a peripheral is to be switched to the bootloader mode that will change its address.
/// This library supports sending both BIN files from a ZIP Distribution Packet automatically.
/// However, when sending the Softdevice update, the DFU Bootloader may remove the current application in order to
/// make space for the new Softdevice firmware (Legacy DFU, or Secure DFU with single bank enabled when new SD+BL are larger then space available)
/// or may advertise in Bootloader mode for number of seconds (Secure DFU). When the new Softdevice is flashed the bootloader restarts the device
/// and starts advertising in DFU Bootloader mode.
/// Since SDK 8.0.0, to solve caching problem on a host that is no bonded (in case there is no Service Changed characteristic),
/// the bootloader starts to advertise with an address incremented by 1.
/// The DFU Library has to scan for a peripheral with this new address. However, as iOS does not expose the device
/// address in the public CoreBluetooth API, address matching, used on Android, can not be used.
/// Instead, this selector is used. The DFU Service will start scanning for peripherals with a UUID filter, where
/// the list of required UUID is returned by the <code>filterBy(hint:)</code> method. If your device in the Bootloader mode
/// does not advertise with any service UUIDs, or this is not enough, you may select a target device
/// by their advertising packet or RSSI using this delegate.
/// In SDK 14.0.0 a new feature was added to the Buttonless DFU for non-bonded devices which allows to send a unique name
/// to the device before it is switched to bootloader mode. After jump, the bootloader will advertise with this name
/// as the Complete Local Name making it easy to select proper device. In this case you don’t have to override the default
/// peripheral selector. More: http://infocenter.nordicsemi.com/topic/com.nordic.infocenter.sdk5.v14.0.0/service_dfu.html
SWIFT_PROTOCOL("_TtP13iOSDFULibrary29DFUPeripheralSelectorDelegate_")
@protocol DFUPeripheralSelectorDelegate
/// Returns whether the given peripheral is a device in DFU Bootloader mode.
/// \param peripheral the peripheral to be checked
///
/// \param advertisementData scanned advertising data
///
/// \param RSSI received signal strength indication in dBm
///
/// \param name an optional name to look for in the advertisement packet (see Buttonless DFU in SDK 14)
///
///
/// returns:
/// true (YES) if given peripheral is what service is looking for
- (BOOL)select:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI hint:(NSString * _Nullable)name SWIFT_WARN_UNUSED_RESULT;
/// Returns an optional list of services that the scanner will use to filter advertising packets
/// when scanning for a device in DFU Bootloader mode. To find out what UUID you should return,
/// switch your device to DFU Bootloader mode (with a button!) and check the advertisment packet.
/// The result of this method will be applied to
/// <code>centralManager.scanForPeripheralsWithServices([CBUUID]?, options: [String : AnyObject]?)</code>
/// \param dfuServiceUUID the UUID of the DFU service that was used to flash SoftDevice and/or Bootloader.
/// Usually this service UUID is present in the DFU Bootloader’s advertising packet. Then this method may simply
/// return [dfuServiceUUID].
///
///
/// returns:
/// an optional list of services or nil
- (NSArray<CBUUID *> * _Nullable)filterByHint:(CBUUID * _Nonnull)dfuServiceUUID SWIFT_WARN_UNUSED_RESULT;
@end


/// The default selector. Selects the first device with Legacy or Secure DFU Service UUID in the advertising packet.
SWIFT_CLASS("_TtC13iOSDFULibrary21DFUPeripheralSelector")
@interface DFUPeripheralSelector : NSObject <DFUPeripheralSelectorDelegate>
- (BOOL)select:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI hint:(NSString * _Nullable)name SWIFT_WARN_UNUSED_RESULT;
- (NSArray<CBUUID *> * _Nullable)filterByHint:(CBUUID * _Nonnull)dfuServiceUUID SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// The progress delegates may be used to notify user about progress updates.
/// The only method of the delegate is only called when the service is in the Uploading state.
SWIFT_PROTOCOL("_TtP13iOSDFULibrary19DFUProgressDelegate_")
@protocol DFUProgressDelegate
/// Callback called in the <code>State.Uploading</code> state. Gives detailed information about the progress
/// and speed of transmission. This method is always called at least two times (for 0% and 100%)
/// if upload has started and did not fail.
/// This method is called in the main thread and is safe to update any UI.
/// \param part number of part that is currently being transmitted. Parts start from 1
/// and may have value either 1 or 2. Part 2 is used only when there were Soft Device and/or
/// Bootloader AND an Application in the Distribution Packet and the DFU target does not
/// support sending all files in a single connection. First the SD and/or BL will be sent, then
/// the service will disconnect, reconnect again to the (new) bootloader and send the Application.
///
/// \param totalParts total number of parts that are to be send (this is always equal to 1 or 2).
///
/// \param progress the current progress of uploading the current part in percentage (values 0-100).
/// Each value will be called at most once - in case of a large file a value e.g. 3% will be called only once,
/// despite that it will take more than one packet to reach 4%. In case of a small firmware file
/// some values may be ommited. For example, if firmware file would be only 20 bytes you would get
/// a callback 0% (called always) and then 100% when done.
///
/// \param currentSpeedBytesPerSecond the current speed in bytes per second
///
/// \param avgSpeedBytesPerSecond the average speed in bytes per second
///
- (void)dfuProgressDidChangeFor:(NSInteger)part outOf:(NSInteger)totalParts to:(NSInteger)progress currentSpeedBytesPerSecond:(double)currentSpeedBytesPerSecond avgSpeedBytesPerSecond:(double)avgSpeedBytesPerSecond;
@end


SWIFT_CLASS("_TtC13iOSDFULibrary20DFUServiceController")
@interface DFUServiceController : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// Call this method to pause uploading during the transmition process. The transmition can be resumed
/// only when connection remains. If service has already started sending firmware data it will pause after receiving
/// next Packet Receipt Notification. Otherwise it will continue to send Op Codes and pause before sending the first bytes
/// of the firmware. With Packet Receipt Notifications disabled it is the only moment when upload may be paused.
- (void)pause;
/// Call this method to resume the paused transffer, otherwise does nothing.
- (void)resume;
/// Aborts the upload. The phone will disconnect from peripheral. The peripheral will try to
/// recover the last firmware. Might, restart in the Bootloader mode if the application has been
/// removed.
/// Abort (Reset) command will be sent instead of a next Op Code, or after receiving a
/// Packet Receipt Notification. It PRM procedure is disabled it will continue until the whole
/// firmware is sent and then Reset will be sent instead of Verify Firmware op code.
///
/// returns:
/// true if DFU has been aborted.
- (BOOL)abort SWIFT_WARN_UNUSED_RESULT;
/// Starts again aborted DFU operation.
- (void)restart;
/// Returns true if DFU operation has been paused.
@property (nonatomic, readonly) BOOL paused;
/// Returns true if DFU operation has been aborted.
@property (nonatomic, readonly) BOOL aborted;
@end

enum DFUState : NSInteger;

/// The service delegate reports about state changes and errors.
SWIFT_PROTOCOL("_TtP13iOSDFULibrary18DFUServiceDelegate_")
@protocol DFUServiceDelegate
/// Callback called when state of the DFU Service has changed.
/// This method is called in the main thread and is safe to update any UI.
/// \param state the new state fo the service
///
- (void)dfuStateDidChangeTo:(enum DFUState)state;
/// Called after an error occurred.
/// The device will be disconnected and DFU operation has been aborted.
/// This method is called in the main thread and is safe to update any UI.
/// \param error the error code
///
/// \param message error description
///
- (void)dfuError:(enum DFUError)error didOccurWithMessage:(NSString * _Nonnull)message;
@end

@protocol LoggerDelegate;
@class CBCentralManager;

/// The DFUServiceInitiator object should be used to send a firmware update to a remote BLE target compatible
/// with the Nordic Semiconductor’s DFU (Device Firmware Update).
/// A <code>delegate</code>, <code>progressDelegate</code> and <code>logger</code> may be specified in order to receive status information.
SWIFT_CLASS("_TtC13iOSDFULibrary19DFUServiceInitiator")
@interface DFUServiceInitiator : NSObject
/// The service delegate is an object that will be notified about state changes of the DFU Service.
/// Setting it is optional but recommended.
@property (nonatomic, weak) id <DFUServiceDelegate> _Nullable delegate;
/// An optional progress delegate will be called only during upload. It notifies about current upload
/// percentage and speed.
@property (nonatomic, weak) id <DFUProgressDelegate> _Nullable progressDelegate;
/// The logger is an object that should print given messages to the user. It is optional.
@property (nonatomic, weak) id <LoggerDelegate> _Nullable logger;
/// The selector object is used when the device needs to disconnect and start advertising with a different address
/// to avodi caching problems, for example after switching to the Bootloader mode, or during sending a firmware
/// containing a Softdevice (or Softdevice and Bootloader) and the Application.
/// After flashing the first part (containing the Softdevice), the device restarts in the
/// DFU Bootloader mode and may (since SDK 8.0.0) start advertising with an address incremented by 1.
/// The peripheral specified in the <code>init</code> may no longer be used as there is no device advertising with its address.
/// The DFU Service will scan for a new device and connect to the first device returned by the selector.
/// The default selecter returns the first device with the required DFU Service UUID in the advertising packet
/// (Secure or Legacy DFU Service UUID).
/// Ignore this property if not updating Softdevice and Application from one ZIP file or your
@property (nonatomic, strong) id <DFUPeripheralSelectorDelegate> _Nonnull peripheralSelector;
/// The number of packets of firmware data to be received by the DFU target before sending
/// a new Packet Receipt Notification.
/// If this value is 0, the packet receipt notification will be disabled by the DFU target.
/// Default value is 12.
/// PRNs are no longer required on iOS 11 and MacOS 10.13 or newer, but make sure
/// your device is able to be updated without. Old SDKs, before SDK 7 had very slow
/// memory management and could not handle packets that fast. If your device
/// is based on such SDK it is recommended to leave the default value.
/// Disabling PRNs on iPhone 8 with iOS 11.1.2 increased the speed from 1.7 KB/s to 2.7 KB/s
/// on DFU from SDK 14.1 where packet size is 20 bytes (higher MTU not supported yet).
/// On older versions, higher values of PRN (~20+), or disabling it, may speed up
/// the upload process, but also cause a buffer overflow and hang the Bluetooth adapter.
/// Maximum verified values were 29 for iPhone 6 Plus or 22 for iPhone 7, both iOS 10.1.
@property (nonatomic) uint16_t packetReceiptNotificationParameter;
/// <em>Legacy DFU only.</em>
/// Setting this property to true will prevent from jumping to the DFU Bootloader
/// mode in case there is no DFU Version characteristic. Use it if the DFU operation can be handled by your
/// device running in the application mode. If the DFU Version characteristic exists, the
/// information whether to begin DFU operation, or jump to bootloader, is taken from the
/// characteristic’s value. The value returned equal to 0x0100 (read as: minor=1, major=0, or version 0.1)
/// means that the device is in the application mode and buttonless jump to DFU Bootloader is supported.
/// Currently, the following values of the DFU Version characteristic are supported:
/// <em>No DFU Version characteristic</em> - one of the first implementations of DFU Service. The device
/// may support only Application update (version from SDK 4.3.0), may support Soft Device, Bootloader
/// and Application update but without buttonless jump to bootloader (SDK 6.0.0) or with
/// buttonless jump (SDK 6.1.0).
/// The DFU Library determines whether the device is in application mode or in DFU Bootloader mode
/// by counting number of services: if no DFU Service found - device is in app mode and does not support
/// buttonless jump, if the DFU Service is the only service found (except General Access and General Attribute
/// services) - it assumes it is in DFU Bootloader mode and may start DFU immediately, if there is
/// at least one service except DFU Service - the device is in application mode and supports buttonless
/// jump. In the lase case, you want to perform DFU operation without jumping - call the setForceDfu(force:Bool)
/// method with parameter equal to true.
/// <em>0.1</em> - Device is in a mode that supports buttonless jump to the DFU Bootloader
/// <em>0.5</em> - Device can handle DFU operation. Extended Init packet is required. Bond information is lost
/// in the bootloader mode and after updating an app. Released in SDK 7.0.0.
/// <em>0.6</em> - Bond information is kept in bootloader mode and may be kept after updating application
/// (DFU Bootloader must be configured to preserve the bond information).
/// <em>0.7</em> - The SHA-256 firmware hash is used in the Extended Init Packet instead of CRC-16.
/// This feature is transparent for the DFU Service.
/// <em>0.8</em> - The Extended Init Packet is signed using the private key. The bootloader, using the public key,
/// is able to verify the content. Released in SDK 9.0.0 as experimental feature.
/// Caution! The firmware type (Application, Bootloader, SoftDevice or SoftDevice+Bootloader) is not
/// encrypted as it is not a part of the Extended Init Packet. A change in the protocol will be required
/// to fix this issue.
/// By default the DFU Library will try to switch the device to the DFU Bootloader mode if it finds
/// more services then one (DFU Service). It assumes it is already in the bootloader mode
/// if the only service found is the DFU Service. Setting the forceDfu to true (YES) will prevent from
/// jumping in these both cases.
@property (nonatomic) BOOL forceDfu;
/// In SDK 14.0.0 a new feature was added to the Buttonless DFU for non-bonded devices which allows to send a unique name
/// to the device before it is switched to bootloader mode. After jump, the bootloader will advertise with this name
/// as the Complete Local Name making it easy to select proper device. In this case you don’t have to override the default
/// peripheral selector.
/// Read more: http://infocenter.nordicsemi.com/topic/com.nordic.infocenter.sdk5.v14.0.0/service_dfu.html
/// Setting this flag to false you will disable this feature. iOS DFU Library will not send the 0x02-[len]-[new name]
/// command prior jumping and will rely on the DfuPeripheralSelectorDelegate just like it used to in previous SDK.
/// This flag is ignored in Legacy DFU.
/// <em>It is recommended to keep this flag set to true unless necessary.</em>
/// For more information read: https://github.com/NordicSemiconductor/IOS-nRF-Connect/issues/16
@property (nonatomic) BOOL alternativeAdvertisingNameEnabled;
/// Set this flag to true to enable experimental buttonless feature in Secure DFU. When the
/// experimental Buttonless DFU Service is found on a device, the service will use it to
/// switch the device to the bootloader mode, connect to it in that mode and proceed with DFU.
/// <em>Please, read the information below before setting it to true.</em>
/// In the SDK 12.x the Buttonless DFU feature for Secure DFU was experimental.
/// It is NOT recommended to use it: it was not properly tested, had implementation bugs
/// (e.g. https://devzone.nordicsemi.com/question/100609/sdk-12-bootloader-erased-after-programming/) and
/// does not required encryption and therefore may lead to DOS attack (anyone can use it to switch the device
/// to bootloader mode). However, as there is no other way to trigger bootloader mode on devices
/// without a button, this DFU Library supports this service, but the feature must be explicitly enabled here.
/// Be aware, that setting this flag to false will no protect your devices from this kind of attacks, as
/// an attacker may use another app for that purpose. To be sure your device is secure remove this
/// experimental service from your device.
/// Spec:
/// Buttonless DFU Service UUID: 8E400001-F315-4F60-9FB8-838830DAEA50
/// Buttonless DFU characteristic UUID: 8E400001-F315-4F60-9FB8-838830DAEA50 (the same)
/// Enter Bootloader Op Code: 0x01
/// Correct return value: 0x20-01-01 , where:
/// 0x20 - Response Op Code
/// 0x01 - Request Code
/// 0x01 - Success
/// The device should disconnect and restart in DFU mode after sending the notification.
/// In SDK 13 this issue will be fixed by a proper implementation (bonding required,
/// passing bond information to the bootloader, encryption, well tested). It is recommended to use this
/// new service when SDK 13 (or later) is out. TODO: fix the docs when SDK 13 is out.
@property (nonatomic) BOOL enableUnsafeExperimentalButtonlessServiceInSecureDfu;
/// Creates the DFUServiceInitializer that will allow to send an update to the given peripheral.
/// The peripheral should be disconnected prior to calling start() method.
/// The DFU service will automatically connect to the device, check if it has required DFU
/// service (return a delegate callback if does not have such), jump to the DFU Bootloader mode
/// if necessary and perform the DFU. Proper delegate methods will be called during the process.
/// seealso:
/// peripheralSelector property - a selector used when scanning for a device in DFU Bootloader mode
/// in case you want to update a Softdevice and Application from a single ZIP Distribution Packet.
/// \param centralManager manager that will be used to connect to the peripheral
///
/// \param target the DFU target peripheral
///
///
/// returns:
/// the initiator instance
- (nonnull instancetype)initWithCentralManager:(CBCentralManager * _Nonnull)centralManager target:(CBPeripheral * _Nonnull)target OBJC_DESIGNATED_INITIALIZER;
/// Sets the file with the firmware. The file must be specified before calling <code>start()</code> method,
/// and must not be nil.
/// \param file The firmware wrapper object
///
///
/// returns:
/// the initiator instance to allow chain use
- (DFUServiceInitiator * _Nonnull)withFirmware:(DFUFirmware * _Nonnull)file SWIFT_WARN_UNUSED_RESULT;
/// Starts sending the specified firmware to the DFU target.
/// When started, the service will automatically connect to the target, switch to DFU Bootloader mode
/// (if necessary), and send all the content of the specified firmware file in one or two connections.
/// Two connections will be used if a ZIP file contains a Soft Device and/or Bootloader and an Application.
/// First the Soft Device and/or Bootloader will be transferred, then the service will disconnect, reconnect to
/// the (new) Bootloader again and send the Application (unless the target supports receiving all files in a single
/// connection).
/// The current version of the DFU Bootloader, due to memory limitations, may receive together only a Softdevice and Bootloader.
///
/// returns:
/// A DFUServiceController object that can be used to control the DFU operation.
- (DFUServiceController * _Nullable)start SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// The state of the DFU Service.
/// <ul>
///   <li>
///     connecting:      Service is connecting to the DFU target
///   </li>
///   <li>
///     starting:        DFU Service is initializing DFU operation
///   </li>
///   <li>
///     enablingDfuMode: Service is switching the device to DFU mode
///   </li>
///   <li>
///     uploading:       Service is uploading the firmware
///   </li>
///   <li>
///     validating:      The DFU target is validating the firmware
///   </li>
///   <li>
///     disconnecting:   The iDevice is disconnecting or waiting for disconnection
///   </li>
///   <li>
///     completed:       DFU operation is completed and successful
///   </li>
///   <li>
///     aborted:         DFU Operation was aborted
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, DFUState, closed) {
  DFUStateConnecting = 0,
  DFUStateStarting = 1,
  DFUStateEnablingDfuMode = 2,
  DFUStateUploading = 3,
  DFUStateValidating = 4,
  DFUStateDisconnecting = 5,
  DFUStateCompleted = 6,
  DFUStateAborted = 7,
};


SWIFT_CLASS("_TtC13iOSDFULibrary25LegacyDFUServiceInitiator")
@interface LegacyDFUServiceInitiator : DFUServiceInitiator
- (DFUServiceController * _Nullable)start SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithCentralManager:(CBCentralManager * _Nonnull)centralManager target:(CBPeripheral * _Nonnull)target OBJC_DESIGNATED_INITIALIZER;
@end

/// Log level. Logger application may filter log entries based on their level. Levels allow to ignore less important messages.
/// warning:
/// -     Important messages.
/// <ul>
///   <li>
///     Debug -       Lowest priority. Usually names of called methods or callbacks received.
///   </li>
///   <li>
///     Verbose -     Low priority messages what the service is doing.
///   </li>
///   <li>
///     Info -        Messages about completed tasks.
///   </li>
///   <li>
///     Application - Messages about application level events, in this case DFU messages in human-readable form.
///   </li>
///   <li>
///     Error -       Highest priority messages with errors.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, LogLevel, closed) {
  LogLevelDebug = 0,
  LogLevelVerbose = 1,
  LogLevelInfo = 5,
  LogLevelApplication = 10,
  LogLevelWarning = 15,
  LogLevelError = 20,
};


/// The Logger delegate.
SWIFT_PROTOCOL("_TtP13iOSDFULibrary14LoggerDelegate_")
@protocol LoggerDelegate
/// This method is called whenever a new log entry is to be saved. The logger implementation should save this or present it to the user.
/// It is NOT safe to update any UI from this method as multiple threads may log.
/// \param level the log level
///
/// \param message the message
///
- (void)logWith:(enum LogLevel)level message:(NSString * _Nonnull)message;
@end


SWIFT_CLASS("_TtC13iOSDFULibrary25SecureDFUServiceInitiator")
@interface SecureDFUServiceInitiator : DFUServiceInitiator
- (DFUServiceController * _Nullable)start SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithCentralManager:(CBCentralManager * _Nonnull)centralManager target:(CBPeripheral * _Nonnull)target OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
