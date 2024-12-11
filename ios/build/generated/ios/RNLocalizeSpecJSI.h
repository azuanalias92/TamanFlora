/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


  class JSI_EXPORT NativeRNLocalizeCxxSpecJSI : public TurboModule {
protected:
  NativeRNLocalizeCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::String getCalendar(jsi::Runtime &rt) = 0;
  virtual jsi::String getCountry(jsi::Runtime &rt) = 0;
  virtual jsi::Array getCurrencies(jsi::Runtime &rt) = 0;
  virtual jsi::Array getLocales(jsi::Runtime &rt) = 0;
  virtual jsi::Object getNumberFormatSettings(jsi::Runtime &rt) = 0;
  virtual jsi::String getTemperatureUnit(jsi::Runtime &rt) = 0;
  virtual jsi::String getTimeZone(jsi::Runtime &rt) = 0;
  virtual bool uses24HourClock(jsi::Runtime &rt) = 0;
  virtual bool usesMetricSystem(jsi::Runtime &rt) = 0;
  virtual std::optional<bool> usesAutoDateAndTime(jsi::Runtime &rt) = 0;
  virtual std::optional<bool> usesAutoTimeZone(jsi::Runtime &rt) = 0;

};

template <typename T>
class JSI_EXPORT NativeRNLocalizeCxxSpec : public TurboModule {
public:
  jsi::Value get(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.get(rt, propName);
  }

  static constexpr std::string_view kModuleName = "RNLocalize";

protected:
  NativeRNLocalizeCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeRNLocalizeCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeRNLocalizeCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeRNLocalizeCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    jsi::String getCalendar(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getCalendar) == 1,
          "Expected getCalendar(...) to have 1 parameters");

      return bridging::callFromJs<jsi::String>(
          rt, &T::getCalendar, jsInvoker_, instance_);
    }
    jsi::String getCountry(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getCountry) == 1,
          "Expected getCountry(...) to have 1 parameters");

      return bridging::callFromJs<jsi::String>(
          rt, &T::getCountry, jsInvoker_, instance_);
    }
    jsi::Array getCurrencies(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getCurrencies) == 1,
          "Expected getCurrencies(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Array>(
          rt, &T::getCurrencies, jsInvoker_, instance_);
    }
    jsi::Array getLocales(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getLocales) == 1,
          "Expected getLocales(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Array>(
          rt, &T::getLocales, jsInvoker_, instance_);
    }
    jsi::Object getNumberFormatSettings(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getNumberFormatSettings) == 1,
          "Expected getNumberFormatSettings(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Object>(
          rt, &T::getNumberFormatSettings, jsInvoker_, instance_);
    }
    jsi::String getTemperatureUnit(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getTemperatureUnit) == 1,
          "Expected getTemperatureUnit(...) to have 1 parameters");

      return bridging::callFromJs<jsi::String>(
          rt, &T::getTemperatureUnit, jsInvoker_, instance_);
    }
    jsi::String getTimeZone(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getTimeZone) == 1,
          "Expected getTimeZone(...) to have 1 parameters");

      return bridging::callFromJs<jsi::String>(
          rt, &T::getTimeZone, jsInvoker_, instance_);
    }
    bool uses24HourClock(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::uses24HourClock) == 1,
          "Expected uses24HourClock(...) to have 1 parameters");

      return bridging::callFromJs<bool>(
          rt, &T::uses24HourClock, jsInvoker_, instance_);
    }
    bool usesMetricSystem(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::usesMetricSystem) == 1,
          "Expected usesMetricSystem(...) to have 1 parameters");

      return bridging::callFromJs<bool>(
          rt, &T::usesMetricSystem, jsInvoker_, instance_);
    }
    std::optional<bool> usesAutoDateAndTime(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::usesAutoDateAndTime) == 1,
          "Expected usesAutoDateAndTime(...) to have 1 parameters");

      return bridging::callFromJs<std::optional<bool>>(
          rt, &T::usesAutoDateAndTime, jsInvoker_, instance_);
    }
    std::optional<bool> usesAutoTimeZone(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::usesAutoTimeZone) == 1,
          "Expected usesAutoTimeZone(...) to have 1 parameters");

      return bridging::callFromJs<std::optional<bool>>(
          rt, &T::usesAutoTimeZone, jsInvoker_, instance_);
    }

  private:
    friend class NativeRNLocalizeCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
