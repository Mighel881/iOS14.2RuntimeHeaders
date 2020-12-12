/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ClientImportServiceSession : NSObject {
    ML3ClientImportSessionConfiguration * _configuration;
    ML3DatabaseConnection * _databaseConnection;
    struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; bool x6; int (*x7)(); void *x8; id x9; id x10; id x11; id x12; id x13; id x14; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_15_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_15_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_15_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_15_1_4; double x_15_1_5; } x15; unsigned int x16; unsigned char x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * _importSession;
    ML3MusicLibrary * _library;
}

- (void).cxx_destruct;
- (bool)addTrack:(id)arg1 persistentID:(id*)arg2;
- (bool)begin;
- (void)dealloc;
- (bool)finish;
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 configuration:(id)arg3;
- (bool)removeTrack:(id)arg1 persistentID:(id*)arg2;
- (bool)updateTrack:(id)arg1 persistentID:(id*)arg2;

@end