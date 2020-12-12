/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchParameters : PBCodable <NSCopying> {
    unsigned int  _auxiliaryTierNumResults;
    GEOPDETAFilter * _etaFilter;
    GEOPDSSearchEvChargingParameters * _evChargingParameters;
    struct { 
        unsigned int has_auxiliaryTierNumResults : 1; 
        unsigned int has_maxResults : 1; 
        unsigned int has_searchType : 1; 
        unsigned int has_sortDirection : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int has_supportDirectionIntentSearch : 1; 
        unsigned int has_supportDymSuggestion : 1; 
        unsigned int has_supportSearchResultSection : 1; 
        unsigned int has_supportUnresolvedDirectionIntent : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_supportedRelatedEntitySectionTypes : 1; 
        unsigned int read_supportedSearchTierTypes : 1; 
        unsigned int read_etaFilter : 1; 
        unsigned int read_evChargingParameters : 1; 
        unsigned int read_inferredSignals : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_retainedSearch : 1; 
        unsigned int read_searchFilter : 1; 
        unsigned int read_searchLocationParameters : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_searchStructureIntentType : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_suggestionEntry : 1; 
        unsigned int read_suggestionMetadata : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDSInferredSignals * _inferredSignals;
    unsigned int  _maxResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    GEOPDRetainedSearchMetadata * _retainedSearch;
    GEOPDSSearchFilter * _searchFilter;
    GEOPDSSearchLocationParameters * _searchLocationParameters;
    NSString * _searchString;
    GEOPDSSearchStructureIntentRequestType * _searchStructureIntentType;
    int  _searchType;
    int  _sortDirection;
    int  _sortOrder;
    GEOPDAutocompleteEntry * _suggestionEntry;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    bool  _supportDirectionIntentSearch;
    bool  _supportDymSuggestion;
    bool  _supportSearchResultSection;
    bool  _supportUnresolvedDirectionIntent;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedRelatedEntitySectionTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedSearchTierTypes;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) unsigned int auxiliaryTierNumResults;
@property (nonatomic, retain) GEOPDETAFilter *etaFilter;
@property (nonatomic, retain) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property (nonatomic) bool hasAuxiliaryTierNumResults;
@property (nonatomic, readonly) bool hasEtaFilter;
@property (nonatomic, readonly) bool hasEvChargingParameters;
@property (nonatomic, readonly) bool hasInferredSignals;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasRecentRouteInfo;
@property (nonatomic, readonly) bool hasRetainedSearch;
@property (nonatomic, readonly) bool hasSearchFilter;
@property (nonatomic, readonly) bool hasSearchLocationParameters;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, readonly) bool hasSearchStructureIntentType;
@property (nonatomic) bool hasSearchType;
@property (nonatomic) bool hasSortDirection;
@property (nonatomic) bool hasSortOrder;
@property (nonatomic, readonly) bool hasSuggestionEntry;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasSuggestionMetadata;
@property (nonatomic) bool hasSupportDirectionIntentSearch;
@property (nonatomic) bool hasSupportDymSuggestion;
@property (nonatomic) bool hasSupportSearchResultSection;
@property (nonatomic) bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic, retain) GEOPDSInferredSignals *inferredSignals;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic, retain) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic, retain) GEOPDSSearchFilter *searchFilter;
@property (nonatomic, retain) GEOPDSSearchLocationParameters *searchLocationParameters;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) GEOPDSSearchStructureIntentRequestType *searchStructureIntentType;
@property (nonatomic) int searchType;
@property (nonatomic) int sortDirection;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic) bool supportDirectionIntentSearch;
@property (nonatomic) bool supportDymSuggestion;
@property (nonatomic) bool supportSearchResultSection;
@property (nonatomic) bool supportUnresolvedDirectionIntent;
@property (nonatomic, readonly) int*supportedRelatedEntitySectionTypes;
@property (nonatomic, readonly) unsigned long long supportedRelatedEntitySectionTypesCount;
@property (nonatomic, readonly) int*supportedSearchTierTypes;
@property (nonatomic, readonly) unsigned long long supportedSearchTierTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (int)StringAsSortDirection:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (int)StringAsSupportedRelatedEntitySectionTypes:(id)arg1;
- (int)StringAsSupportedSearchTierTypes:(id)arg1;
- (void)addSupportedRelatedEntitySectionType:(int)arg1;
- (void)addSupportedSearchTierType:(int)arg1;
- (unsigned int)auxiliaryTierNumResults;
- (void)clearSensitiveFields;
- (void)clearSupportedRelatedEntitySectionTypes;
- (void)clearSupportedSearchTierTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaFilter;
- (id)evChargingParameters;
- (bool)hasAuxiliaryTierNumResults;
- (bool)hasEtaFilter;
- (bool)hasEvChargingParameters;
- (bool)hasInferredSignals;
- (bool)hasMaxResults;
- (bool)hasRecentRouteInfo;
- (bool)hasRetainedSearch;
- (bool)hasSearchFilter;
- (bool)hasSearchLocationParameters;
- (bool)hasSearchString;
- (bool)hasSearchStructureIntentType;
- (bool)hasSearchType;
- (bool)hasSortDirection;
- (bool)hasSortOrder;
- (bool)hasSuggestionEntry;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasSuggestionMetadata;
- (bool)hasSupportDirectionIntentSearch;
- (bool)hasSupportDymSuggestion;
- (bool)hasSupportSearchResultSection;
- (bool)hasSupportUnresolvedDirectionIntent;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)inferredSignals;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)recentRouteInfo;
- (id)retainedSearch;
- (id)searchFilter;
- (id)searchLocationParameters;
- (id)searchString;
- (id)searchStructureIntentType;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setAuxiliaryTierNumResults:(unsigned int)arg1;
- (void)setEtaFilter:(id)arg1;
- (void)setEvChargingParameters:(id)arg1;
- (void)setHasAuxiliaryTierNumResults:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setHasSortDirection:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setHasSupportDirectionIntentSearch:(bool)arg1;
- (void)setHasSupportDymSuggestion:(bool)arg1;
- (void)setHasSupportSearchResultSection:(bool)arg1;
- (void)setHasSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setInferredSignals:(id)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRecentRouteInfo:(id)arg1;
- (void)setRetainedSearch:(id)arg1;
- (void)setSearchFilter:(id)arg1;
- (void)setSearchLocationParameters:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchStructureIntentType:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSortDirection:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSupportDirectionIntentSearch:(bool)arg1;
- (void)setSupportDymSuggestion:(bool)arg1;
- (void)setSupportSearchResultSection:(bool)arg1;
- (void)setSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setSupportedRelatedEntitySectionTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedSearchTierTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setViewportInfo:(id)arg1;
- (int)sortDirection;
- (id)sortDirectionAsString:(int)arg1;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (id)suggestionEntry;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (bool)supportDirectionIntentSearch;
- (bool)supportDymSuggestion;
- (bool)supportSearchResultSection;
- (bool)supportUnresolvedDirectionIntent;
- (int)supportedRelatedEntitySectionTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedRelatedEntitySectionTypes;
- (id)supportedRelatedEntitySectionTypesAsString:(int)arg1;
- (unsigned long long)supportedRelatedEntitySectionTypesCount;
- (int)supportedSearchTierTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedSearchTierTypes;
- (id)supportedSearchTierTypesAsString:(int)arg1;
- (unsigned long long)supportedSearchTierTypesCount;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end