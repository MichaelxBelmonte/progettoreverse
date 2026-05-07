// Function: FUN_00bd5c60
// Address: 00bd5c60
// Size: 1903 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00bd5c60(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar8;
  bool bVar9;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  if (*arg1 != 0) {
    FUN_00b68000();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_00bd5cd1;
      }
    }
    else if (local_58 != 0) {
LAB_00bd5cd1:
      local_58 = 0;
      local_40 = -1;
      do {
        do {
          local_50 = '\0';
          lVar6 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_40) {
            FUN_00bddac0();
            FUN_00d50b20();
            goto LAB_00bd5e4a;
          }
          local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar6 * 8);
        } while (*(int64_t *)(this_ptr + 0x60) == local_58);
        plVar4 = (int64_t *)*arg1;
        FUN_00b691d0();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        cVar3 = (**(code **)(*plVar4 + 0x50))();
        if (local_a8 != 0) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      } while (cVar3 == '\0');
      lVar2 = *(int64_t *)(this_ptr + 0x60);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar6 = *(int64_t *)(this_ptr + 0x28);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_00b690f0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar6 = *(int64_t *)(this_ptr + 0x60);
      if (lVar6 != local_58) {
        if (local_58 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar6 = *(int64_t *)(this_ptr + 0x60);
          lVar5 = local_58;
        }
        *(int64_t *)(this_ptr + 0x60) = lVar5;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      lVar6 = *(int64_t *)(this_ptr + 0x28);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_00b69160();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00b690c0();
      iVar1 = *(int *)(local_a8 + 0xc);
      if (local_a0 != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 == 0) {
        FUN_00b680a0();
        FUN_00d50130();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00bddac0();
      uVar8 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
      FUN_00d50b20();
      goto LAB_00bd63d1;
    }
  }
LAB_00bd5e4a:
  FUN_00b690c0();
  iVar1 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 1) {
    bVar9 = *param_2 != *(int64_t *)(this_ptr + 0x58);
    uVar8 = CONCAT71((int7)((uint64_t)param_2 >> 8),bVar9);
    if (bVar9) {
      lVar2 = *(int64_t *)(this_ptr + 0x60);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00b68030();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x60);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00b680a0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00b69200();
    goto LAB_00bd63d1;
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00b68190();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b681c0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b68420();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b68450();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b68930();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b68960();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00b690f0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00b69200();
  FUN_00b68030();
  lVar2 = *(int64_t *)(this_ptr + 0x60);
  if (lVar2 == 0) {
    plVar7 = (int64_t *)0x0;
    if (plVar4 != (int64_t *)0x0) goto LAB_00bd61c6;
  }
  else {
    FUN_00d50b00();
    plVar7 = *(int64_t **)(this_ptr + 0x60);
    if (plVar7 != plVar4) {
LAB_00bd61c6:
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x60) = plVar4;
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = *(int64_t *)(this_ptr + 0x28);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b69160();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
  FUN_00d50b20();
LAB_00bd63d1:
  return uVar8 & 0xffffffff;
}

