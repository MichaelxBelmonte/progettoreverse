// Function: FUN_0173ef00
// Address: 0173ef00
// Size: 592 bytes
// Class: MUScalePitchSystem


void FUN_0173ef00(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined *puVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01738240();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = puVar3;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(unaff_RSI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
    local_58 = 0;
    while( true ) {
      pVar7 = (pthread_key_t)puVar6;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01738240();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_00e7bdb0();
      puVar6 = (undefined *)FUN_00e7bdb0();
      cVar2 = FUN_01252960(puVar6,uVar5,&local_58,0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') break;
      if (local_58 != 0) {
        local_40 = local_58;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


