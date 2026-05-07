// Function: FUN_00a5860e
// Address: 00a5860e
// Size: 530 bytes
// Class: Unknown
// String references:
//   "LsObjectRelationVector<>::at: This one-to-one relation is empty."
//   "LsObjectRelationVector<>::at: Index is out of range. This object relation vector contains %u entrie...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...
//   "pace::NoDeletePtr<LsArrayEntry> license_services::LsObjectRelationVectorArrayEntry::at(const size_t...


undefined8 FUN_00a5860e(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong lVar6;
  undefined8 unaff_RDI;
  longlong local_68;
  ulonglong *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_38;
  
  local_38 = param_2;
  if ((*(char *)(unaff_RSI + 0x10) == '\0') &&
     ((*(longlong **)(unaff_RSI + 8))[1] == **(longlong **)(unaff_RSI + 8))) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("pace::NoDeletePtr<LsArrayEntry> license_services::LsObjectRelationVectorArrayEntry::at(const size_t)"
                 ,0x6e);
    FUN_009c78cb();
  }
  uVar4 = (*(longlong **)(unaff_RSI + 8))[1] - **(longlong **)(unaff_RSI + 8) >> 5;
  if (uVar4 <= local_38) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (*(longlong **)(unaff_RSI + 8))[1] - **(longlong **)(unaff_RSI + 8) >> 5;
    local_58 = (ulonglong *)&local_68;
    local_50 = FUN_00ac1940;
    local_48 = FUN_009baee0;
    FUN_00983230();
    local_58 = &local_38;
    local_50 = FUN_00ac1940;
    local_48 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("pace::NoDeletePtr<LsArrayEntry> license_services::LsObjectRelationVectorArrayEntry::at(const size_t)"
                 ,0x70);
    FUN_009c78cb();
    uVar4 = (*(longlong **)(unaff_RSI + 8))[1] - **(longlong **)(unaff_RSI + 8) >> 5;
  }
  if (uVar4 <= local_38) {
    std::__vector_base_common<true>::__throw_out_of_range();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_00aa9d4e(uVar4,local_38 << 5);
  cVar2 = FUN_009b9a8a();
  if (cVar2 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(unaff_RSI + 0x20) + 8);
    lVar5 = *(longlong *)(lVar3 + 0x28);
    if (lVar5 != 0) {
      lVar3 = lVar3 + 0x28;
      lVar6 = lVar3;
      do {
        if ((longlong)local_48 <= *(longlong *)(lVar5 + 0x20)) {
          lVar6 = lVar5;
        }
        lVar5 = *(longlong *)
                 (lVar5 + (ulonglong)(*(longlong *)(lVar5 + 0x20) < (longlong)local_48) * 8);
      } while (lVar5 != 0);
      if ((lVar6 != lVar3) && (*(longlong *)(lVar6 + 0x20) <= (longlong)local_48)) {
        FUN_00a23744(0,&local_58);
        goto LAB_00a587eb;
      }
    }
    FUN_00a2453e();
    FUN_00a23744(0,&local_58);
  }
  else {
    FUN_00a23744(0,&local_58);
  }
LAB_00a587eb:
  FUN_00aa9aa2();
  return unaff_RDI;
}


