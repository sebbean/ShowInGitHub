/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDENavigator.h>

#import "NSMenuDelegate-Protocol.h"

@class DVTScopeBarView, IDENavigatorDataCell, IDENavigatorOutlineView, NSArray, NSButton, NSImage, NSMapTable, NSMenu, NSMutableArray, NSNumber, NSSlider;

@interface IDEDebugNavigator : IDENavigator <NSMenuDelegate>
{
    DVTScopeBarView *_scopeBarView;
    IDENavigatorOutlineView *_outlineView;
    NSButton *_threadModeButton;
    NSButton *_queueModeButton;
    NSButton *_showOnlyInterestingContentButton;
    NSButton *_autoCompressMaxButton;
    NSSlider *_autoCompressSlider;
    NSButton *_autoCompressMinButton;
    IDENavigatorDataCell *_regularCell;
    IDENavigatorDataCell *_processHeaderCell;
    NSMenu *_contextualMenu;
    NSMapTable *_contentDelegateForIdentifierTable;
    NSMutableArray *_selectedRepresentedObjects;
    unsigned long long _compressionValue;
    unsigned long long _maxCompressionValue;
    int _threadOrQueueMode;
    NSImage *_showOnlyInterestingContentImage;
    NSImage *_showOnlyInterestingContentAlternateImage;
    id <DVTObservingToken> _allFinishedObservingToken;
    BOOL _isInUserDirectSelection;
    BOOL _showOnlyInterestingContent;
    BOOL _isInOutlineViewProcessPendingChanges;
    BOOL _viewWasInstalled;
}

+ (id)_transientStateForKey:(id)arg1;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableDebugItems;
+ (long long)version;
- (void)_checkToolTip:(id *)arg1 shouldShow:(char *)arg2 selector:(SEL)arg3 forContentDelegate:(id)arg4;
- (id)_contentDelegateForRightClickedItems;
- (id)_expandedItemTokens;
- (void)_handleLaunchSessionsChanged;
- (BOOL)_handleUserDirectDeletion;
- (BOOL)_handleUserDirectMoveUpOrDown:(BOOL)arg1;
- (BOOL)_handleUserDirectShiftKeyMoveUpOrDown:(BOOL)arg1;
- (id)_indexesOfSelectedRepresentedObjects;
- (void)_openSelectedNavigableItemsWithEventType:(unsigned long long)arg1;
- (void)_outlineViewProcessPendingChanges;
- (void)_recordSelectedRowsIntoRepresentedObjects;
- (void)_resetFilterIconsAndToolTips;
- (id)_rightClickedItems;
- (void)_scrollToIndexes:(id)arg1;
- (BOOL)_shouldExpandItemAsResultOfOptionClick:(id)arg1;
- (id)_tokenForExpandedRepresentedObject:(id)arg1;
- (BOOL)_uiShouldReact;
- (void)_updateForNewCompressionValue;
- (void)_updateForNewThreadOrQueueMode;
- (BOOL)_writeRepresentedObjects:(id)arg1 toPasteboard:(id)arg2;
- (void)autoCompressStackFrames:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (unsigned long long)compressionValue;
- (void)contentDelegateFinished:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)delegateFirstResponder;
- (void)delete:(id)arg1;
- (id)domainIdentifier;
- (id)expandedItemTokens;
- (void)invalidate;
@property(readonly) BOOL isInUserDirectSelection; // @synthesize isInUserDirectSelection=_isInUserDirectSelection;
- (void)loadView;
- (unsigned long long)maxCompressionValue;
- (void)menuNeedsUpdate:(id)arg1;
- (id)navigableDebugItems;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
@property(readonly) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)processHeaderCell;
- (id)regularCell;
- (void)restoreExpandedAndSelectionStates;
- (void)restoreExpandedStates;
- (void)restorePreviousTransientStates;
- (void)restoreSelectedStatesAndScrollToSelection:(BOOL)arg1;
- (void)revealCurrentItem;
- (void)revertStateWithDictionary:(id)arg1;
- (void)scrollToSelection;
@property(copy) NSArray *selectedRepresentedObjects; // @dynamic selectedRepresentedObjects;
@property BOOL showOnlyInterestingContent; // @synthesize showOnlyInterestingContent=_showOnlyInterestingContent;
@property NSNumber *storedCompressionValue;
@property NSNumber *storedThreadOrQueueMode;
- (void)showQueueMode:(id)arg1;
- (void)showThreadMode:(id)arg1;
@property(readonly) int threadOrQueueMode; // @synthesize threadOrQueueMode=_threadOrQueueMode;
- (id)transientStates;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly) NSMutableArray *mutableSelectedRepresentedObjects; // @dynamic mutableSelectedRepresentedObjects;

@end

