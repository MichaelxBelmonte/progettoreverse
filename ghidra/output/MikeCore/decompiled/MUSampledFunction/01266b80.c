// Function: FUN_01266b80
// Address: 01266b80
// Size: 807 bytes
// Class: MUSampledFunction


longlong * FUN_01266b80(longlong param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  longlong lVar11;
  double dVar12;
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
  lVar6 = local_58;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    lVar6 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
  }
  local_68 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00d23310();
  uVar8 = (undefined7)((ulonglong)uVar5 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (undefined4)CONCAT71(uVar8,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0xc) < 2) {
    uVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = 1;
    lVar4 = 0;
    uVar10 = 0;
    do {
      pVar9 = (pthread_key_t)param_1;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8);
      if (lVar4 == lVar6) {
        if (((char)uVar10 == '\0') && (lVar4 != 0)) {
          uVar10 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar10 == '\0') || (lVar4 == 0)) {
          uVar10 = 1;
          lVar4 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar10 = 1;
          lVar4 = lVar6;
        }
      }
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar12 = *(double *)(lVar4 + 0xe8) + *(double *)(lVar4 + 0xf0);
      }
      else {
        lVar6 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar12 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      lVar6 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar12) {
        pvVar3 = _pthread_getspecific(pVar9);
        lVar7 = lVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar7 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        local_68 = *(double *)(lVar7 + 0xe8) + *(double *)(lVar7 + 0xf0);
        if (local_48 == lVar4) {
          lVar6 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar10 != '\0') && ((char)local_3c == '\0')) && (lVar4 != 0)) {
            local_3c = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
            FUN_00d50b00();
            lVar6 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar10 != '\0') && (lVar4 != 0)) {
            FUN_00d50b00();
          }
          lVar6 = lVar4;
          uVar1 = uVar10;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar6;
      lVar11 = lVar11 + 1;
      lVar6 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar6 + 0xc);
    } while (lVar11 < param_1);
  }
  lVar6 = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar10 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


