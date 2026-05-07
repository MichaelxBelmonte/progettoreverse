// Function: FUN_006d0340
// Address: 006d0340
// Size: 1316 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x006d0628) */
/* WARNING: Removing unreachable block (ram,0x006d0634) */

void FUN_006d0340(void)

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  uVar5 = FUN_006d0b50();
  local_38 = local_a0;
  if ((local_98 == '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b00();
  }
  local_70 = 0;
  lVar4 = *(longlong *)(unaff_RDI + 0x168);
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar3 = DAT_02705b68;
  local_70 = '\x01';
  local_78 = lVar4;
  if (DAT_02705b68 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar4 = DAT_0270b8b0;
  local_f0 = lVar3;
  local_e8 = '\x01';
  if (DAT_0270b8b0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar4;
  local_d8 = '\x01';
  uVar5 = FUN_01e57260(uVar5,&local_e0);
  local_58 = local_a0;
  local_50 = 0;
  local_d0 = DAT_02726ca8;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      uVar5 = FUN_00d50b00();
      local_d0 = DAT_02726ca8;
    }
  }
  else {
    local_98 = '\0';
  }
  local_50 = '\x01';
  DAT_02726ca8 = local_d0;
  if (local_d0 != 0) {
    local_50 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_01e57260(uVar5,&local_d0);
  local_48 = local_b0;
  local_40 = 0;
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x130);
  }
  else {
    local_a8 = '\0';
    lVar4 = *(longlong *)(unaff_RDI + 0x130);
  }
  local_40 = '\x01';
  if (lVar4 != 0) {
    local_40 = '\x01';
    local_60 = 0;
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_68 = lVar4;
  FUN_000b75e0(DAT_02390124,&local_f0,&local_48,&local_68);
  lVar4 = local_38;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x130) == 0) {
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    if (*(longlong **)(unaff_RDI + 0xf8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x998))();
    }
    if (*(longlong **)(unaff_RDI + 0xf0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x998))();
    }
    if (*(int *)(local_38 + 0xc) == 0) {
      if (*(longlong **)(unaff_RDI + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x918))();
      }
      if (*(longlong **)(unaff_RDI + 0xf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x918))();
      }
    }
    else {
      local_98 = '\0';
      local_a0 = 0;
      local_90 = local_38;
      local_80 = 0;
      local_88 = 0;
      if (0 < *(int *)(local_38 + 0xc)) {
        lVar4 = 0;
        do {
          local_a0 = *(longlong *)(*(longlong *)(local_38 + 0x10) + lVar4 * 8);
          lVar3 = local_38;
          pvVar1 = _pthread_getspecific((pthread_key_t)local_38);
          pVar2 = (pthread_key_t)lVar3;
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7980();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f78f0();
          lVar4 = lVar4 + 1;
          local_88 = CONCAT44(local_88._4_4_,(int)lVar4);
        } while ((int)lVar4 < *(int *)(local_38 + 0xc));
      }
      FUN_006ddd30();
      if (*(longlong **)(unaff_RDI + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x918))();
      }
      if (*(longlong **)(unaff_RDI + 0xf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x918))();
      }
    }
  }
  FUN_00d50b20();
  return;
}


