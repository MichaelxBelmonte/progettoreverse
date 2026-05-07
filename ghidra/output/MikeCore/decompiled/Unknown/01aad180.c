// Function: FUN_01aad180
// Address: 01aad180
// Size: 1276 bytes
// Class: Unknown


void FUN_01aad180(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((((unaff_RDI[9] != 0) && (unaff_RDI[8] != 0)) && ((longlong *)unaff_RDI[5] != (longlong *)0x0)
      ) && ((cVar3 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x18))(), cVar3 != '\0' &&
            (unaff_RDI[3] == 0)))) {
    FUN_01f27fe0();
    plVar9 = local_50;
    local_b0 = DAT_027e3048;
    if (DAT_027e3048 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_68 = 0;
    lVar1 = unaff_RDI[9];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    plVar8 = &local_70;
    local_70 = lVar1;
    (**(code **)(*plVar9 + 0x5f0))(plVar8,&local_b0);
    lVar1 = local_40;
    pVar7 = (pthread_key_t)plVar8;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = lVar1;
    local_98 = '\0';
    (**(code **)(*unaff_RDI + 0x368))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[3] != 0) {
      cVar3 = FUN_01aa96d0();
      if (cVar3 == '\0') {
        FUN_01aa83e0();
      }
      else {
        FUN_01aa85c0(0,unaff_ESI);
        lVar2 = local_40;
        lVar5 = unaff_RDI[0xc];
        if (lVar5 == local_40) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
            lVar5 = unaff_RDI[0xc];
          }
          unaff_RDI[0xc] = lVar2;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_01aa85c0(0,param_2);
        lVar2 = local_40;
        lVar5 = unaff_RDI[0xd];
        if (lVar5 == local_40) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
            lVar5 = unaff_RDI[0xd];
          }
          unaff_RDI[0xd] = lVar2;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        plVar9 = (longlong *)unaff_RDI[8];
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          plVar9 = (longlong *)unaff_RDI[8];
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3a0))();
        FUN_01aad930();
        plVar9 = (longlong *)unaff_RDI[8];
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          plVar9 = (longlong *)unaff_RDI[8];
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3a0))();
        FUN_01aada00();
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar7 = 0x25e2bf8;
        *puVar6 = &DAT_025e2bf8;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        (*DAT_025e2c10)();
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c150((int)DAT_0238fee8);
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c160((int)DAT_0238fee8);
        FUN_012d25b0();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_0141c6e0((int)DAT_023934c8);
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_88 = '\0';
        local_90 = puVar6;
        FUN_0141c900();
        if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_80 = lVar5;
        local_78 = '\0';
        (**(code **)(*(longlong *)unaff_RDI[3] + 0x690))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


