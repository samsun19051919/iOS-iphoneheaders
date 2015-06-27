/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSArray, NSMutableSet, NSURL;

@interface AppleSpell : NSObject {

	void* _proofReaderConnection;
	CFDictionaryRef _databaseConnections;
	CFDictionaryRef _languageModelDicts;
	double _lastWriteLanguageModels;
	double _lastDecayLanguageModels;
	double _lastReleaseLanguageModels;
	double _lastMaintainLanguageModels;
	unsigned _languageModelWordCount;
	NSMutableDictionary* _bindicts;
	NSMutableArray* _globalBindictDataArray;
	NSMutableArray* _globalNameBindictDataArray;
	NSMutableArray* _globalNegBindictDataArray;
	NSMutableDictionary* _autocorrections;
	NSString* _lastLanguage;
	NSArray* _userPreferredLanguages;
	NSArray* _userTopLanguages;
	NSMutableDictionary* _learnedResponses;
	NSMutableArray* _diagnosticInfo;
	NSMutableSet* _foundNames;
	double _lastFindNames;
	NSMutableSet* _foundShortcuts;
	NSMutableDictionary* _lastSampleCollected;
	unsigned _numberOfSamplesCollected;
	double _lastSampleCollection;
	NSMutableArray* _retainedSamples;
	NSMutableDictionary* _lastSampleRecorded;
	double _lastSampleRecording;
	NSMutableArray* _altBundleURLs;
	NSURL* _updateBundleURL;
	NSMutableDictionary* _languageCounts;
	double _lastLanguageCounts;
	NSMutableDictionary* _userAdaptationDictionary;
	char _userPrefersUncheckedLatinLanguage;

}
-(id)init;
-(void)resetTimer;
-(id)bundle;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id*)arg4 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int*)arg4 countOnly:(char)arg5 correction:(id*)arg6 ;
-(void)setUpdateBundleURL:(id)arg1 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestWordWithLengthInRange:(NSRange)arg2 language:(id)arg3 ;
-(char)spellServer:(id)arg1 canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(char)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(void)timeout:(id)arg1 ;
-(void)addAlternateDataBundleURL:(id)arg1 ;
-(void)_findAlternateDataBundleURLs;
-(id)localizationsForLanguage:(id)arg1 ;
-(id)localizationForLanguage:(id)arg1 ;
-(id)fallbackLocalizationForLanguage:(id)arg1 ;
-(id)bindictDataArrayForLanguage:(id)arg1 index:(unsigned)arg2 ;
-(PR_DB_IO*)databaseConnectionForLanguage:(id)arg1 ;
-(id)globalBindictDataArray;
-(id)globalNameBindictDataArray;
-(char)validateAbbreviationOrNumberWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 connection:(PR_DB_IO*)arg5 sender:(id)arg6 ;
-(char)checkNameWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 globalOnly:(char)arg5 ;
-(char)checkWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 index:(unsigned)arg5 ;
-(char)checkNoPredictWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 depth:(unsigned)arg5 ;
-(id)globalNegativeBindictDataArray;
-(char)checkNegativeWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 depth:(unsigned)arg5 ;
-(unsigned long)encodingForLanguage:(id)arg1 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(char)checkSpecialPrefixesForWordBuffer:(char*)arg1 length:(unsigned)arg2 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkTemp:(char)arg8 checkUser:(char)arg9 checkNames:(char)arg10 checkHyphens:(char)arg11 checkIntercaps:(char)arg12 checkOptions:(char)arg13 depth:(unsigned)arg14 ;
-(unsigned)numberOfTurkishSuffixPointsInBuffer:(char*)arg1 length:(unsigned)arg2 maxSuffixPoints:(unsigned)arg3 suffixPoints:(SCD_Struct_Ap1*)arg4 ;
-(char)_checkEnglishGrammarInString:(id)arg1 range:(NSRange)arg2 indexIntoBuffer:(unsigned)arg3 bufferLength:(unsigned)arg4 language:(id)arg5 connection:(PR_DB_IO*)arg6 sender:(id)arg7 bufIO:(PR_BUF_IO*)arg8 retval:(int*)arg9 errorRange:(NSRange*)arg10 details:(id*)arg11 ;
-(char)_checkGrammarInString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 bufIO:(PR_BUF_IO*)arg6 errorRange:(NSRange*)arg7 details:(id*)arg8 ;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(NSRange)arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned)arg7 details:(id*)arg8 ;
-(id)bindictDataForLanguage:(id)arg1 index:(unsigned)arg2 ;
-(id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkTemp:(char)arg8 checkNames:(char)arg9 checkHyphens:(char)arg10 checkIntercaps:(char)arg11 checkOptions:(char)arg12 depth:(unsigned)arg13 ;
-(id)autocorrectionDictionaryForLanguage:(id)arg1 ;
-(id)_correctionForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned)arg5 appIdentifier:(id)arg6 dictionary:(id)arg7 language:(id)arg8 connection:(PR_DB_IO*)arg9 keyEventData:(id)arg10 alternativeCorrection:(id*)arg11 isApostropheInsertion:(char*)arg12 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(NSRange)arg3 languages:(id)arg4 topLanguages:(id)arg5 orthography:(id)arg6 checkOrthography:(char)arg7 mutableResults:(id)arg8 offset:(unsigned)arg9 autocorrect:(char)arg10 keyEventData:(id)arg11 appIdentifier:(id)arg12 wordCount:(int*)arg13 countOnly:(char)arg14 correction:(id*)arg15 ;
-(id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(NSRange)arg2 inString:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned)arg2 maximumLength:(unsigned)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 ;
-(id)linguisticTaggerForLanguage:(id)arg1 string:(id)arg2 range:(NSRange)arg3 taggerIndex:(unsigned*)arg4 ;
-(char)checkNoPredictWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 ;
-(char)checkNegativeWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 ;
-(char)validateWordPrefixBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkNames:(char)arg8 checkHyphens:(char)arg9 checkIntercaps:(char)arg10 checkOptions:(char)arg11 depth:(unsigned)arg12 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int*)arg4 countOnly:(char)arg5 ;
-(id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(int*)arg7 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 precededBy:(id*)arg3 ;
-(id)_modifiedGrammarDescriptionForDescription:(id)arg1 ;
-(id)_detailWithRange:(NSRange)arg1 description:(id)arg2 corrections:(id)arg3 ;
-(id)_correctionForSuggestedPhrase:(const char*)arg1 originalBuffer:(const char*)arg2 length:(unsigned)arg3 ;
-(char)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(id)_crudeNextWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(char)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(char)onContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(char)onNoContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(char)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_correctionForKoreanString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned)arg5 appIdentifier:(id)arg6 dictionary:(id)arg7 keyEventData:(id)arg8 alternativeCorrection:(id*)arg9 ;
-(id)_japaneseCorrectionForString:(id)arg1 connection:(PR_DB_IO*)arg2 ;
-(void)_addBasicGuessesForWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 minAutocorrectionLength:(unsigned)arg6 toGuesses:(id)arg7 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 finalModificationsForPinyinInputString:(id)arg2 ;
-(id)englishStringsFromWordBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)englishStringFromWordBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char*)arg2 length:(unsigned)arg3 atEnd:(char)arg4 ;
-(void)addModifiedPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned)arg3 prevIndex:(unsigned)arg4 prevPrevIndex:(unsigned)arg5 startingModificationsAt:(unsigned)arg6 inBuffer:(char*)arg7 length:(unsigned)arg8 initialSyllableCount:(unsigned)arg9 initialScore:(unsigned)arg10 prevScore:(unsigned)arg11 prevPrevScore:(unsigned)arg12 lastSyllableScore:(unsigned)arg13 couldBeAbbreviatedPinyin:(char)arg14 ;
-(void)addModifiedPartialPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned)arg3 prevIndex:(unsigned)arg4 prevPrevIndex:(unsigned)arg5 prePrevPrevIndex:(unsigned)arg6 startingModificationsAt:(unsigned)arg7 inBuffer:(char*)arg8 length:(unsigned)arg9 initialSyllableCount:(unsigned)arg10 initialScore:(unsigned)arg11 prevScore:(unsigned)arg12 prevPrevScore:(unsigned)arg13 lastSyllableScore:(unsigned)arg14 ;
-(id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2 ;
-(id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1 ;
-(unsigned)_getSplitIndexes:(unsigned*)arg1 maxCount:(unsigned)arg2 forPinyinInputString:(id)arg3 ;
-(id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned)arg2 ;
-(id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2 andAddingAlternatives:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(char)arg3 ;
-(id)spellServer:(id)arg1 _retainedPrefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedCorrectionsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedFinalModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(void)addGuessesForKoreanWord:(id)arg1 toMutableArray:(id)arg2 includeAdditionalGuesses:(char)arg3 ;
-(void)clearCaches;
@end
