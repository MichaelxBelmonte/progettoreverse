// Function: FUN_00ac099f
// Address: 00ac099f
// Size: 544 bytes
// Class: OsSignatureMac
// String references:
//   "Got a NULL from realpath and this path string: \"%s\""
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/P...
//   "boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::filesystem::path &, ...

void FUN_00ac099f(char *param_1,string *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  string *psVar3;
  string *psVar4;
  int64_t *this_ptr;
  byte local_78;
  undefined7 uStack_77;
  string *local_70;
  int64_t local_68;
  byte local_60 [24];
  byte *local_48;
  string *local_40;
  code *local_38;
  
  this_ptr[2] = 0;
  this_ptr[1] = 0;
  *this_ptr = 0;
  psVar3 = param_2;
  FUN_00abe2de();
  std::string::string((string *)param_1,psVar3);
  if (((uint64_t)local_48 & 1) != 0) {
    operator_delete(param_1);
  }
  psVar3 = (string *)0x0;
  FUN_00ac71d0();
  if ((int)local_48 == 4) {
    lVar1 = _realpath_DARWIN_EXTSN();
    plVar2 = operator_new((ulong)param_1);
    psVar4 = (string *)(plVar2 + 1);
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = (int64_t)&g_0252b070;
    plVar2[3] = lVar1;
    plVar2[4] = (int64_t)PTR__free_024a98c0;
    if (lVar1 == 0) {
      FUN_00925fd0();
      psVar3 = (string *)FUN_00926010();
      local_40 = (string *)FUN_009b6370;
      local_38 = FUN_0094ef70;
      local_48 = local_60;
      FUN_00983230();
      param_1 = 
      "boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::filesystem::path &, boost::filesystem::path *)"
      ;
      FUN_00928ab0("boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::filesystem::path &, boost::filesystem::path *)"
                   ,0xf8);
      FUN_009cbbdb();
    }
    FUN_00abfcb8();
    std::string::string((string *)param_1,psVar3);
    if ((local_78 & 1) != 0) {
      operator_delete(param_1);
    }
    FUN_00aca780();
    this_ptr[2] = local_68;
    this_ptr[1] = (int64_t)local_70;
    *this_ptr = CONCAT71(uStack_77,local_78);
    if (param_2 != (string *)0x0) {
      std::string::operator=(local_70,psVar3);
    }
    if (((uint64_t)local_48 & 1) != 0) {
      operator_delete(local_70);
    }
    LOCK();
    lVar1 = *(int64_t *)psVar4;
    *(int64_t *)psVar4 = *(int64_t *)psVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  else {
    FUN_00aca780();
    this_ptr[2] = (int64_t)local_38;
    this_ptr[1] = (int64_t)local_40;
    *this_ptr = (int64_t)local_48;
    psVar4 = local_40;
    if (param_2 != (string *)0x0) {
      std::string::operator=(local_40,psVar3);
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(psVar4);
  }
  return;
}

