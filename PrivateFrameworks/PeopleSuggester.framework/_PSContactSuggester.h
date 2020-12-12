/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSContactSuggester : NSObject {
    NSXPCConnection * _connection;
    CNContactStore * _contactStore;
    _CDInteractionStore * _interactionStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _PSContactResolver * contactResolver;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;

- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (id)contactStore;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 appleUsersOnly:(bool)arg4;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 referenceDate:(id)arg4 appleUsersOnly:(bool)arg5;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 lookBackDays:(long long)arg3 interactions:(id)arg4 modeAvocado:(bool)arg5;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)interactionStore;
- (void)setContactStore:(id)arg1;
- (void)setInteractionStore:(id)arg1;

@end