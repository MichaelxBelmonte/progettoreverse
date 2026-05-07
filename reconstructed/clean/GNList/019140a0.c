// Function: FUN_019140a0
// Address: 019140a0
// Size: 737 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_019140a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t uStack_60;
  int64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_017e1dd0();
  lVar2 = local_68;
  if (((char)uStack_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(this_ptr + 0x48) != '\0') {
    local_58 = 0;
    local_68 = 0x100000000;
    uStack_60 = 0x100000000;
    uStack_50 = 1;
    local_48 = 1;
    uStack_40 = 1;
    FUN_017e1bc0();
    FUN_01715480();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bc0();
    FUN_01716a10();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_017e1d40();
  lVar3 = local_68;
  if ((char)uStack_60 == '\0') {
    if (local_68 == 0) goto LAB_01914356;
    FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == 0) goto LAB_01914356;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 0;
  local_58 = lVar3;
  local_48 = local_48 & 0xffffffff00000000;
  uStack_50 = 0;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8);
      local_68 = lVar1;
      uVar5 = FUN_017e4480();
      local_90 = '\0';
      local_98 = lVar1;
      FUN_017e4370(uVar5,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00e7bcc0();
      local_80 = '\0';
      local_88 = lVar1;
      FUN_017e4520(uVar5,&local_88);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,(int)lVar4);
    } while ((int)lVar4 < *(int *)(lVar3 + 0xc));
  }
  FUN_01916320();
  FUN_00d50b20();
LAB_01914356:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

