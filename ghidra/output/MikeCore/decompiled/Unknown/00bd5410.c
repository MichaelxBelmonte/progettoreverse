// Function: FUN_00bd5410
// Address: 00bd5410
// Size: 813 bytes
// Class: Unknown


void FUN_00bd5410(ulonglong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  void *pvVar8;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  longlong local_40;
  char local_38 [8];
  
  uVar6 = param_1;
  uVar7 = param_3;
  local_48 = param_2;
  FUN_00b31a00();
  pvVar4 = (void *)CONCAT71((int7)(uVar6 >> 8),local_50[0]);
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_40 = local_58;
  cVar2 = FUN_00bc4810();
  if (cVar2 == '\0') {
    *(undefined2 *)((longlong)unaff_RDI + 0x4a) = 0;
    unaff_RDI[10] = -0x8000000000000000;
    FUN_00bc4890();
  }
  else {
    cVar2 = FUN_00bc47c0();
    if (cVar2 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_00bc4780();
    }
    cVar2 = FUN_00bc4910();
    if (cVar2 == '\0') {
      if (*(char *)((longlong)unaff_RDI + 0x4a) == '\0') {
        if (lVar3 == 0) {
          if (unaff_RDI[10] != -0x8000000000000000) {
            FUN_00bc4830();
          }
        }
        else if (*(char *)((longlong)unaff_RDI + 0x4b) == '\0') {
          *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 1;
          *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
          goto joined_r0x00bd5536;
        }
      }
      *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
    }
    else {
      if (*(char *)((longlong)unaff_RDI + 0x4b) != '\0') {
        lVar1 = unaff_RDI[10];
        pvVar4 = (void *)0x8000000000000000;
        if ((lVar1 != -0x8000000000000000) &&
           ((pvVar4 = (void *)(lVar1 + -0x10), lVar3 < (longlong)pvVar4 || (lVar1 + 0x10 < lVar3))))
        {
          (**(code **)(*unaff_RDI + 0x4e0))();
        }
      }
      unaff_RDI[10] = lVar3 + (int)param_1;
      *(char *)((longlong)unaff_RDI + 0x4b) = cVar2;
    }
  }
joined_r0x00bd5536:
  if (((DAT_02802510 == '\0') || (unaff_RDI[6] != 0)) || (cVar2 = FUN_00bc4910(), cVar2 != '\0')) {
    FUN_00bce3f0();
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_00b332c0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[5] + 0x5b0))();
    if ((local_48 == 0) ||
       ((cVar2 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x5a8))(), cVar2 != '\0' &&
        (cVar2 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x598))(), cVar2 == '\0')))) {
      if ((0 < (int)param_3) && ((unaff_RSI != 0 && (local_48 != 0)))) {
        pvVar8 = (void *)((longlong)(int)param_1 << 2);
        if (param_3 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            if ((*(longlong *)(unaff_RSI + uVar6 * 8) != 0) &&
               (*(longlong *)(local_48 + uVar6 * 8) != 0)) {
              _memcpy(pvVar4,pvVar8,uVar7);
            }
            if ((*(longlong *)(unaff_RSI + 8 + uVar6 * 8) != 0) &&
               (*(longlong *)(local_48 + 8 + uVar6 * 8) != 0)) {
              _memcpy(pvVar4,pvVar8,uVar7);
            }
            uVar6 = uVar6 + 2;
          } while ((param_3 & 0xfffffffe) != uVar6);
        }
        if ((((param_3 & 1) != 0) && (*(longlong *)(unaff_RSI + uVar6 * 8) != 0)) &&
           (*(longlong *)(local_48 + uVar6 * 8) != 0)) {
          _memcpy(pvVar4,pvVar8,uVar7);
        }
      }
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[5] + 0x400))(param_1 & 0xffffffff,local_48);
    }
    FUN_00bce420();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


