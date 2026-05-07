// Function: FUN_017d0b30
// Address: 017d0b30
// Size: 687 bytes
// Class: GNList


undefined4 FUN_017d0b30(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if ((DAT_028af468 == 0) || (DAT_028af471 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af468 == 0) {
      lVar1 = *(longlong *)(unaff_RDI + 0x58);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      lVar2 = DAT_027d3878;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
        lVar2 = DAT_027d3878;
      }
      DAT_027d3878 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_018bf620();
      lVar6 = DAT_028af468;
      if (DAT_028af468 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
            lVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar6 = local_38;
        }
        param_1 = (pthread_key_t)DAT_028af468;
        bVar3 = DAT_028af468 != 0;
        DAT_028af468 = lVar6;
        if (bVar3) {
          FUN_00d50b20();
          lVar6 = local_38;
        }
      }
      if ((lVar6 != 0) && (DAT_028af470 == '\0')) {
        DAT_028af470 = '\x01';
        FUN_00e8cb90();
        lVar6 = local_38;
      }
      if ((local_30 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028af471 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af471 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  lVar2 = DAT_028af468;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar2 = DAT_028af468;
  }
  DAT_028af468 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_018bf930();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  uVar4 = FUN_00c71440();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar4;
}


