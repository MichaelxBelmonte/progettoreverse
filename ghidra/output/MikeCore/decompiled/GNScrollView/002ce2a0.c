// Function: FUN_002ce2a0
// Address: 002ce2a0
// Size: 756 bytes
// Class: GNScrollView


ulonglong FUN_002ce2a0(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  longlong *plVar6;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    goto LAB_002ce5a6;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x3f8))();
  iVar5 = *(int *)(local_58 + 0xc);
  plVar6 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),0 < iVar5);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar5 < 1)) goto LAB_002ce5a6;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_002cd3f0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002ce360;
    }
  }
  else if (local_58 != 0) {
LAB_002ce360:
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    plVar6 = &local_98;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          iVar5 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar2 = (longlong)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar2 * 8);
      local_58 = lVar2;
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        plVar4 = *(longlong **)(lVar2 + 0x10);
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        if (pvVar3 != (void *)0x0) {
          plVar4 = *(longlong **)(lVar2 + 0x10);
          lVar2 = FUN_00e8b990();
          if (lVar2 != 0) {
            plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x478))();
      }
      else {
        FUN_00b88600();
      }
      lVar2 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_98 = lVar2;
      local_90 = '\0';
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  local_78 = DAT_026fcec0;
  local_80 = '\0';
  local_88 = puVar1;
  if (DAT_026fcec0 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_01cac7f0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002ce5a6:
  return (ulonglong)plVar6 & 0xffffffff;
}


