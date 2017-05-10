//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CEmoticonPackageDB, EmoticonSortSetting, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EmoticonPackageMgr : MMService <MMService, PBMessageObserverDelegate>
{
    CEmoticonPackageDB *m_oEmoticonPackageDB;
    EmoticonSortSetting *m_sortSetting;
    _Bool m_isInstallingTusiji;
    NSRecursiveLock *_m_oLock;
    NSMutableDictionary *_m_packageDownloadStatusCacheDic;
}

+ (id)getEmoticonPackageImageByPid:(id)arg1;
@property(retain) NSMutableDictionary *m_packageDownloadStatusCacheDic; // @synthesize m_packageDownloadStatusCacheDic=_m_packageDownloadStatusCacheDic;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) EmoticonSortSetting *m_sortSetting; // @synthesize m_sortSetting;
@property(retain, nonatomic) CEmoticonPackageDB *m_oEmoticonPackageDB; // @synthesize m_oEmoticonPackageDB;
- (void).cxx_destruct;
- (void)clearAllEmoticonPackageData;
- (void)OnModEmotionPackage:(id)arg1;
- (id)PreProcessServerUpdateList:(id)arg1;
- (_Bool)addPackageList:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)SetPanelListRequestBuffer:(id)arg1;
- (id)pathForEmoticonPanelReqBufer;
- (id)GetPanelListRequestBuffer;
- (_Bool)installPackageAtPath:(id)arg1 withName:(id)arg2 withPid:(id)arg3 iconUrl:(id)arg4;
- (_Bool)unzipPackageAtPath:(id)arg1 withPid:(id)arg2;
- (_Bool)isEmoticonPackageDownLoaded:(id)arg1;
- (_Bool)isEmoticonPackagePurchased:(id)arg1;
- (_Bool)canPurchasePackageForPid:(id)arg1;
- (id)getSortEmoticonPackageListWithDownloadedTusiji;
- (id)getSortEmoticonPackageListWithTusiji:(_Bool)arg1 withCustom:(_Bool)arg2;
- (_Bool)hadSetCustomToTop;
- (void)saveSortNotNotify:(id)arg1;
- (void)saveSort:(id)arg1;
- (id)getTusijiPackage;
- (id)getCustomPackage;
- (id)getEmoticonPackageList;
- (_Bool)updateSilently:(id)arg1 downloadStatus:(unsigned int)arg2;
- (_Bool)update:(id)arg1 downloadStatus:(unsigned int)arg2;
- (void)notifyPackageListChanged;
- (_Bool)update:(id)arg1 payStatus:(unsigned int)arg2;
- (_Bool)deleteEmoticonSilentlyByPid:(id)arg1 needRemoveFile:(_Bool)arg2;
- (_Bool)deleteEmoticonPackageWithoutUploadByPid:(id)arg1;
- (_Bool)addEmoticonPackageSilently:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 payStatus:(unsigned int)arg3 downloadStatus:(unsigned int)arg4;
- (void)callUpdatePackageListExtension;
- (void)notifyUpdatePackageList;
- (void)tryInstallTusiji;
- (void)hardcodeTusiji;
- (void)initLocalList;
- (_Bool)isCacheStatusDownloadedForPid:(id)arg1;
- (_Bool)isDBStatusDownloadedForPid:(id)arg1;
- (_Bool)updateCacheDownloadStatusForPid:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

