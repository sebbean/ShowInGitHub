/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlOperationInfo.h>

@class IDESourceControlBranch, IDESourceControlRemote;

@interface IDESourceControlPushOperationInfo : IDESourceControlOperationInfo
{
    IDESourceControlRemote *_remote;
    IDESourceControlBranch *_remoteBranch;
}

- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
@property IDESourceControlRemote *remote; // @synthesize remote=_remote;
@property IDESourceControlBranch *remoteBranch; // @synthesize remoteBranch=_remoteBranch;

@end

