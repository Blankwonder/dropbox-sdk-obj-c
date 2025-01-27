///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

/// Import autogenerated files

// Routes
#import "DBACCOUNTRouteObjects.h"
#import "DBACCOUNTUserAuthRoutes.h"
#import "DBAUTHAppAuthRoutes.h"
#import "DBAUTHRouteObjects.h"
#import "DBAUTHUserAuthRoutes.h"
#import "DBCHECKAppAuthRoutes.h"
#import "DBCHECKRouteObjects.h"
#import "DBCHECKUserAuthRoutes.h"
#import "DBCONTACTSRouteObjects.h"
#import "DBCONTACTSUserAuthRoutes.h"
#import "DBFILEPROPERTIESRouteObjects.h"
#import "DBFILEPROPERTIESTeamAuthRoutes.h"
#import "DBFILEPROPERTIESUserAuthRoutes.h"
#import "DBFILEREQUESTSRouteObjects.h"
#import "DBFILEREQUESTSUserAuthRoutes.h"
#import "DBFILESAppAuthRoutes.h"
#import "DBFILESRouteObjects.h"
#import "DBFILESUserAuthRoutes.h"

// `Account` namespace types

#import "DBACCOUNTPhotoSourceArg.h"
#import "DBACCOUNTSetProfilePhotoArg.h"
#import "DBACCOUNTSetProfilePhotoError.h"
#import "DBACCOUNTSetProfilePhotoResult.h"

// `Async` namespace types

#import "DBASYNCLaunchEmptyResult.h"
#import "DBASYNCLaunchResultBase.h"
#import "DBASYNCPollArg.h"
#import "DBASYNCPollEmptyResult.h"
#import "DBASYNCPollError.h"
#import "DBASYNCPollResultBase.h"

// `Auth` namespace types

#import "DBAUTHAccessError.h"
#import "DBAUTHAuthError.h"
#import "DBAUTHInvalidAccountTypeError.h"
#import "DBAUTHPaperAccessError.h"
#import "DBAUTHRateLimitError.h"
#import "DBAUTHRateLimitReason.h"
#import "DBAUTHTokenFromOAuth1Arg.h"
#import "DBAUTHTokenFromOAuth1Error.h"
#import "DBAUTHTokenFromOAuth1Result.h"
#import "DBAUTHTokenScopeError.h"

// `Check` namespace types

#import "DBCHECKEchoArg.h"
#import "DBCHECKEchoResult.h"

// `Common` namespace types

#import "DBCOMMONPathRoot.h"
#import "DBCOMMONPathRootError.h"
#import "DBCOMMONRootInfo.h"
#import "DBCOMMONTeamRootInfo.h"
#import "DBCOMMONUserRootInfo.h"

// `Contacts` namespace types

#import "DBCONTACTSDeleteManualContactsArg.h"
#import "DBCONTACTSDeleteManualContactsError.h"

// `FileProperties` namespace types

#import "DBFILEPROPERTIESAddPropertiesArg.h"
#import "DBFILEPROPERTIESAddPropertiesError.h"
#import "DBFILEPROPERTIESAddTemplateArg.h"
#import "DBFILEPROPERTIESAddTemplateResult.h"
#import "DBFILEPROPERTIESGetTemplateArg.h"
#import "DBFILEPROPERTIESGetTemplateResult.h"
#import "DBFILEPROPERTIESInvalidPropertyGroupError.h"
#import "DBFILEPROPERTIESListTemplateResult.h"
#import "DBFILEPROPERTIESLogicalOperator.h"
#import "DBFILEPROPERTIESLookUpPropertiesError.h"
#import "DBFILEPROPERTIESLookupError.h"
#import "DBFILEPROPERTIESModifyTemplateError.h"
#import "DBFILEPROPERTIESOverwritePropertyGroupArg.h"
#import "DBFILEPROPERTIESPropertiesError.h"
#import "DBFILEPROPERTIESPropertiesSearchArg.h"
#import "DBFILEPROPERTIESPropertiesSearchContinueArg.h"
#import "DBFILEPROPERTIESPropertiesSearchContinueError.h"
#import "DBFILEPROPERTIESPropertiesSearchError.h"
#import "DBFILEPROPERTIESPropertiesSearchMatch.h"
#import "DBFILEPROPERTIESPropertiesSearchMode.h"
#import "DBFILEPROPERTIESPropertiesSearchQuery.h"
#import "DBFILEPROPERTIESPropertiesSearchResult.h"
#import "DBFILEPROPERTIESPropertyField.h"
#import "DBFILEPROPERTIESPropertyFieldTemplate.h"
#import "DBFILEPROPERTIESPropertyGroup.h"
#import "DBFILEPROPERTIESPropertyGroupTemplate.h"
#import "DBFILEPROPERTIESPropertyGroupUpdate.h"
#import "DBFILEPROPERTIESPropertyType.h"
#import "DBFILEPROPERTIESRemovePropertiesArg.h"
#import "DBFILEPROPERTIESRemovePropertiesError.h"
#import "DBFILEPROPERTIESRemoveTemplateArg.h"
#import "DBFILEPROPERTIESTemplateError.h"
#import "DBFILEPROPERTIESTemplateFilter.h"
#import "DBFILEPROPERTIESTemplateFilterBase.h"
#import "DBFILEPROPERTIESTemplateOwnerType.h"
#import "DBFILEPROPERTIESUpdatePropertiesArg.h"
#import "DBFILEPROPERTIESUpdatePropertiesError.h"
#import "DBFILEPROPERTIESUpdateTemplateArg.h"
#import "DBFILEPROPERTIESUpdateTemplateResult.h"

// `FileRequests` namespace types

#import "DBFILEREQUESTSCountFileRequestsError.h"
#import "DBFILEREQUESTSCountFileRequestsResult.h"
#import "DBFILEREQUESTSCreateFileRequestArgs.h"
#import "DBFILEREQUESTSCreateFileRequestError.h"
#import "DBFILEREQUESTSDeleteAllClosedFileRequestsError.h"
#import "DBFILEREQUESTSDeleteAllClosedFileRequestsResult.h"
#import "DBFILEREQUESTSDeleteFileRequestArgs.h"
#import "DBFILEREQUESTSDeleteFileRequestError.h"
#import "DBFILEREQUESTSDeleteFileRequestsResult.h"
#import "DBFILEREQUESTSFileRequest.h"
#import "DBFILEREQUESTSFileRequestDeadline.h"
#import "DBFILEREQUESTSFileRequestError.h"
#import "DBFILEREQUESTSGeneralFileRequestsError.h"
#import "DBFILEREQUESTSGetFileRequestArgs.h"
#import "DBFILEREQUESTSGetFileRequestError.h"
#import "DBFILEREQUESTSGracePeriod.h"
#import "DBFILEREQUESTSListFileRequestsArg.h"
#import "DBFILEREQUESTSListFileRequestsContinueArg.h"
#import "DBFILEREQUESTSListFileRequestsContinueError.h"
#import "DBFILEREQUESTSListFileRequestsError.h"
#import "DBFILEREQUESTSListFileRequestsResult.h"
#import "DBFILEREQUESTSListFileRequestsV2Result.h"
#import "DBFILEREQUESTSUpdateFileRequestArgs.h"
#import "DBFILEREQUESTSUpdateFileRequestDeadline.h"
#import "DBFILEREQUESTSUpdateFileRequestError.h"

// `Files` namespace types

#import "DBFILESAddTagArg.h"
#import "DBFILESAddTagError.h"
#import "DBFILESAlphaGetMetadataArg.h"
#import "DBFILESAlphaGetMetadataError.h"
#import "DBFILESBaseTagError.h"
#import "DBFILESCommitInfo.h"
#import "DBFILESCommitInfoWithProperties.h"
#import "DBFILESContentSyncSetting.h"
#import "DBFILESContentSyncSettingArg.h"
#import "DBFILESCreateFolderArg.h"
#import "DBFILESCreateFolderBatchArg.h"
#import "DBFILESCreateFolderBatchError.h"
#import "DBFILESCreateFolderBatchJobStatus.h"
#import "DBFILESCreateFolderBatchLaunch.h"
#import "DBFILESCreateFolderBatchResult.h"
#import "DBFILESCreateFolderBatchResultEntry.h"
#import "DBFILESCreateFolderEntryError.h"
#import "DBFILESCreateFolderEntryResult.h"
#import "DBFILESCreateFolderError.h"
#import "DBFILESCreateFolderResult.h"
#import "DBFILESDeleteArg.h"
#import "DBFILESDeleteBatchArg.h"
#import "DBFILESDeleteBatchError.h"
#import "DBFILESDeleteBatchJobStatus.h"
#import "DBFILESDeleteBatchLaunch.h"
#import "DBFILESDeleteBatchResult.h"
#import "DBFILESDeleteBatchResultData.h"
#import "DBFILESDeleteBatchResultEntry.h"
#import "DBFILESDeleteError.h"
#import "DBFILESDeleteResult.h"
#import "DBFILESDeletedMetadata.h"
#import "DBFILESDimensions.h"
#import "DBFILESDownloadArg.h"
#import "DBFILESDownloadError.h"
#import "DBFILESDownloadZipArg.h"
#import "DBFILESDownloadZipError.h"
#import "DBFILESDownloadZipResult.h"
#import "DBFILESExportArg.h"
#import "DBFILESExportError.h"
#import "DBFILESExportInfo.h"
#import "DBFILESExportMetadata.h"
#import "DBFILESExportResult.h"
#import "DBFILESFileCategory.h"
#import "DBFILESFileLock.h"
#import "DBFILESFileLockContent.h"
#import "DBFILESFileLockMetadata.h"
#import "DBFILESFileMetadata.h"
#import "DBFILESFileOpsResult.h"
#import "DBFILESFileSharingInfo.h"
#import "DBFILESFileStatus.h"
#import "DBFILESFolderMetadata.h"
#import "DBFILESFolderSharingInfo.h"
#import "DBFILESGetCopyReferenceArg.h"
#import "DBFILESGetCopyReferenceError.h"
#import "DBFILESGetCopyReferenceResult.h"
#import "DBFILESGetMetadataArg.h"
#import "DBFILESGetMetadataError.h"
#import "DBFILESGetTagsArg.h"
#import "DBFILESGetTagsResult.h"
#import "DBFILESGetTemporaryLinkArg.h"
#import "DBFILESGetTemporaryLinkError.h"
#import "DBFILESGetTemporaryLinkResult.h"
#import "DBFILESGetTemporaryUploadLinkArg.h"
#import "DBFILESGetTemporaryUploadLinkResult.h"
#import "DBFILESGetThumbnailBatchArg.h"
#import "DBFILESGetThumbnailBatchError.h"
#import "DBFILESGetThumbnailBatchResult.h"
#import "DBFILESGetThumbnailBatchResultData.h"
#import "DBFILESGetThumbnailBatchResultEntry.h"
#import "DBFILESGpsCoordinates.h"
#import "DBFILESHighlightSpan.h"
#import "DBFILESImportFormat.h"
#import "DBFILESListFolderArg.h"
#import "DBFILESListFolderContinueArg.h"
#import "DBFILESListFolderContinueError.h"
#import "DBFILESListFolderError.h"
#import "DBFILESListFolderGetLatestCursorResult.h"
#import "DBFILESListFolderLongpollArg.h"
#import "DBFILESListFolderLongpollError.h"
#import "DBFILESListFolderLongpollResult.h"
#import "DBFILESListFolderResult.h"
#import "DBFILESListRevisionsArg.h"
#import "DBFILESListRevisionsError.h"
#import "DBFILESListRevisionsMode.h"
#import "DBFILESListRevisionsResult.h"
#import "DBFILESLockConflictError.h"
#import "DBFILESLockFileArg.h"
#import "DBFILESLockFileBatchArg.h"
#import "DBFILESLockFileBatchResult.h"
#import "DBFILESLockFileError.h"
#import "DBFILESLockFileResult.h"
#import "DBFILESLockFileResultEntry.h"
#import "DBFILESLookupError.h"
#import "DBFILESMediaInfo.h"
#import "DBFILESMediaMetadata.h"
#import "DBFILESMetadata.h"
#import "DBFILESMetadataV2.h"
#import "DBFILESMinimalFileLinkMetadata.h"
#import "DBFILESMoveBatchArg.h"
#import "DBFILESMoveIntoVaultError.h"
#import "DBFILESPaperContentError.h"
#import "DBFILESPaperCreateArg.h"
#import "DBFILESPaperCreateError.h"
#import "DBFILESPaperCreateResult.h"
#import "DBFILESPaperDocUpdatePolicy.h"
#import "DBFILESPaperUpdateArg.h"
#import "DBFILESPaperUpdateError.h"
#import "DBFILESPaperUpdateResult.h"
#import "DBFILESPathOrLink.h"
#import "DBFILESPathToTags.h"
#import "DBFILESPhotoMetadata.h"
#import "DBFILESPreviewArg.h"
#import "DBFILESPreviewError.h"
#import "DBFILESPreviewResult.h"
#import "DBFILESRelocationArg.h"
#import "DBFILESRelocationBatchArg.h"
#import "DBFILESRelocationBatchArgBase.h"
#import "DBFILESRelocationBatchError.h"
#import "DBFILESRelocationBatchErrorEntry.h"
#import "DBFILESRelocationBatchJobStatus.h"
#import "DBFILESRelocationBatchLaunch.h"
#import "DBFILESRelocationBatchResult.h"
#import "DBFILESRelocationBatchResultData.h"
#import "DBFILESRelocationBatchResultEntry.h"
#import "DBFILESRelocationBatchV2JobStatus.h"
#import "DBFILESRelocationBatchV2Launch.h"
#import "DBFILESRelocationBatchV2Result.h"
#import "DBFILESRelocationError.h"
#import "DBFILESRelocationPath.h"
#import "DBFILESRelocationResult.h"
#import "DBFILESRemoveTagArg.h"
#import "DBFILESRemoveTagError.h"
#import "DBFILESRestoreArg.h"
#import "DBFILESRestoreError.h"
#import "DBFILESSaveCopyReferenceArg.h"
#import "DBFILESSaveCopyReferenceError.h"
#import "DBFILESSaveCopyReferenceResult.h"
#import "DBFILESSaveUrlArg.h"
#import "DBFILESSaveUrlError.h"
#import "DBFILESSaveUrlJobStatus.h"
#import "DBFILESSaveUrlResult.h"
#import "DBFILESSearchArg.h"
#import "DBFILESSearchError.h"
#import "DBFILESSearchMatch.h"
#import "DBFILESSearchMatchFieldOptions.h"
#import "DBFILESSearchMatchType.h"
#import "DBFILESSearchMatchTypeV2.h"
#import "DBFILESSearchMatchV2.h"
#import "DBFILESSearchMode.h"
#import "DBFILESSearchOptions.h"
#import "DBFILESSearchOrderBy.h"
#import "DBFILESSearchResult.h"
#import "DBFILESSearchV2Arg.h"
#import "DBFILESSearchV2ContinueArg.h"
#import "DBFILESSearchV2Result.h"
#import "DBFILESSharedLink.h"
#import "DBFILESSharedLinkFileInfo.h"
#import "DBFILESSharingInfo.h"
#import "DBFILESSingleUserLock.h"
#import "DBFILESSymlinkInfo.h"
#import "DBFILESSyncSetting.h"
#import "DBFILESSyncSettingArg.h"
#import "DBFILESSyncSettingsError.h"
#import "DBFILESTag.h"
#import "DBFILESThumbnailArg.h"
#import "DBFILESThumbnailError.h"
#import "DBFILESThumbnailFormat.h"
#import "DBFILESThumbnailMode.h"
#import "DBFILESThumbnailSize.h"
#import "DBFILESThumbnailV2Arg.h"
#import "DBFILESThumbnailV2Error.h"
#import "DBFILESUnlockFileArg.h"
#import "DBFILESUnlockFileBatchArg.h"
#import "DBFILESUploadError.h"
#import "DBFILESUploadErrorWithProperties.h"
#import "DBFILESUploadSessionAppendArg.h"
#import "DBFILESUploadSessionCursor.h"
#import "DBFILESUploadSessionFinishArg.h"
#import "DBFILESUploadSessionFinishBatchArg.h"
#import "DBFILESUploadSessionFinishBatchJobStatus.h"
#import "DBFILESUploadSessionFinishBatchLaunch.h"
#import "DBFILESUploadSessionFinishBatchResult.h"
#import "DBFILESUploadSessionFinishBatchResultEntry.h"
#import "DBFILESUploadSessionFinishError.h"
#import "DBFILESUploadSessionLookupError.h"
#import "DBFILESUploadSessionOffsetError.h"
#import "DBFILESUploadSessionStartArg.h"
#import "DBFILESUploadSessionStartError.h"
#import "DBFILESUploadSessionStartResult.h"
#import "DBFILESUploadSessionType.h"
#import "DBFILESUploadWriteFailed.h"
#import "DBFILESUserGeneratedTag.h"
#import "DBFILESVideoMetadata.h"
#import "DBFILESWriteConflictError.h"
#import "DBFILESWriteError.h"
#import "DBFILESWriteMode.h"

// `SecondaryEmails` namespace types

#import "DBSECONDARYEMAILSSecondaryEmail.h"

// `SeenState` namespace types

#import "DBSEENSTATEPlatformType.h"

// `UsersCommon` namespace types

#import "DBUSERSCOMMONAccountType.h"
