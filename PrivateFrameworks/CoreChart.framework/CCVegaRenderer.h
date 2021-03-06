/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
 */

@interface CCVegaRenderer : NSObject <CCAsyncQueueDelegate, CCVegaWorkerClientDelegate> {
    CCVegaCARenderer * CARenderer;
    CCVegaExpressionFunctions * _builtinExpressionFunctions;
    CALayer * _caLayer;
    NSCalendar * _calendar;
    struct CGImage { } * _currentCGImage;
    double  _currentCGImageScaleFactor;
    NSArray * _data;
    double  _height;
    double  _internalScaleFactor;
    double  _internalZoomFactor;
    bool  _isActive;
    NSLocale * _locale;
    bool  _needsUpdateFromMainThread;
    NSMutableSet * _pendingDataUpdates;
    double  _scaleFactor;
    UITraitCollection * _traitCollection;
    double  _width;
    double  _zoomFactor;
    CCAsyncQueue * asyncQueue;
    NSString * config;
    CCVegaHTMLElement * container;
    struct CGImage { } * currentCGImage;
    NSObject<CCVegaRendererDelegate> * delegate;
    JSValue * renderer;
    unsigned int  rendererType;
    NSString * spec;
    CCViewRendererDelegate * viewDelegate;
    CCVegaWorker * worker;
    CCVegaWorkerClient * workerClient;
}

@property (retain) CCVegaCARenderer *CARenderer;
@property (nonatomic, retain) CCAsyncQueue *asyncQueue;
@property (retain) CALayer *caLayer;
@property (retain) NSCalendar *calendar;
@property (nonatomic, retain) NSString *config;
@property (nonatomic, retain) CCVegaHTMLElement *container;
@property struct CGImage { }*currentCGImage;
@property (nonatomic, retain) NSArray *data;
@property NSObject<CCVegaRendererDelegate> *delegate;
@property bool isActive;
@property (retain) NSLocale *locale;
@property (nonatomic, retain) JSValue *renderer;
@property unsigned int rendererType;
@property double scaleFactor;
@property (nonatomic, retain) NSString *spec;
@property (readonly) bool specIsValid;
@property (retain) UITraitCollection *traitCollection;
@property (retain) CCViewRendererDelegate *viewDelegate;
@property (retain) CCVegaWorker *worker;
@property (retain) CCVegaWorkerClient *workerClient;
@property double zoomFactor;

- (void).cxx_destruct;
- (id)CARenderer;
- (void)_doUpdateInMainThread;
- (id)accessibilityElements;
- (id)addListener:(id /* block */)arg1 toSignalWithName:(id)arg2;
- (void)addPendingDataUpdate:(id)arg1;
- (id)asyncQueue;
- (id)caLayer;
- (id)calendar;
- (void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingWithCallback:(id /* block */)arg3;
- (void)clearPendingDataUpdates;
- (id)config;
- (id)container;
- (struct CGImage { }*)currentBitmap;
- (double)currentBitmapScaleFactor;
- (struct CGImage { }*)currentCGImage;
- (id)cursor;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (void)displayWithCommitter:(id)arg1;
- (void)enqueueRunAsync;
- (id)fontOptions;
- (id)getSignalWithName:(id)arg1;
- (bool)hasPendingDataUpdate:(id)arg1;
- (double)height;
- (id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3 workerClient:(id)arg4;
- (bool)isActive;
- (void)loadState:(id)arg1;
- (id)locale;
- (struct CGColor { }*)newColorFromCSSString:(id)arg1;
- (struct CGColor { }*)newColorFromCSSString:(id)arg1 alpha:(double)arg2;
- (id)newDataWithPDFImage;
- (struct CGImage { }*)newImageFromURL:(id)arg1;
- (void)refreshNativeSignals;
- (void)refreshNativeSignalsRerunDataflow:(bool)arg1;
- (void)removeListener:(id)arg1 fromSignalWithName:(id)arg2;
- (struct CGImage { }*)renderToCGImage;
- (id)renderer;
- (unsigned int)rendererType;
- (void)rerender;
- (void)rerenderEntireChart;
- (void)runAsync;
- (void)runAsyncWithCallback:(id /* block */)arg1;
- (id)saveStateWithNamedDatasets:(id)arg1;
- (double)scaleFactor;
- (void)scheduleDisplay;
- (void)setAsyncQueue:(id)arg1;
- (void)setCARenderer:(id)arg1;
- (void)setCaLayer:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setCurrentCGImage:(struct CGImage { }*)arg1;
- (void)setData:(id)arg1;
- (void)setDefaultDataset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocale:(id)arg1 calendar:(id)arg2 shouldRefresh:(bool)arg3;
- (void)setNamedDataset:(id)arg1 rows:(id)arg2;
- (void)setRenderer:(id)arg1;
- (void)setRendererType:(unsigned int)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSignalWithName:(id)arg1 toValue:(id)arg2;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setViewDelegate:(id)arg1;
- (void)setWorker:(id)arg1;
- (void)setWorkerClient:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setupScreenSignal;
- (void)setupSignalHandlers;
- (void)simplifyQueue:(id)arg1;
- (id)spec;
- (bool)specIsValid;
- (id)traitCollection;
- (void)triggerEventWithType:(id)arg1 event:(id)arg2 waitForEventHandling:(bool)arg3;
- (void)updateInMainThreadIfNeeded;
- (void)updateNativeView;
- (void)updateScaleFactor:(double)arg1 zoomFactor:(double)arg2;
- (id)vegaContext;
- (id)viewDelegate;
- (double)width;
- (id)worker;
- (id)workerClient;
- (void)workerContextEnter;
- (void)workerContextExit;
- (void)workerDidExecuteTimerCallback;
- (double)zoomFactor;

@end
