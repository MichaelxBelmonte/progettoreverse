// Function: FUN_01ba9470
// Address: 01ba9470
// Size: 769 bytes
// Class: MUElementPitchInspector


void FUN_01ba9470(void)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  (**(code **)(*unaff_RDI + 0x630))();
  lVar4 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01ba9593;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_01ba94d0:
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar4;
    local_40 = -1;
    iStack_3c = 0;
    iStack_38 = 0;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        local_60 = 0;
        (**(code **)(unaff_RDI[0x17] + 0x10))();
        FUN_00d50b00();
        local_60 = '\x01';
        local_98 = 0;
        local_90 = '\0';
        local_88 = 0;
        local_80 = '\0';
        local_68 = unaff_RDI + 0x17;
        FUN_00cbadd0(&local_88,&local_98);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          (**(code **)(*local_68 + 0x10))();
          FUN_00d50b20();
        }
        FUN_00d50b20();
        break;
      }
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
    }
    FUN_00083b20();
    bVar1 = false;
  }
  else {
    if (local_58 != 0) goto LAB_01ba94d0;
LAB_01ba9593:
    bVar1 = true;
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_01a13090();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x630))();
  if (lVar4 != local_58) {
    lVar4 = local_58;
    if (local_50 != '\0') {
      if (!bVar1) {
        FUN_00d50b20();
      }
      goto LAB_01ba96f4;
    }
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01ba96f4:
  if (lVar4 != 0) {
    local_50 = 0;
    local_58 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    local_48 = lVar4;
    for (lVar3 = 0; local_40 = (int)lVar3, local_40 < *(int *)(lVar4 + 0xc); lVar3 = lVar3 + 1) {
      local_58 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + lVar3 * 8);
      FUN_01ba91a0();
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  return;
}


