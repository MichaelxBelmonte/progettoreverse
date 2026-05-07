// Function: FUN_00a5a9fe
// Address: 00a5a9fe
// Size: 530 bytes
// Class: Unknown
// String references:
//   "LsObjectRelationVector<>::at: This one-to-one relation is empty."
//   "LsObjectRelationVector<>::at: Index is out of range. This object relation vector contains %u entrie...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...
//   "pace::NoDeletePtr<LsExpirationWarning> license_services::LsObjectRelationVectorExpirationWarning::a...

uint64_t FUN_00a5a9fe(uint64_t param_1,uint64_t param_2)

{
  code *pcVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t lVar6;
  uint64_t this_ptr;
  int64_t local_68;
  uint64_t *local_58;
  code *local_50;
  code *local_48;
  uint64_t local_38;
  
  local_38 = param_2;
  if ((*(char *)(arg1 + 0x10) == '\0') &&
     ((*(int64_t **)(arg1 + 8))[1] == **(int64_t **)(arg1 + 8))) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("pace::NoDeletePtr<LsExpirationWarning> license_services::LsObjectRelationVectorExpirationWarning::at(const size_t)"
                 ,0x6e);
    FUN_009c78cb();
  }
  uVar4 = (*(int64_t **)(arg1 + 8))[1] - **(int64_t **)(arg1 + 8) >> 5;
  if (uVar4 <= local_38) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (*(int64_t **)(arg1 + 8))[1] - **(int64_t **)(arg1 + 8) >> 5;
    local_58 = (uint64_t *)&local_68;
    local_50 = FUN_00ac1940;
    local_48 = FUN_009baee0;
    FUN_00983230();
    local_58 = &local_38;
    local_50 = FUN_00ac1940;
    local_48 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("pace::NoDeletePtr<LsExpirationWarning> license_services::LsObjectRelationVectorExpirationWarning::at(const size_t)"
                 ,0x70);
    FUN_009c78cb();
    uVar4 = (*(int64_t **)(arg1 + 8))[1] - **(int64_t **)(arg1 + 8) >> 5;
  }
  if (uVar4 <= local_38) {
    std::__vector_base_common<true>::__throw_out_of_range();
                        pcVar1 = invalidInstructionException();
    (*pcVar1)();
  }
  FUN_00aa9d4e(uVar4,local_38 << 5);
  cVar2 = FUN_009b9a8a();
  if (cVar2 == '\0') {
    lVar3 = *(int64_t *)(*(int64_t *)(arg1 + 0x20) + 8);
    lVar5 = *(int64_t *)(lVar3 + 0x28);
    if (lVar5 != 0) {
      lVar3 = lVar3 + 0x28;
      lVar6 = lVar3;
      do {
        if ((int64_t)local_48 <= *(int64_t *)(lVar5 + 0x20)) {
          lVar6 = lVar5;
        }
        lVar5 = *(int64_t *)
                 (lVar5 + (uint64_t)(*(int64_t *)(lVar5 + 0x20) < (int64_t)local_48) * 8);
      } while (lVar5 != 0);
      if ((lVar6 != lVar3) && (*(int64_t *)(lVar6 + 0x20) <= (int64_t)local_48)) {
        FUN_00a31ee0(0,&local_58);
        goto LAB_00a5abdb;
      }
    }
    FUN_00a32ccc();
    FUN_00a31ee0(0,&local_58);
  }
  else {
    FUN_00a31ee0(0,&local_58);
  }
LAB_00a5abdb:
  FUN_00aa9aa2();
  return this_ptr;
}

