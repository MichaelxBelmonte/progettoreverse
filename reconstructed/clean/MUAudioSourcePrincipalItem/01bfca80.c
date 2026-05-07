// Function: FUN_01bfca80
// Address: 01bfca80
// Size: 796 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01bfca80(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t local_90;
  char local_88;
  int64_t *local_48;
  char local_40;
  
  FUN_01d3a560();
  iVar6 = FUN_01d3b590();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(uint *)(this_ptr + 0x20) = (uint)(iVar6 != 8) * 9 + 1;
  (**(code **)(*this_ptr + 0x3f8))();
  if (local_48 == (int64_t *)0x0) {
    bVar3 = true;
    plVar8 = (int64_t *)0x0;
  }
  else {
    plVar8 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  if (this_ptr[0x1d] == *arg1) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(int64_t *)*arg1 + 0x960))();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  cVar5 = (**(code **)(*local_48 + 0x50))();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (0 < *(int *)((int64_t)plVar8 + 0xc))) {
    lVar7 = 0;
    bVar2 = false;
    lVar9 = 0;
    do {
      lVar1 = *(int64_t *)(plVar8[2] + lVar7 * 8);
      if (lVar9 == lVar1) {
        lVar10 = lVar9;
        bVar4 = bVar2;
        if ((!bVar2) && (lVar1 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        lVar10 = lVar1;
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      if (this_ptr[0x1d] == *arg1) {
        FUN_01bfa490();
        FUN_01bf7000();
        FUN_00d46dc0();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_019b43b0();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar10;
    } while (lVar7 < *(int *)((int64_t)plVar8 + 0xc));
    if ((bVar2) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

