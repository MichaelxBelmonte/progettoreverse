// Function: FUN_00baf520
// Address: 00baf520
// Size: 666 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00baf520(uint param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t arg1;
  int64_t *this_ptr;
  int iVar10;
  int iVar11;
  bool bVar12;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int local_40;
  int local_3c;
  uint64_t local_38;
  
  uVar8 = (uint64_t)param_1;
  switch((short)this_ptr[8]) {
  case 1:
  case 3:
    local_38 = uVar8;
    uVar3 = (**(code **)(*this_ptr + 0x388))();
    uVar4 = (**(code **)(*this_ptr + 0x390))();
    lVar1 = this_ptr[4];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00b9d430(local_38,param_2,uVar3,uVar4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
  case 0x11:
    if ((short)this_ptr[8] == 2) {
      uVar9 = (uint)(short)this_ptr[0xd];
      plVar5 = (int64_t *)((int64_t)this_ptr + 0x6a);
    }
    else {
      uVar9 = (int)*(short *)((int64_t)this_ptr + 0x6e) /
              (int)*(short *)((int64_t)this_ptr + 0x3c);
      plVar5 = this_ptr + 0xe;
    }
    local_3c = (int)(short)*plVar5;
    if ((param_2 | (int64_t)(int)uVar9) >> 0x20 == 0) {
      param_2 = (param_2 & 0xffffffff) % (uint64_t)uVar9;
    }
    else {
      param_2 = (int64_t)param_2 % (int64_t)(int)uVar9;
    }
    uVar6 = FUN_00e83010();
    (**(code **)(*(int64_t *)this_ptr[4] + 0x3a0))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    iVar11 = 0;
    do {
      iVar7 = local_3c;
      iVar10 = (int)param_2;
      uVar2 = iVar10 + (int)uVar8;
      if ((int)(uVar9 - iVar10) < (int)uVar8) {
        uVar2 = uVar9;
      }
      local_40 = local_3c;
      local_38 = uVar8;
      (**(code **)(*(int64_t *)this_ptr[4] + 0x380))(&local_40,uVar6);
      bVar12 = local_40 == iVar7;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02765700;
      if (local_90 == 0 && bVar12) {
        if ((short)this_ptr[8] == 2) {
          FUN_00baeb90(uVar2,param_2 & 0xffffffff,arg1,iVar11);
        }
        else {
          FUN_00baf170(uVar2,param_2 & 0xffffffff,arg1,iVar11);
        }
        iVar7 = (int)local_38;
      }
      else {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        iVar7 = (int)local_38;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      iVar10 = uVar2 - iVar10;
      iVar11 = iVar11 + iVar10;
      param_2 = 0;
      uVar8 = (uint64_t)(uint)(iVar7 - iVar10);
    } while (iVar7 - iVar10 != 0 && iVar10 <= iVar7);
    FUN_00e83070();
  }
  return;
}

