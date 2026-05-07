// Function: FUN_01b70bd0
// Address: 01b70bd0
// Size: 768 bytes
// Class: MUSpectrumShaper


undefined8 * FUN_01b70bd0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_40 = param_2;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = (undefined8 *)&DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_38 = puVar3;
  (*DAT_02572370)();
  cVar2 = (**(code **)(*unaff_RSI + 0x9d0))();
  if (cVar2 != '\0') {
    local_54 = 0xffffffff;
    local_68 = '\0';
    local_70 = 0;
    local_60 = (undefined8 *)FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    if (local_40 != (undefined8 *)0x0) {
      uVar5 = FUN_00e7bdb0();
      *local_40 = uVar5;
      puVar7 = local_40;
    }
    if (param_1 == (undefined8 *)0x0) {
      while( true ) {
        pVar8 = (pthread_key_t)puVar7;
        lVar1 = unaff_RSI[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = (**(code **)(*unaff_RSI + 0x9d8))();
        puVar7 = (undefined8 *)(**(code **)(*unaff_RSI + 0x9e0))();
        cVar2 = FUN_01252960(puVar7,uVar4,&local_70,&local_60);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') break;
        if (local_70 != 0) {
          puVar7 = local_38;
          if ((*(int *)((longlong)local_38 + 0xc) == 0) && (local_40 != (undefined8 *)0x0)) {
            *local_40 = local_60;
            puVar7 = local_60;
          }
          local_50 = local_70;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      uVar5 = FUN_00e7bdb0();
      *param_1 = uVar5;
      puVar7 = param_1;
      while( true ) {
        pVar8 = (pthread_key_t)puVar7;
        lVar1 = unaff_RSI[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = (**(code **)(*unaff_RSI + 0x9d8))();
        puVar7 = (undefined8 *)(**(code **)(*unaff_RSI + 0x9e0))();
        cVar2 = FUN_01252960(puVar7,uVar5,&local_70,&local_60);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') break;
        if (local_70 != 0) {
          if ((*(int *)((longlong)local_38 + 0xc) == 0) && (local_40 != (undefined8 *)0x0)) {
            *local_40 = local_60;
          }
          local_50 = local_70;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          *param_1 = uVar4;
          puVar7 = param_1;
        }
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


