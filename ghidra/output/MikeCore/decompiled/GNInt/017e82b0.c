// Function: FUN_017e82b0
// Address: 017e82b0
// Size: 786 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017e8512) */

undefined8 FUN_017e82b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar5;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50 [32];
  
  if (*(int *)(unaff_RDI + 0x50) == 2) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ddb20();
    FUN_00d23310();
    lVar1 = local_58;
    local_50[0x18] = local_50[0];
    pcVar5 = local_50 + 0x18;
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = pcVar5;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_60 = lVar1;
    local_50[8] = local_50[0x18] != '\0';
    pcVar4 = local_50 + 8;
    if ((bool)local_50[8]) {
      pcVar4 = pcVar5;
    }
    *pcVar4 = '\0';
    if ((local_50[0x18] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    local_50[0x18] = '\0';
    local_50[0x10] = '\0';
    if (local_60 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e11f0();
      FUN_01543a70(0,FUN_017db4e0);
      lVar1 = local_58;
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      lVar2 = local_58;
      local_70 = local_50[0];
      pcVar4 = local_50;
      if (local_50[0] == '\0') {
        pcVar4 = &local_70;
      }
      *pcVar4 = '\0';
      if ((local_50[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        if (local_70 != '\0') {
          local_50[0x18] = '\x01';
          pcVar5 = &local_70;
        }
        *pcVar5 = '\0';
        if (local_70 != '\0') {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      local_70 = local_50[0];
      pcVar5 = local_50;
      if (local_50[0] == '\0') {
        pcVar5 = &local_70;
      }
      *pcVar5 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        if (local_70 == '\0') {
          local_50[0x10] = '\0';
        }
        else {
          local_50[0x10] = '\x01';
          local_70 = '\0';
        }
      }
      if ((*unaff_RSI != lVar2) && (*unaff_RSI != local_58)) {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_50[0x10] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0x18] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (local_50[8] != '\0') {
          FUN_00d50b20();
        }
        return 1;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0x10] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0x18] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_50[8] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  return 0;
}


