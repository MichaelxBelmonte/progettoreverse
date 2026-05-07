// Function: FUN_003726c0
// Address: 003726c0
// Size: 1948 bytes
// Class: MDFileBrowserInsp


/* WARNING: Removing unreachable block (ram,0x003726fd) */
/* WARNING: Removing unreachable block (ram,0x00372709) */
/* WARNING: Removing unreachable block (ram,0x00372c18) */
/* WARNING: Removing unreachable block (ram,0x00372c24) */

void FUN_003726c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_01c33af0();
  pplVar6 = &local_40;
  (**(code **)(*unaff_RDI + 0xae0))();
  plVar5 = local_40;
  FUN_0038aac0();
  if (plVar5 == (longlong *)0x0) {
LAB_0037274e:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0037274e;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) goto LAB_00372d22;
  pplVar6 = &local_40;
  FUN_01c19440();
  plVar5 = local_40;
  FUN_0038ad10();
  if (plVar5 == (longlong *)0x0) {
LAB_003727cb:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_003727cb;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    bVar2 = false;
    plVar5 = (longlong *)0x0;
  }
  else {
    FUN_01c19c80();
    FUN_01c19d80();
    if (*(int *)(local_130 + 0xc) == 0) {
      cVar4 = '\0';
    }
    else {
      FUN_01c19c80();
      FUN_01c19d80();
      local_38 = '\0';
      local_40 = plVar5;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        FUN_01c0b7c0();
        plVar5 = local_40;
        FUN_01c0a900();
        local_60 = local_80;
        local_58 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_58 = '\x01';
        cVar4 = (**(code **)(*plVar5 + 0x50))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02703f90;
    if (cVar4 == '\0') {
      bVar2 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      if (DAT_02703f90 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        bVar2 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar5 != (longlong *)0x0) {
    if (unaff_RDI[0x40] == 0) {
      uVar7 = FUN_01e3f820();
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(plVar5 + 0x27) = 0;
      plVar5[0x2e] = 0;
      *(undefined4 *)(plVar5 + 0x2f) = 0;
      plVar5[0x30] = 0;
      *(undefined1 *)(plVar5 + 0x31) = 0;
      plVar5[0x28] = 0;
      plVar5[0x29] = 0;
      *(undefined4 *)(plVar5 + 0x2a) = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2c] = 0;
      *(undefined8 *)((longlong)plVar5 + 0x165) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x199) = 0;
      plVar5[0x35] = 0;
      plVar5[0x36] = 0;
      plVar5[0x37] = 0;
      plVar5[0x38] = 0;
      *plVar5 = (longlong)&DAT_02677e10;
      plVar5[2] = (longlong)&DAT_026788e8;
      plVar5[0x39] = (longlong)&DAT_02678928;
      *(undefined4 *)((longlong)plVar5 + 500) = 0;
      *(undefined1 *)(plVar5 + 0x3f) = 0;
      plVar5[0x43] = 0;
      plVar5[0x3c] = 0;
      plVar5[0x3d] = 0;
      plVar5[0x3a] = 0;
      plVar5[0x3b] = 0;
      *(undefined1 *)(plVar5 + 0x3e) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x1fc) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x204) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x20c) = 0;
      (*DAT_02677e28)();
      lVar1 = unaff_RDI[0x40];
      unaff_RDI[0x40] = (longlong)plVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar5 = (longlong *)unaff_RDI[0x40];
      }
      auVar8._0_4_ = fVar10 - fVar11;
      auVar8._4_4_ = fVar11 - fVar11;
      auVar8._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
      auVar8._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
      auVar9._8_8_ = extraout_XMM0_Qb;
      auVar9._0_8_ = uVar7;
      auVar9 = blendps(auVar8,auVar9,2);
      (**(code **)(*plVar5 + 0x4d0))(auVar9._0_8_);
      FUN_01cef490();
      (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x558))();
      FUN_01cef3b0();
      FUN_01e3b6a0();
      lVar1 = DAT_02725a10;
      plVar5 = (longlong *)unaff_RDI[0x40];
      if (DAT_02725a10 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0xa10))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02703fa0;
      plVar5 = (longlong *)unaff_RDI[0x40];
      if (DAT_02703fa0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02703fa8;
      if (DAT_02703fa8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      local_90 = 0;
      local_88 = '\0';
      FUN_00d31230(&local_90,&local_a0);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar5 + 0x6a8))();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_68 = 0;
      lVar1 = unaff_RDI[0x40];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar1;
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar2) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_00372d22:
  if (((longlong *)unaff_RDI[0x40] != (longlong *)0x0) &&
     ((**(code **)(*(longlong *)unaff_RDI[0x40] + 0x478))(), unaff_RDI[0x40] != 0)) {
    unaff_RDI[0x40] = 0;
    FUN_00d50b20();
  }
  return;
}


