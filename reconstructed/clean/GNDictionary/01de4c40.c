// Function: FUN_01de4c40
// Address: 01de4c40
// Size: 547 bytes
// Class: GNDictionary

uint32_t FUN_01de4c40(void)

{
  int iVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01d384c0();
  uVar9 = FUN_01e437f0();
  iVar4 = (**(code **)(*this_ptr + 0x9d8))(uVar9);
  local_60 = g_027f2a60;
  uVar9 = extraout_XMM0_Da;
  if (g_027f2a60 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_58 = '\x01';
  FUN_000175c0(uVar9,&local_60);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  bVar2 = **(int **)(lVar3 + 0x10) < iVar4;
  local_50 = lVar3;
  local_48 = '\0';
  uVar9 = (**(code **)(*(int64_t *)this_ptr[0x3f] + 0x38))(bVar2,iVar4 - (uint)bVar2);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar9 != '\0') {
    uVar8 = *(uint *)(lVar3 + 0x18);
    uVar7 = (uint64_t)uVar8;
    uVar5 = uVar8 + 3;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    if (3 < (int)uVar8) {
      uVar5 = (int)uVar5 >> 2;
      uVar7 = *(uint64_t *)(lVar3 + 0x10);
      if (uVar5 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 4;
        } while ((uVar5 & 0xfffffffc) != uVar8);
      }
      if ((uVar5 & 3) != 0) {
        uVar7 = uVar7 + (uint64_t)uVar8 * 4;
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 1;
        } while ((uVar5 & 3) != uVar8);
      }
    }
    if (3 < *(int *)(lVar3 + 0x18)) {
      iVar4 = 0;
      do {
        FUN_01dd3d20(uVar7,iVar4 != 0);
        iVar4 = iVar4 + 1;
        iVar1 = *(int *)(lVar3 + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        uVar7 = (uint64_t)(uint)(iVar6 >> 2);
      } while (iVar4 < iVar6 >> 2);
    }
  }
  FUN_00d50b20();
  return uVar9;
}

