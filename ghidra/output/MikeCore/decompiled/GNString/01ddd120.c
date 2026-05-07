// Function: FUN_01ddd120
// Address: 01ddd120
// Size: 2037 bytes
// Class: GNString


void FUN_01ddd120(undefined8 param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
  char cVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *unaff_RSI;
  ulonglong uVar14;
  longlong *unaff_RDI;
  float extraout_XMM0_Db;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_100;
  undefined1 local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_40;
  char local_38;
  
  if ((int)unaff_RDI[0x29] != -1) {
    local_f8 = 0;
    local_100 = 0;
    FUN_01dd96d0(param_1,&local_100);
  }
  if (unaff_RDI[0x40] != 0) {
    FUN_01ddeb40();
  }
  if (*unaff_RSI != 0) {
    FUN_01d3abf0();
    FUN_01e466c0();
    if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
      param_2 = extraout_XMM0_Db /
                (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
      iVar13 = -1;
      if ((0.0 <= param_2) && (param_2 < (float)(int)unaff_RDI[0x30])) {
        iVar13 = (int)param_2;
      }
    }
    else {
      iVar13 = -1;
      param_2 = extraout_XMM0_Db;
      if ((0.0 <= extraout_XMM0_Db) && (lVar3 = unaff_RDI[0x52], lVar3 != 0)) {
        iVar2 = *(int *)(lVar3 + 0x18);
        iVar11 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar11 = iVar2;
        }
        uVar14 = 0;
        uVar12 = (ulonglong)(uint)(iVar11 >> 2);
        if (iVar11 >> 2 < 1) {
          uVar12 = uVar14;
        }
        do {
          if (uVar12 == uVar14) goto LAB_01ddd23a;
          lVar1 = uVar14 * 4;
          uVar14 = uVar14 + 1;
        } while (*(float *)(*(longlong *)(lVar3 + 0x10) + lVar1) <= extraout_XMM0_Db);
        iVar13 = (int)uVar14 + -1;
      }
    }
LAB_01ddd23a:
    *(int *)(unaff_RDI + 0x41) = iVar13;
    uVar9 = FUN_01dd3800();
    *(undefined4 *)((longlong)unaff_RDI + 0x20c) = uVar9;
  }
  if ((int)unaff_RDI[0x41] == -1) {
    return;
  }
  if (*(int *)((longlong)unaff_RDI + 0x20c) != -1) {
    plVar4 = (longlong *)unaff_RDI[0x3e];
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
      lVar3 = unaff_RDI[0x41];
      local_e0 = *(longlong *)
                  (*(longlong *)(unaff_RDI[0x2c] + 0x10) +
                  (longlong)*(int *)((longlong)unaff_RDI + 0x20c) * 8);
      if (local_e0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = '\x01';
      cVar8 = (**(code **)(*plVar4 + 0x38))(&local_e0,(int)lVar3);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') {
        unaff_RDI[0x41] = -1;
        return;
      }
      if ((int)unaff_RDI[0x41] == -1) {
        return;
      }
    }
    if ((longlong)*(int *)((longlong)unaff_RDI + 0x20c) != -1) {
      lVar3 = *(longlong *)
               (*(longlong *)(unaff_RDI[0x2c] + 0x10) +
               (longlong)*(int *)((longlong)unaff_RDI + 0x20c) * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x958))();
      uVar15 = FUN_00d05530();
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(puVar10 + 0x27) = 0;
      puVar10[0x2e] = 0;
      *(undefined4 *)(puVar10 + 0x2f) = 0;
      puVar10[0x30] = 0;
      *(undefined1 *)(puVar10 + 0x31) = 0;
      puVar10[0x28] = 0;
      puVar10[0x29] = 0;
      *(undefined4 *)(puVar10 + 0x2a) = 0;
      puVar10[0x2b] = 0;
      puVar10[0x2c] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x165) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x18c) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x194) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x199) = 0;
      puVar10[0x35] = 0;
      puVar10[0x36] = 0;
      puVar10[0x37] = 0;
      puVar10[0x38] = 0;
      *puVar10 = &DAT_0269c118;
      puVar10[2] = &DAT_0269cc70;
      puVar10[0x39] = &DAT_0269ccb0;
      puVar10[0x45] = 0;
      *(undefined2 *)(puVar10 + 0x46) = 0;
      puVar10[0x47] = 0;
      puVar10[0x3a] = 0;
      puVar10[0x3b] = 0;
      *(undefined4 *)(puVar10 + 0x3c) = 0;
      puVar10[0x3f] = 0;
      puVar10[0x40] = 0;
      puVar10[0x3d] = 0;
      puVar10[0x3e] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x205) = 0;
      puVar10[0x42] = 0;
      puVar10[0x43] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x21d) = 0;
      (*DAT_0269c130)();
      puVar5 = (undefined8 *)unaff_RDI[0x40];
      if (puVar5 == puVar10) {
        FUN_00d50b20();
      }
      else {
        unaff_RDI[0x40] = (longlong)puVar10;
        if (puVar5 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_01db9fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_01db9fb0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e058f0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      plVar4 = (longlong *)unaff_RDI[0x40];
      (**(code **)(*unaff_RDI + 0xa08))
                (*(undefined4 *)((longlong)unaff_RDI + 0x20c),(int)unaff_RDI[0x41]);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar4 + 0x978))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar7._0_8_ = uVar15;
      fVar6 = (float)((ulonglong)uVar15 >> 0x20);
      uVar9 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar16._4_12_ = auVar7._4_12_;
      auVar16._0_4_ = (float)uVar15 + DAT_02390124;
      auVar17._4_4_ = fVar6;
      auVar17._0_4_ = fVar6 + DAT_02390124;
      auVar17._8_4_ = uVar9;
      auVar17._12_4_ = uVar9;
      auVar17 = insertps(auVar16,auVar17,0x10);
      (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x4d0))(auVar17._0_8_,param_2);
      local_d0 = DAT_027f2a30;
      plVar4 = (longlong *)unaff_RDI[0x40];
      if (DAT_027f2a30 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      (**(code **)(*plVar4 + 0xa10))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      plVar4 = (longlong *)unaff_RDI[0x40];
      FUN_00d50b00();
      (**(code **)(*plVar4 + 0xa20))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_01e073f0();
      plVar4 = (longlong *)unaff_RDI[0x40];
      FUN_01db9a00();
      (**(code **)(*local_f0 + 0x9e8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar4 + 0x9d8))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x3a0))();
      FUN_01dce9c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01e07460();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_a8 = 0;
      lVar1 = unaff_RDI[0x40];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01dcf710();
      (**(code **)(*unaff_RDI + 0x618))();
      local_b8 = '\0';
      local_c0 = 0;
      (**(code **)(*(longlong *)unaff_RDI[0x40] + 0xac0))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    return;
  }
  return;
}


