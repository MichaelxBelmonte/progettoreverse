// Function: FUN_018d7dd0
// Address: 018d7dd0
// Size: 878 bytes
// Class: Unknown
// String references:
//   "^%@"

int FUN_018d7dd0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char unaff_SIL;
  int64_t *this_ptr;
  uint uVar11;
  uint64_t uVar12;
  void*local_68;
  char local_60 [8];
  void*local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  puVar4 = local_68;
  lVar2 = g_027cc8a0;
  plVar1 = (int64_t *)*this_ptr;
  if (g_027cc8a0 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    return 10;
  }
  FUN_017281b0();
  FUN_00d23310();
  pcVar10 = local_38;
  if (local_60[0] != '\0') {
    pcVar10 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  cVar6 = FUN_00d8ca70();
  cVar7 = FUN_00d8ca70();
  if (cVar6 != cVar7) goto LAB_018d8047;
  FUN_00d8c7a0();
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  if ((((local_60[0] == '\0') && (local_68 != (void*)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_60[0] = '\x01';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_50 = 0;
  if (local_68 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_58 = local_68;
  local_50 = '\x01';
  FUN_00d8cb40();
  lVar5 = local_48;
  lVar2 = *this_ptr;
  if (lVar2 == local_48) {
    if (((char)this_ptr[1] != '\0') || (local_48 == 0)) goto LAB_018d8007;
    if (local_40 == '\0') {
      FUN_00d50b00();
      goto LAB_018d7fff;
    }
LAB_018d7fc1:
    *(void*)(this_ptr + 1) = 1;
    local_40 = '\0';
  }
  else {
    lVar3 = this_ptr[1];
    if (local_40 != '\0') {
      *this_ptr = local_48;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_018d7fc1;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar5;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_018d7fff:
    *(void*)(this_ptr + 1) = 1;
LAB_018d8007:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_018d8047:
  FUN_018e21b0();
  if ((local_60[0] == '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b00();
  }
  iVar8 = -1;
  if (0 < *(int *)((int64_t)local_68 + 0xc)) {
    uVar12 = 0;
    do {
      cVar6 = (**(code **)(**(int64_t **)(local_68[2] + uVar12 * 8) + 0x50))();
      if (cVar6 != '\0') {
        uVar11 = (uint)uVar12;
        iVar8 = (int)((uVar12 & 0xffffffff) / 0xc);
        iVar9 = uVar11 + iVar8 * -0xc;
        iVar8 = uVar11 + 0xc + iVar8 * -0xc;
        if (uVar11 < 0x18) {
          iVar8 = iVar9;
        }
        if (unaff_SIL == '\0') {
          iVar8 = iVar9;
        }
        goto LAB_018d8116;
      }
      uVar12 = uVar12 + 1;
    } while ((int64_t)uVar12 < (int64_t)*(int *)((int64_t)local_68 + 0xc));
    iVar8 = -1;
  }
LAB_018d8116:
  FUN_00d50b20();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return iVar8;
}

