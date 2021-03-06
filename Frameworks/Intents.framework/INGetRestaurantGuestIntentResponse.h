/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INGetRestaurantGuestIntentResponseExport> {
    INRestaurantGuest * _guest;
    INRestaurantGuestDisplayPreferences * _guestDisplayPreferences;
}

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INRestaurantGuest *guest;
@property (nonatomic, copy) INRestaurantGuestDisplayPreferences *guestDisplayPreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)guest;
- (id)guestDisplayPreferences;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setGuest:(id)arg1;
- (void)setGuestDisplayPreferences:(id)arg1;

@end
