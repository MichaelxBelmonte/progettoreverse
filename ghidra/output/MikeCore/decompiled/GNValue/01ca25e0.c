// Function: FUN_01ca25e0
// Address: 01ca25e0
// Size: 742 bytes
// Class: GNValue


longlong * FUN_01ca25e0(longlong param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar5;
  pthread_key_t pVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  double extraout_XMM0_Qa;
  double local_68;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = (double)FUN_012646c0();
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d23310();
  uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar6 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (undefined4)CONCAT71(uVar6,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar5 = *unaff_RSI;
  if (*(int *)(lVar5 + 0xc) < 2) {
    uVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar10 = 1;
    lVar8 = 0;
    uVar9 = 0;
    do {
      pVar7 = (pthread_key_t)param_1;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar10 * 8);
      if (lVar8 == lVar5) {
        if (((char)uVar9 == '\0') && (lVar8 != 0)) {
          uVar9 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar9 == '\0') || (lVar8 == 0)) {
          uVar9 = 1;
          lVar8 = lVar5;
        }
        else {
          FUN_00d50b20();
          uVar9 = 1;
          lVar8 = lVar5;
        }
      }
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_012646c0();
      lVar5 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar11) {
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012646c0();
        local_68 = extraout_XMM0_Qa;
        if (local_48 == lVar8) {
          lVar5 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar9 != '\0') && ((char)local_3c == '\0')) && (lVar8 != 0)) {
            local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            FUN_00d50b00();
            lVar5 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar9 != '\0') && (lVar8 != 0)) {
            FUN_00d50b00();
          }
          lVar5 = lVar8;
          uVar1 = uVar9;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar5;
      lVar10 = lVar10 + 1;
      lVar5 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar10 < param_1);
  }
  lVar5 = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar9 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


