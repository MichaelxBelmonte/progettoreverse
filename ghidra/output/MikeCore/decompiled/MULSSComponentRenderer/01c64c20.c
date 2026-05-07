// Function: FUN_01c64c20
// Address: 01c64c20
// Size: 1055 bytes
// Class: MULSSComponentRenderer


void FUN_01c64c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  longlong unaff_RDI;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 local_90 [8];
  undefined1 local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  double local_60;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x2b0) == 0) {
    uVar7 = FUN_01c44d20(param_1,param_2,param_3,param_4,0);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = 1;
    FUN_01c44700(uVar7,local_90);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = param_2;
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar5 = &DAT_02572358;
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    lVar2 = *(longlong *)(unaff_RDI + 0x2b0);
    local_58 = puVar1;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar6 = 0;
      do {
        pVar4 = (pthread_key_t)puVar5;
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar6 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = lVar2;
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_60 = *(double *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x2b8) + 0x10) + lVar6 * 8);
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_01507970();
        dVar8 = (double)FUN_016c98e0(uVar7,0);
        if ((local_60 != dVar8) || (NAN(local_60) || NAN(dVar8))) {
LAB_01c64f29:
          puVar1 = local_58;
          local_40 = local_48;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = *(double *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x2c0) + 0x10) + lVar6 * 8)
          ;
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01508610();
          dVar8 = (double)FUN_016c98e0(uVar7,0);
          if ((local_60 != dVar8) || (puVar1 = local_58, NAN(local_60) || NAN(dVar8)))
          goto LAB_01c64f29;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        lVar2 = *(longlong *)(unaff_RDI + 0x2b0);
        puVar5 = (undefined *)(longlong)*(int *)(lVar2 + 0xc);
      } while (lVar6 < (longlong)puVar5);
    }
    local_68 = '\0';
    local_70 = puVar1;
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


