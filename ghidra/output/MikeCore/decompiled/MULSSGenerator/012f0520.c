// Function: FUN_012f0520
// Address: 012f0520
// Size: 761 bytes
// Class: MULSSGenerator


longlong * FUN_012f0520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *in_RCX;
  longlong *plVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  plVar6 = in_RCX;
  if (*in_RCX == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    puVar1 = (undefined8 *)*in_RCX;
    if (puVar1 == puVar4) {
      if ((char)in_RCX[1] != '\0') {
        FUN_00d50b20();
        goto LAB_012f05c0;
      }
    }
    else {
      *in_RCX = (longlong)puVar4;
      if (((char)in_RCX[1] != '\0') && (puVar1 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(in_RCX + 1) = 1;
  }
LAB_012f05c0:
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  FUN_0190a130();
  lVar3 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  FUN_0190a380(param_1,param_2,param_3);
  local_70 = '\0';
  local_78 = lVar3;
  FUN_00d21140();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(longlong *)(unaff_RSI + 0xa8);
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar2;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_78 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)plVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = *in_RCX;
        local_80 = '\0';
        plVar6 = &local_88;
        FUN_012f0520(param_1,param_2,param_3);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar2 = *in_RCX;
  if ((char)in_RCX[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(in_RCX + 1) = 0;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


