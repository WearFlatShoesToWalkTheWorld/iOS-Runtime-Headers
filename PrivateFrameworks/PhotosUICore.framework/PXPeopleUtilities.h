/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleUtilities : NSObject

+ (void)_mergeFaces:(id)arg1 rejectedFaces:(id)arg2 toPerson:(id)arg3 personChangeRequest:(id*)arg4 newPersonLocalIdentifier:(id*)arg5;
+ (id)_rejectedFaceIDsForPerson:(id)arg1;
+ (id)_rejectedFacesForPerson:(id)arg1;
+ (id)assetCollectionListFetchResultForPerson:(id)arg1;
+ (void)changePeople:(id)arg1 toPersonType:(int)arg2 error:(id*)arg3;
+ (id)changePerson:(id)arg1 toPersonType:(int)arg2;
+ (id)dataSourceArrayForHomeViewController;
+ (id)identifiersForPeople:(id)arg1;
+ (void)mergePersons:(id)arg1 withPerson:(id)arg2;
+ (int)personTypeForDataSource:(id)arg1;
+ (id)personWithPersonUri:(id)arg1;
+ (void)reSequenceFavorites:(id)arg1 afterMovingModels:(id)arg2 toType:(int)arg3;
+ (void)reSequenceManualOrderForPersonChangeRequests:(id)arg1;
+ (id)sharedContactStore;
+ (id)showDetailsForPerson:(id)arg1;

@end
