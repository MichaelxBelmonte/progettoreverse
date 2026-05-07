// Function: FUN_009d561e
// Address: 009d561e
// Size: 1633 bytes
// Class: Unknown
// String references:
//   "[^\\d.]+"


int FUN_009d561e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  byte *pbVar5;
  bad_cast *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  byte local_370;
  byte local_358;
  longlong local_330;
  longlong local_328;
  char local_320;
  byte local_318;
  byte local_2f0;
  byte local_2d8;
  byte local_2a0;
  byte local_288;
  byte local_260;
  byte local_248;
  byte local_200;
  byte local_1e8;
  longlong local_1c0;
  longlong local_1b8;
  char local_1b0;
  byte local_1a8;
  bad_cast abStack_1a7 [15];
  bad_cast *local_198;
  byte local_190;
  byte local_178;
  longlong local_150;
  longlong local_148;
  char local_140;
  byte local_138;
  bad_cast local_137 [15];
  bad_cast *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  byte local_110;
  byte local_f8;
  byte *local_e0;
  longlong *local_d8;
  byte *local_d0;
  longlong *local_c8;
  bad_cast *local_c0;
  bad_cast *local_b8;
  undefined *local_b0;
  undefined **local_a8;
  undefined *local_a0;
  byte local_98;
  longlong local_70;
  longlong local_68;
  char local_60;
  byte local_58;
  undefined *local_40;
  int local_38;
  int local_34;
  
  FUN_009d5ffc(param_1,0);
  FUN_009d55b7("",local_120,0);
  FUN_009d55b7("",local_120,0);
  FUN_009f59a0(0,0);
  FUN_009ea1d0();
  FUN_009ea1d0();
  FUN_009f5840();
  FUN_009f5840();
  local_e0 = &local_138;
  local_c0 = local_137;
  local_d8 = &local_150;
  pbVar5 = &local_1a8;
  local_b8 = abStack_1a7;
  local_c8 = &local_1c0;
  local_40 = &DAT_02524fc0;
  local_d0 = pbVar5;
  do {
    FUN_009f58f0();
    pbVar5 = (byte *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),local_60);
    if ((local_140 == '\0') || (local_60 == '\0')) {
      bVar9 = true;
      if (local_140 == local_60) goto LAB_009d57bd;
    }
    else {
      bVar9 = true;
      if ((local_150 == local_70) && (local_148 == local_68)) {
LAB_009d57bd:
        FUN_009f58f0();
        pbVar5 = (byte *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),local_320);
        if ((local_1b0 == '\0') || (local_320 == '\0')) {
          bVar9 = local_1b0 == local_320;
        }
        else if (local_1c0 == local_330) {
          bVar9 = local_1b8 == local_328;
        }
        else {
          bVar9 = false;
        }
        if ((local_318 & 1) != 0) {
          operator_delete(pbVar5);
        }
        if ((local_358 & 1) != 0) {
          operator_delete(pbVar5);
        }
        if ((local_370 & 1) != 0) {
          operator_delete(pbVar5);
        }
        bVar9 = (bool)(bVar9 ^ 1);
      }
    }
    if ((local_58 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if (((ulonglong)local_b0 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if (!bVar9) {
      iVar8 = 0;
      break;
    }
    FUN_009f58f0();
    pbVar5 = (byte *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),local_60);
    if ((local_140 == '\0') || (local_60 == '\0')) {
      bVar9 = local_140 == local_60;
    }
    else if (local_150 == local_70) {
      bVar9 = local_148 == local_68;
    }
    else {
      bVar9 = false;
    }
    if ((local_58 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if (((ulonglong)local_b0 & 1) != 0) {
      operator_delete(pbVar5);
    }
    iVar8 = 0;
    if (!bVar9) {
      local_34 = 0;
      pbVar6 = local_c0;
      if ((local_138 & 1) != 0) {
        pbVar6 = local_128;
      }
      cVar4 = FUN_009e94a0();
      iVar8 = local_34;
      if (cVar4 == '\0') {
        std::bad_cast::bad_cast(pbVar6);
        local_b0 = local_40;
        local_a8 = &PTR_vtable_02524770;
        local_a0 = PTR_typeinfo_024a9820;
        FUN_009af240();
        goto LAB_009d5ce6;
      }
      pbVar5 = local_e0;
      local_140 = FUN_009f5a30(local_e0,local_148);
    }
    FUN_009f58f0();
    pbVar5 = (byte *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),local_60);
    if ((local_1b0 == '\0') || (local_60 == '\0')) {
      bVar9 = local_1b0 == local_60;
    }
    else if (local_1c0 == local_70) {
      bVar9 = local_1b8 == local_68;
    }
    else {
      bVar9 = false;
    }
    if ((local_58 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(pbVar5);
    }
    if (((ulonglong)local_b0 & 1) != 0) {
      operator_delete(pbVar5);
    }
    iVar7 = 0;
    if (!bVar9) {
      local_38 = 0;
      pbVar6 = local_b8;
      if ((local_1a8 & 1) != 0) {
        pbVar6 = local_198;
      }
      cVar4 = FUN_009e94a0();
      iVar7 = local_38;
      if (cVar4 == '\0') {
        std::bad_cast::bad_cast(pbVar6);
        local_b0 = local_40;
        local_a8 = &PTR_vtable_02524770;
        local_a0 = PTR_typeinfo_024a9820;
        FUN_009af240();
LAB_009d5ce6:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pbVar5 = local_d0;
      local_1b0 = FUN_009f5a30(local_d0,local_1b8);
    }
    iVar8 = iVar8 - iVar7;
  } while (iVar8 == 0);
  if ((local_1a8 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_1e8 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_200 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_178 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_190 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_288 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_2a0 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_2d8 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_2f0 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_248 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_260 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_f8 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(pbVar5);
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
      LOCK();
      piVar2 = (int *)((longlong)local_118 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_118 + 0x18))();
      }
    }
  }
  return iVar8;
}


