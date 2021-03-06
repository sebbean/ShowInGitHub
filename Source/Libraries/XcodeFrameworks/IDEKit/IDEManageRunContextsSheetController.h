/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTPopUpButtonCell, IDEControlGroup, IDEWorkspace, NSArrayController, NSButton, NSTableView, NSWindow;

@interface IDEManageRunContextsSheetController : IDEViewController
{
    NSWindow *_sheetWindow;
    DVTBorderedView *_tableBorderView;
    NSArrayController *_runContextsArrayController;
    NSArrayController *_customDataStoresArrayController;
    NSTableView *_tableView;
    NSButton *_editButton;
    DVTPopUpButtonCell *_containerPopUpCell;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTGradientImagePopUpButton *_actionPopUpButton;
    IDEControlGroup *_controlGroup;
    NSWindow *_hostWindow;
    IDEWorkspace *_workspace;
    BOOL _didSheetEnd;
    id <DVTObservingToken> _selectionObserverToken;
}

+ (id)keyPathsForValuesAffectingShouldAutocreateSchemes;
+ (void)runSheetForWindow:(id)arg1;
- (void)_beginSheetForWindow:(id)arg1;
- (void)_deleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_updateEditEnabledState;
- (void)autocreateSchemesAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)duplicateAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)exportAction:(id)arg1;
- (void)importAction:(id)arg1;
- (void)newSchemeAction:(id)arg1;
@property BOOL shouldAutocreateSchemes;
@property IDEWorkspace *workspace;
- (void)sheetOKAction:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)windowDidResize:(id)arg1;

@end

