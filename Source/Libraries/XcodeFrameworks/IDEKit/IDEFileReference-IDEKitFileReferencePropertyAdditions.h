/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEFileReference.h"

@class DVTDocumentLocation, DVTFileDataType, NSString;

@interface IDEFileReference (IDEKitFileReferencePropertyAdditions)
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
- (id)navigableItem_conformanceString;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSString *navigableItem_name;
- (void)navigableItem_noteDocumentEditedStateChanged;
@end

