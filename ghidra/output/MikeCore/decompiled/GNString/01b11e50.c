// Function: FUN_01b11e50
// Address: 01b11e50
// Size: 1683 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01b12088) */
/* WARNING: Removing unreachable block (ram,0x01b12094) */

uint FUN_01b11e50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  char in_DL;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar10;
  undefined4 uVar11;
  undefined1 auVar9 [16];
  float fVar12;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_a0;
  char local_98;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  FUN_01a1d6e0();
  if (local_40 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_01a1d6e0();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_100 + 0x20))();
    if (local_110 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      FUN_01a1d6e0();
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *local_e0 + 0x20))();
      uVar5 = (**(code **)(*local_f0 + 0x18))();
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 ^ 1;
    }
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (in_DL != '\x01' || (char)uVar5 != '\0') goto LAB_01b12234;
  FUN_01b06a50();
  cVar4 = FUN_01aa7eb0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01b06a50();
    FUN_01aa8280();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01b12234;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_01b12234;
  FUN_01b06a50();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b1205e;
    }
  }
  else if (local_40 != 0) {
LAB_01b1205e:
    FUN_01aa8370();
    FUN_01aaa300();
    if (*(longlong *)(unaff_RDI + 0x2e8) == 0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(puVar6 + 0x27) = 0;
      puVar6[0x2e] = 0;
      *(undefined4 *)(puVar6 + 0x2f) = 0;
      puVar6[0x30] = 0;
      *(undefined1 *)(puVar6 + 0x31) = 0;
      puVar6[0x28] = 0;
      puVar6[0x29] = 0;
      *(undefined4 *)(puVar6 + 0x2a) = 0;
      puVar6[0x2b] = 0;
      puVar6[0x2c] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x165) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x18c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x199) = 0;
      puVar6[0x35] = 0;
      puVar6[0x36] = 0;
      puVar6[0x37] = 0;
      puVar6[0x38] = 0;
      *(undefined4 *)((longlong)puVar6 + 500) = 0;
      *(undefined1 *)(puVar6 + 0x3f) = 0;
      puVar6[0x43] = 0;
      puVar6[0x3c] = 0;
      puVar6[0x3d] = 0;
      puVar6[0x3a] = 0;
      puVar6[0x3b] = 0;
      *(undefined1 *)(puVar6 + 0x3e) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1fc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x204) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x20c) = 0;
      *puVar6 = &DAT_0263cf60;
      puVar6[2] = &DAT_0263da38;
      puVar6[0x39] = &DAT_0263da78;
      (*DAT_0263cf78)();
      puVar3 = *(undefined8 **)(unaff_RDI + 0x2e8);
      if (puVar3 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x2e8) = puVar6;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_01cef4c0();
      plVar1 = *(longlong **)(unaff_RDI + 0x2e8);
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0xa20))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e3cc0;
      plVar1 = *(longlong **)(unaff_RDI + 0x2e8);
      if (DAT_027e3cc0 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0xa10))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e3cc8;
      if (DAT_027e3cc8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01cef3b0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    auVar8._0_8_ = FUN_01e3f820();
    auVar8._8_8_ = extraout_XMM0_Qb;
    fVar10 = (float)((ulonglong)auVar8._0_8_ >> 0x20);
    uVar11 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar10 + DAT_02390124;
    auVar9._8_4_ = uVar11;
    auVar9._12_4_ = uVar11;
    auVar9 = insertps(auVar8,auVar9,0x10);
    (**(code **)(**(longlong **)(unaff_RDI + 0x2e8) + 0x4d0))(auVar9._0_8_,fVar12 + DAT_023b1608);
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      plVar1 = *(longlong **)(unaff_RDI + 0x240);
      lVar2 = *(longlong *)(unaff_RDI + 0x2e8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x450))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 0x2d0) = 1;
    FUN_01f27fe0();
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    uVar7 = FUN_00d50b00();
    local_a0 = 0;
    local_98 = '\0';
    FUN_01f47190(uVar7,&local_a0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((longlong *)(unaff_RDI + 0x168) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b12234:
  return uVar5 ^ 1;
}


