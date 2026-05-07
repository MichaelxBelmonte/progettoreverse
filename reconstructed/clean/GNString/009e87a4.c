// Function: FUN_009e87a4
// Address: 009e87a4
// Size: 535 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009e87a4(uint64_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  char *pcVar6;
  int64_t this_ptr;
  int64_t local_50;
  uint64_t local_48;
  
  pcVar2 = *(char **)(this_ptr + 0x18);
  pcVar6 = *(char **)(this_ptr + 0x20);
  if (pcVar2 == pcVar6) {
    FUN_009e818c();
    return;
  }
  if (*pcVar2 != '{') {
    lVar4 = 2;
    if ((int64_t)pcVar6 - (int64_t)pcVar2 < 3) {
      lVar4 = (int64_t)pcVar6 - (int64_t)pcVar2;
    }
    if (lVar4 != 0) {
      FUN_009e8d30(param_1,pcVar2 + lVar4);
      pvVar5 = (void *)((int64_t)&MACH_HEADER.cpusubtype + 2);
      iVar3 = FUN_009dcab0(10,local_48);
      *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x18);
      if (local_50 != 0) {
        operator_delete(pvVar5);
      }
      if (iVar3 < 0) goto LAB_009e8960;
      goto LAB_009e890b;
    }
    goto LAB_009e8960;
  }
  *(char **)(this_ptr + 0x18) = pcVar2 + 1;
  if (pcVar2 + 1 == pcVar6) {
LAB_009e8831:
    pcVar6 = *(char **)(this_ptr + 0x18);
    while ((pcVar6 != *(char **)(this_ptr + 0x20) && (*pcVar6 != '}'))) {
      pcVar6 = pcVar6 + 1;
      *(char **)(this_ptr + 0x18) = pcVar6;
    }
    iVar3 = FUN_009e8daa();
    if (-1 < iVar3) goto LAB_009e8869;
  }
  else {
    FUN_009e8d30();
    pvVar5 = (void *)((int64_t)&MACH_HEADER.cpusubtype + 2);
    iVar3 = FUN_009dcab0(10,local_48);
    *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x18);
    if (local_50 != 0) {
      operator_delete(pvVar5);
    }
    if (iVar3 < 0) goto LAB_009e8831;
LAB_009e8869:
    if (**(char **)(this_ptr + 0x18) == '}') {
      *(char **)(this_ptr + 0x18) = *(char **)(this_ptr + 0x18) + 1;
LAB_009e890b:
      lVar4 = FUN_009e2686();
      if (*(char *)(lVar4 + 0x10) == '\0') {
        uVar1 = *(void*)(this_ptr + 0x2c);
        *(void*)(this_ptr + 0x2c) = 5;
        *(void*)(this_ptr + 0x34) = 1;
        FUN_009e8012();
        *(void*)(this_ptr + 0x34) = 0;
        *(void*)(this_ptr + 0x2c) = uVar1;
        pcVar2 = *(char **)(this_ptr + 0x18);
        if (pcVar2 == *(char **)(this_ptr + 0x20)) {
          return;
        }
        if (*pcVar2 != ':') {
          return;
        }
        *(char **)(this_ptr + 0x18) = pcVar2 + 1;
        FUN_009e8760();
        return;
      }
      *(void*)(this_ptr + 0x34) = 1;
      FUN_009e8012();
      *(void*)(this_ptr + 0x34) = 0;
      pcVar2 = *(char **)(this_ptr + 0x18);
      if (pcVar2 == *(char **)(this_ptr + 0x20)) {
        return;
      }
      if (*pcVar2 != ':') {
        return;
      }
      *(char **)(this_ptr + 0x18) = pcVar2 + 1;
      uVar1 = *(void*)(this_ptr + 0x2c);
      *(void*)(this_ptr + 0x2c) = 5;
      FUN_009e8760();
      *(void*)(this_ptr + 0x2c) = uVar1;
      return;
    }
  }
  *(char **)(this_ptr + 0x18) = pcVar2;
LAB_009e8960:
  FUN_009e818c();
  return;
}

