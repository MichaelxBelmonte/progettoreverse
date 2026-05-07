// Function: FUN_01941d40
// Address: 01941d40
// Size: 560 bytes
// Class: Unknown


undefined4 FUN_01941d40(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong unaff_RDI;
  undefined4 uVar4;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x540) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_012e6160();
    lVar2 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != 0) && (uVar4 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_68 = 0;
      local_70 = 0;
      local_60 = lVar2;
      local_50 = 0;
      local_58 = 0;
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar1 < 1) {
        FUN_000be170();
      }
      else {
        local_90 = **(undefined8 **)(lVar2 + 0x10);
        local_88 = 0;
        local_70 = local_90;
        FUN_01941c70(uVar4,&local_90);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_44 = FUN_012c6a80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        FUN_000be170();
      }
      FUN_00d50b20();
      if (0 < iVar1) {
        return local_44;
      }
    }
  }
  return 0;
}


