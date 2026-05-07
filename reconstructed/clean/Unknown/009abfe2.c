// Function: FUN_009abfe2
// Address: 009abfe2
// Size: 562 bytes
// Class: Unknown
// String references:
//   "The commander for the target iLok device has not been set"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Protocols...
//   "void pace::Ilok2Protocols::getAuthRecordWithAllStorageRecords(const ILok2Ref, EEPROM_AuthRecordStru...
//   "FindAuthRecord returned %d storage records and saying there is more, but there is not more"
//   "The expected Auth Record was not found"

void FUN_009abfe2(int64_t *param_1,void*param_2,uint32_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t *plVar2;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  char local_74;
  int64_t local_68;
  uint32_t local_44;
  int64_t *local_40;
  
  param_1[1] = *param_1;
  plVar2 = *(int64_t **)(this_ptr + 8);
  local_44 = param_3;
  if (plVar2 == (int64_t *)0x0) {
    FUN_00925fd0();
    local_40 = param_1;
    FUN_00926010();
    FUN_00928ab0("void pace::Ilok2Protocols::getAuthRecordWithAllStorageRecords(const ILok2Ref, EEPROM_AuthRecordStruct &, vector<EEPROM_StorageRecordStruct> &, bool, const boost::posix_time::ptime *)"
                 ,0x315);
    param_1 = local_40;
    FUN_009c720b();
    plVar2 = *(int64_t **)(this_ptr + 8);
  }
  (**(code **)(*plVar2 + 0xb0))(param_1,&local_98);
  param_2[3] = local_80;
  param_2[2] = local_88;
  param_2[1] = local_90;
  *param_2 = local_98;
  if ((*(int *)((int64_t)param_2 + 0x1c) == unaff_ESI) && (local_74 == '\0')) {
    lVar1 = param_1[1] - *param_1;
    local_68 = lVar1 >> 5;
    if ((lVar1 == 0) || (*(int *)(local_68 * 0x20 + -8 + *param_1) == -1)) {
      FUN_00925fd0();
      local_40 = (int64_t *)FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("void pace::Ilok2Protocols::getAuthRecordWithAllStorageRecords(const ILok2Ref, EEPROM_AuthRecordStruct &, vector<EEPROM_StorageRecordStruct> &, bool, const boost::posix_time::ptime *)"
                   ,0x347);
      FUN_009c720b();
    }
    FUN_009ac2b4(param_1,0);
  }
  if (*(int *)((int64_t)param_2 + 0x1c) != unaff_ESI) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("void pace::Ilok2Protocols::getAuthRecordWithAllStorageRecords(const ILok2Ref, EEPROM_AuthRecordStruct &, vector<EEPROM_StorageRecordStruct> &, bool, const boost::posix_time::ptime *)"
                 ,0x376);
    FUN_009c720b();
  }
  if ((char)local_44 != '\0') {
    FUN_009ac340(0,param_1,param_4);
  }
  return;
}

