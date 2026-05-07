// Function: FUN_00cd4fc0
// Address: 00cd4fc0
// Size: 781 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd4fc0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t lVar10;
  int64_t local_68;
  char local_60;
  uint local_54;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0x50) == 0) {
    return;
  }
  local_40 = 0;
  iVar3 = FUN_00d8c7a0();
  if (iVar3 < 2) {
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      *(void*)(this_ptr + 0x58) = 0;
      local_40 = 0;
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x48) = 0;
    if (*(int64_t *)(this_ptr + 0x50) == 0) {
      return;
    }
    *(void*)(this_ptr + 0x50) = 0;
    local_40 = 0;
    FUN_00d50b20();
    return;
  }
  local_40 = 0;
  cVar2 = FUN_00d8ca50();
  lVar6 = g_02704060;
  if (cVar2 == '\0') {
    local_40 = 0;
  }
  else {
    uVar8 = *(void*)(this_ptr + 0x50);
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar6;
    local_60 = '\x01';
    FUN_00d91000(1,&local_68);
    lVar6 = local_50;
    if (local_50 == 0) {
      lVar6 = 0;
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((uint64_t)uVar8 >> 8);
      if (local_48 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    local_40 = uVar8;
    local_38 = lVar6;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      if (*(int *)(local_38 + 0xc) == 0) {
        iVar3 = 1;
        lVar6 = local_38;
      }
      else {
        uVar4 = 0;
        iVar5 = 0;
        do {
          local_54 = uVar4;
          FUN_00d8d520();
          lVar10 = 0x24;
          uVar7 = 0;
          do {
            lVar6 = local_38;
            if (*(uint *)(*(int64_t *)(this_ptr + 0x40) + 0x1c) <= uVar7) goto LAB_00cd52b2;
            lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x20) + 0x10);
            iVar3 = 0;
            if ((*(int *)(lVar6 + -4 + lVar10) == iVar5) &&
               (*(int64_t *)(lVar6 + -0x1c + lVar10) != 0)) {
              iVar3 = FUN_00e7de10();
              if (iVar3 == 0) {
                iVar3 = (int)uVar7 + 1;
              }
              else {
                iVar3 = 0;
              }
            }
            uVar7 = uVar7 + 1;
            lVar10 = lVar10 + 0x23c;
          } while (iVar3 == 0);
          uVar4 = local_54 + 1;
          lVar6 = local_38;
          iVar5 = iVar3;
        } while (uVar4 < *(uint *)(local_38 + 0xc));
      }
LAB_00cd525f:
      lVar10 = *(int64_t *)(this_ptr + 0x50);
      lVar1 = *(int64_t *)(this_ptr + 0x58);
      if (lVar1 != lVar10) {
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x58) = lVar10;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar10 = *(int64_t *)(this_ptr + 0x50);
      }
      *(int *)(this_ptr + 0x48) = iVar3;
      if ((lVar10 != 0) && (lVar10 != 0)) {
        *(void*)(this_ptr + 0x50) = 0;
        FUN_00d50b20();
      }
      goto LAB_00cd52b2;
    }
  }
  FUN_00d8d520();
  lVar6 = *(int64_t *)(this_ptr + 0x40);
  if (*(int *)(lVar6 + 0x1c) == 0) {
    return;
  }
  lVar10 = 0x24;
  uVar7 = 0;
  do {
    lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x20) + 0x10);
    if ((((*(int *)(lVar6 + -4 + lVar10) == 0) && (*(int64_t *)(lVar6 + -0x1c + lVar10) != 0)) &&
        (iVar3 = FUN_00e7de10(), iVar3 == 0)) && ((int)uVar7 != -1)) {
      iVar3 = (int)uVar7 + 1;
      lVar6 = 0;
      goto LAB_00cd525f;
    }
    uVar7 = uVar7 + 1;
    lVar6 = *(int64_t *)(this_ptr + 0x40);
    lVar10 = lVar10 + 0x23c;
  } while (uVar7 < *(uint *)(lVar6 + 0x1c));
  lVar6 = 0;
LAB_00cd52b2:
  if (((char)local_40 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}

