// Function: FUN_009c8006
// Address: 009c8006
// Size: 3229 bytes
// Class: Unknown
// String references:
//   "ObjectNotFound"
//   "CertPermissionsInvalid"
//   "StlError"
//   "Error occurred during a STL operation."
//   "DbObjectsHaveChanged"
//   "Objects you want to modify have changed since you queried them."
//   "DbClientCreationFailure"
//   "Could not create an instance of LicenseDbClient."
//   "DbCommitFailure"
//   "Database commit failed."
//   "DbCommitLockUnavailable"
//   "Could not get the database commit lock."
//   "DbCommitLockFailure"
//   "Caught an exception trying to get the database commit lock."
//   "DbCommitLockReleaseFailure"
//   "Caught an exception trying to  release the database commit lock."
//   "DbObjectNotCached"
//   "Comparison list contains object that is not in the cache or the deleted object list."
//   "DuplicateEntityId"
//   "Duplicate entityId value detected."
//   ... +100 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_009c8006(void)

{
  int iVar1;
  
  if (DAT_027509f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02750070 = 1;
      _DAT_02750078 = "DbObjectsHaveChanged";
      _DAT_02750080 = "Objects you want to modify have changed since you queried them.";
      _DAT_02750088 = DAT_02750a00;
      _DAT_02750090 = DAT_02750a00;
      _DAT_02750098 = 2;
      _DAT_027500a0 = "DbClientCreationFailure";
      _DAT_027500a8 = "Could not create an instance of LicenseDbClient.";
      _DAT_027500b0 = DAT_02750a00;
      _DAT_027500b8 = DAT_02750a00;
      _DAT_027500c0 = 3;
      _DAT_027500c8 = "DbCommitFailure";
      _DAT_027500d0 = "Database commit failed.";
      _DAT_027500d8 = DAT_02750a00;
      _DAT_027500e0 = DAT_02750a00;
      _DAT_027500e8 = 4;
      _DAT_027500f0 = "DbCommitLockUnavailable";
      _DAT_027500f8 = "Could not get the database commit lock.";
      _DAT_02750100 = DAT_02750a00;
      _DAT_02750108 = DAT_02750a00;
      _DAT_02750110 = 5;
      _DAT_02750118 = "DbCommitLockFailure";
      _DAT_02750120 = "Caught an exception trying to get the database commit lock.";
      _DAT_02750128 = DAT_02750a00;
      _DAT_02750130 = DAT_02750a00;
      _DAT_02750138 = 6;
      _DAT_02750140 = "DbCommitLockReleaseFailure";
      _DAT_02750148 = "Caught an exception trying to  release the database commit lock.";
      _DAT_02750150 = DAT_02750a00;
      _DAT_02750158 = DAT_02750a00;
      _DAT_02750160 = 7;
      _DAT_02750168 = "DbObjectNotCached";
      _DAT_02750170 =
           "Comparison list contains object that is not in the cache or the deleted object list.";
      _DAT_02750178 = DAT_02750a00;
      _DAT_02750180 = DAT_02750a00;
      _DAT_02750188 = 8;
      _DAT_02750190 = "DuplicateEntityId";
      _DAT_02750198 = "Duplicate entityId value detected.";
      _DAT_027501a0 = DAT_02750a00;
      _DAT_027501a8 = DAT_02750a00;
      _DAT_027501b0 = 9;
      _DAT_027501b8 = "DuplicateInstanceId";
      _DAT_027501c0 = "Duplicate instanceId value detected.";
      _DAT_027501c8 = DAT_02750a00;
      _DAT_027501d0 = DAT_02750a00;
      _DAT_027501d8 = 10;
      _DAT_027501e0 = "IssetError";
      _DAT_027501e8 = "The isset flag is false for a field.";
      _DAT_027501f0 = DAT_02750a00;
      _DAT_027501f8 = DAT_02750a00;
      _DAT_02750200 = 0xb;
      _DAT_02750208 = "InconsistentLsEntityData";
      _DAT_02750210 = "There is an inconsistency in the LsEntity metadata.";
      _DAT_02750218 = DAT_02750a00;
      _DAT_02750220 = DAT_02750a00;
      _DAT_02750228 = 0xc;
      _DAT_02750230 = "LsObjectStoreUtilsError";
      _DAT_02750238 = "There was an error during processing os LsObjectStore data.";
      _DAT_02750240 = DAT_02750a00;
      _DAT_02750248 = DAT_02750a00;
      _DAT_02750250 = 0xd;
      _DAT_02750258 = "MissingUuid";
      _DAT_02750260 = "An object has an empty UUID string.";
      _DAT_02750268 = DAT_02750a00;
      _DAT_02750270 = DAT_02750a00;
      _DAT_02750278 = 0xe;
      _DAT_02750280 = "NoDatabaseConnection";
      _DAT_02750288 = "Object cache is local";
      _DAT_02750290 = DAT_02750a00;
      _DAT_02750298 = DAT_02750a00;
      _DAT_027502a0 = 0xf;
      _DAT_027502a8 = "ObjectAddedToLsEntityTwice";
      _DAT_027502b0 = "Attempt to add an object to the LsEntity metadata twice.";
      _DAT_027502b8 = DAT_02750a00;
      _DAT_027502c0 = DAT_02750a00;
      _DAT_027502c8 = 0x10;
      _DAT_027502d0 = "ObjectNotFound";
      _DAT_027502d8 = "The requested object was not found.";
      _DAT_027502e0 = DAT_02750a00;
      _DAT_027502e8 = DAT_02750a00;
      _DAT_027502f0 = 0x11;
      _DAT_027502f8 = "ObjectNotStoredInLsEntity";
      _DAT_02750300 = "Attempt to manipulate an object that is not found in the LsEntity metadata.";
      _DAT_02750308 = DAT_02750a00;
      _DAT_02750310 = DAT_02750a00;
      _DAT_02750318 = 0x12;
      _DAT_02750320 = "OneToOneHasNoRelatedObject";
      _DAT_02750328 = "The one-to-one relation has no target object.";
      _DAT_02750330 = DAT_02750a00;
      _DAT_02750338 = DAT_02750a00;
      _DAT_02750340 = 0x13;
      _DAT_02750348 = "QueryError";
      _DAT_02750350 = "Caught an exception from a DB query.";
      _DAT_02750358 = DAT_02750a00;
      _DAT_02750360 = DAT_02750a00;
      _DAT_02750368 = 0x14;
      _DAT_02750370 = "QueryCountError";
      _DAT_02750378 = "Query returned bad number of results.";
      _DAT_02750380 = DAT_02750a00;
      _DAT_02750388 = DAT_02750a00;
      _DAT_02750390 = 0x15;
      _DAT_02750398 = "RelationQueryDisallowed";
      _DAT_027503a0 = "Relation query was attempted when disallowed.";
      _DAT_027503a8 = DAT_02750a00;
      _DAT_027503b0 = DAT_02750a00;
      _DAT_027503b8 = 0x16;
      _DAT_027503c0 = "UniquenessRequirementViolation";
      _DAT_027503c8 = "A value that is required to be unique within some scope is not unique.";
      _DAT_027503d0 = DAT_02750a00;
      _DAT_027503d8 = DAT_02750a00;
      _DAT_027503e0 = 0x17;
      _DAT_027503e8 = "UnknownTemporaryInstanceId";
      _DAT_027503f0 = "LsRelation contains a temporary instanceId value that is unrecognized.";
      _DAT_027503f8 = DAT_02750a00;
      _DAT_02750400 = DAT_02750a00;
      _DAT_02750408 = 0x18;
      _DAT_02750410 = "UninitializedUuid";
      _DAT_02750418 = "Object uuid string is empty.";
      _DAT_02750420 = DAT_02750a00;
      _DAT_02750428 = DAT_02750a00;
      _DAT_02750430 = 0x19;
      _DAT_02750438 = "ValueOutOfRange";
      _DAT_02750440 = "Value out of range. ";
      _DAT_02750448 = DAT_02750a00;
      _DAT_02750450 = DAT_02750a00;
      _DAT_02750458 = 0x1a;
      _DAT_02750460 = "WireFormatObjectHasDisappeared";
      _DAT_02750468 = "The wire-format object underlying this proxy object has disappeared.";
      _DAT_02750470 = DAT_02750a00;
      _DAT_02750478 = DAT_02750a00;
      _DAT_02750480 = 0x1b;
      _DAT_02750488 = "WrongRelationType";
      _DAT_02750490 = "The LsRelation provided was for the wrong object type.";
      _DAT_02750498 = DAT_02750a00;
      _DAT_027504a0 = DAT_02750a00;
      _DAT_027504a8 = 0x1c;
      _DAT_027504b0 = "DuplicateEntityRegistration";
      _DAT_027504b8 =
           "Attempt to register an entity (a Ls* object) as a digital signature participant more than once."
      ;
      _DAT_027504c0 = DAT_02750a00;
      _DAT_027504c8 = DAT_02750a00;
      _DAT_027504d0 = 0x1d;
      _DAT_027504d8 = "DuplicateUuid";
      _DAT_027504e0 = "Duplicate uuid value detected.";
      _DAT_027504e8 = DAT_02750a00;
      _DAT_027504f0 = DAT_02750a00;
      _DAT_027504f8 = 0x1e;
      _DAT_02750500 = "IllegalOperation";
      _DAT_02750508 = "Illegal operation.";
      _DAT_02750510 = DAT_02750a00;
      _DAT_02750518 = DAT_02750a00;
      _DAT_02750520 = 0x1f;
      _DAT_02750528 = "SigningProtocolBadOp";
      _DAT_02750530 = "Unexpected operation in TPaceSigningProtocol.";
      _DAT_02750538 = DAT_02750a00;
      _DAT_02750540 = DAT_02750a00;
      _DAT_02750548 = 0x20;
      _DAT_02750550 = "SigningProtocolDirError";
      _DAT_02750558 = "Ls*Wire object written to the TPaceSigningProtocol twice.";
      _DAT_02750560 = DAT_02750a00;
      _DAT_02750568 = DAT_02750a00;
      _DAT_02750570 = 0x21;
      _DAT_02750578 = "SigningProtocolDuplicateId";
      _DAT_02750580 =
           "Two data members in a Ls*Wire object written to the TPaceSigningProtocolare identical.";
      _DAT_02750588 = DAT_02750a00;
      _DAT_02750590 = DAT_02750a00;
      _DAT_02750598 = 0x22;
      _DAT_027505a0 = "SigningProtocolDataNotFound";
      _DAT_027505a8 = "Could not find data for the specified (uuid,ThriftId) combination.";
      _DAT_027505b0 = DAT_02750a00;
      _DAT_027505b8 = DAT_02750a00;
      _DAT_027505c0 = 0x23;
      _DAT_027505c8 = "SigningProtocolEmptyAmap";
      _DAT_027505d0 = "Empty attribute map found in the entity directory map.";
      _DAT_027505d8 = DAT_02750a00;
      _DAT_027505e0 = DAT_02750a00;
      _DAT_027505e8 = 0x24;
      _DAT_027505f0 = "AlreadySigned";
      _DAT_027505f8 = "The object you are attempting to sign already has a signature.";
      _DAT_02750600 = DAT_02750a00;
      _DAT_02750608 = DAT_02750a00;
      _DAT_02750610 = 0x25;
      _DAT_02750618 = "NotSigned";
      _DAT_02750620 = "This object is not signed.";
      _DAT_02750628 = DAT_02750a00;
      _DAT_02750630 = DAT_02750a00;
      _DAT_02750638 = 0x26;
      _DAT_02750640 = "SignedOutsideValidCertDateRange";
      _DAT_02750648 = "Signing date is outside valid date range of signing certificate.";
      _DAT_02750650 = DAT_02750a00;
      _DAT_02750658 = DAT_02750a00;
      _DAT_02750660 = 0x27;
      _DAT_02750668 = "CertPermissionsInvalid";
      _DAT_02750670 =
           "The certificate chain for this object does not have permission to sign for the participants."
      ;
      _DAT_02750678 = DAT_02750a00;
      _DAT_02750680 = DAT_02750a00;
      _DAT_02750688 = 0x28;
      _DAT_02750690 = "UnknownCertifierError";
      _DAT_02750698 = "Unrecognized error from the Certifier.";
      _DAT_027506a0 = DAT_02750a00;
      _DAT_027506a8 = DAT_02750a00;
      _DAT_027506b0 = 0x29;
      _DAT_027506b8 = "MissingRequiredRelation";
      _DAT_027506c0 = "A relationship that is required (not optional) is not populated.";
      _DAT_027506c8 = DAT_02750a00;
      _DAT_027506d0 = DAT_02750a00;
      _DAT_027506d8 = 0x2a;
      _DAT_027506e0 = "UnrecognizedDigestType";
      _DAT_027506e8 = "The digest type string is not recognized.";
      _DAT_027506f0 = DAT_02750a00;
      _DAT_027506f8 = DAT_02750a00;
      _DAT_02750700 = 0x2b;
      _DAT_02750708 = "UnrecognizedSignatureMethod";
      _DAT_02750710 = "The signature method string is not recognized.";
      _DAT_02750718 = DAT_02750a00;
      _DAT_02750720 = DAT_02750a00;
      _DAT_02750728 = 0x2c;
      _DAT_02750730 = "NoCertChain";
      _DAT_02750738 = "The signing certificate chain is empty.";
      _DAT_02750740 = DAT_02750a00;
      _DAT_02750748 = DAT_02750a00;
      _DAT_02750750 = 0x2d;
      _DAT_02750758 = "DigitalSigningFailure";
      _DAT_02750760 = "Digital signing failed.";
      _DAT_02750768 = DAT_02750a00;
      _DAT_02750770 = DAT_02750a00;
      _DAT_02750778 = 0x2e;
      _DAT_02750780 = "SignatureVerificationFailure";
      _DAT_02750788 = "Digital signature verification failed.";
      _DAT_02750790 = DAT_02750a00;
      _DAT_02750798 = DAT_02750a00;
      _DAT_027507a0 = 0x2f;
      _DAT_027507a8 = "BadSigningParameter";
      _DAT_027507b0 = "Bad digital signing parameter.";
      _DAT_027507b8 = DAT_02750a00;
      _DAT_027507c0 = DAT_02750a00;
      _DAT_027507c8 = 0x30;
      _DAT_027507d0 = "CanonicalVersionNotFound";
      _DAT_027507d8 = "Cannot find a matching canonical version in the Signature data.";
      _DAT_027507e0 = DAT_02750a00;
      _DAT_027507e8 = DAT_02750a00;
      _DAT_027507f0 = 0x31;
      _DAT_027507f8 = "FileOperationError";
      _DAT_02750800 = "A file operation got an error.";
      _DAT_02750808 = DAT_02750a00;
      _DAT_02750810 = DAT_02750a00;
      _DAT_02750818 = 0x32;
      _DAT_02750820 = "RepeatedSchemaVersion";
      _DAT_02750828 = "Schema version being used duplicates one already in use.";
      _DAT_02750830 = DAT_02750a00;
      _DAT_02750838 = DAT_02750a00;
      _DAT_02750840 = 0x33;
      _DAT_02750848 = "NotFound";
      _DAT_02750850 = "A search failed.";
      _DAT_02750858 = DAT_02750a00;
      _DAT_02750860 = DAT_02750a00;
      _DAT_02750868 = 0x34;
      _DAT_02750870 = "DataValueMismatch";
      _DAT_02750878 = "Data value mismatch.";
      _DAT_02750880 = DAT_02750a00;
      _DAT_02750888 = DAT_02750a00;
      _DAT_02750890 = 0x35;
      _DAT_02750898 = "StlError";
      _DAT_027508a0 = "Error occurred during a STL operation.";
      _DAT_027508a8 = DAT_02750a00;
      _DAT_027508b0 = DAT_02750a00;
      _DAT_027508b8 = 0x36;
      _DAT_027508c0 = "NoItemsDigested";
      _DAT_027508c8 = "No data items were digested.";
      _DAT_027508d0 = DAT_02750a00;
      _DAT_027508d8 = DAT_02750a00;
      _DAT_027508e0 = 0x37;
      _DAT_027508e8 = "NoBytesDigested";
      _DAT_027508f0 = "No bytes were digested.";
      _DAT_027508f8 = DAT_02750a00;
      _DAT_02750900 = DAT_02750a00;
      _DAT_02750908 = 0x38;
      _DAT_02750910 = "SchemaVersionsOutOfOrder";
      _DAT_02750918 = "List of allowed schema versions is not in ascending order.";
      _DAT_02750920 = DAT_02750a00;
      _DAT_02750928 = DAT_02750a00;
      _DAT_02750930 = 0x39;
      _DAT_02750938 = "DsigIssuerMustBeDsig";
      _DAT_02750940 =
           "If an attribute is a dsig_issuer fora db schema version, it must also be a dsig";
      _DAT_02750948 = DAT_02750a00;
      _DAT_02750950 = DAT_02750a00;
      _DAT_02750958 = 0x3a;
      _DAT_02750960 = "DsigParticipantMusteBeDsig";
      _DAT_02750968 =
           "If an attribute is a dsig_participant for a db schema version, it must also be a dsig";
      _DAT_02750970 = DAT_02750a00;
      _DAT_02750978 = DAT_02750a00;
      _DAT_02750980 = 0x3b;
      _DAT_02750988 = "SelfRelationForNonexistentObject";
      _DAT_02750990 = "A self relation value was provided,  but no object was found.";
      _DAT_02750998 = DAT_02750a00;
      _DAT_027509a0 = DAT_02750a00;
      _DAT_027509a8 = 0x3c;
      _DAT_027509b0 = "NotLockOwner";
      _DAT_027509b8 = "Attempt to release a cache lock by someone other than the lock owner.";
      _DAT_027509c0 = DAT_02750a00;
      _DAT_027509c8 = DAT_02750a00;
      _DAT_027509d0 = 0xffffffff;
      _DAT_027509e8 = 0x1ff0020;
      uRam00000000027509ec = 0;
      uRam00000000027509f0 = 0x1ff0020;
      uRam00000000027509f4 = 0;
      _DAT_027509d8 = 0x1ff0020;
      uRam00000000027509dc = 0;
      uRam00000000027509e0 = 0x1ff0020;
      uRam00000000027509e4 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02750070;
}


