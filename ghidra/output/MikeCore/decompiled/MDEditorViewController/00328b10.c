// Function: FUN_00328b10
// Address: 00328b10
// Size: 1489 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x00328e2a) */
/* WARNING: Removing unreachable block (ram,0x00328e36) */
/* WARNING: Removing unreachable block (ram,0x00328bc6) */
/* WARNING: Removing unreachable block (ram,0x00328bd6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00328b10(undefined8 param_1,float *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 local_d8;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined8 uStack_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  cVar7 = (**(code **)(*unaff_RDI + 0xa40))();
  if (cVar7 == '\0') {
    FUN_01a36f10(extraout_XMM0_Qa,param_2);
    return;
  }
  fVar3 = *param_2;
  fVar4 = param_2[2];
  lVar12 = unaff_RDI[0x23];
  FUN_01cfc9f0();
  local_68 = local_58;
  local_60 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  FUN_01d488d0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e710();
  lVar6 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*unaff_RDI + 0xa58))();
  lVar9 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00328f3b;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_00328f3b;
  auVar17 = ZEXT416((uint)((float)((uint)(fVar3 + DAT_02390d00) & _DAT_023945e0 | DAT_02394dc8) +
                          fVar3 + DAT_02390d00));
  auVar17 = roundss(auVar17,auVar17,0xb);
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar19 = blendps(auVar19,auVar17,1);
  auVar17 = ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(fVar4 + DAT_02390d34) | DAT_02394dc8) +
                          fVar4 + DAT_02390d34));
  auVar17 = roundss(auVar17,auVar17,0xb);
  insertps(auVar17,(int)lVar12,0x10);
  local_50 = '\0';
  local_58 = 0;
  local_48 = lVar9;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar9 = (longlong)(int)local_40;
    iVar14 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar14);
    if (*(int *)(local_48 + 0xc) <= iVar14) break;
    local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar9 * 8);
    cVar7 = (**(code **)(*unaff_RDI + 0xa60))(*(longlong *)(local_48 + 0x10),&local_78);
    if (cVar7 == '\0') {
LAB_00328da0:
    }
    else {
      local_78 = local_78 & 0xffffffff;
      uStack_70 = CONCAT44((int)lVar12,(undefined4)uStack_70);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uStack_70;
      local_d8 = auVar19._0_4_;
      uVar13 = FUN_00d05360(local_78,uStack_70,local_d8);
      uStack_70 = auVar17._0_8_;
      local_78 = uVar13;
      if (auVar17._0_4_ <= DAT_0239424c) goto LAB_00328da0;
      if (lVar6 == 0) {
LAB_00328d70:
        iVar14 = *(int *)(lVar6 + 0x18);
        FUN_00c8e340(uVar13,1);
        puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar14);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        goto LAB_00328da0;
      }
      iVar14 = -1;
      lVar9 = 0;
      do {
        iVar14 = iVar14 + 1;
        iVar8 = *(int *)(lVar6 + 0x18);
        iVar10 = iVar8 + 0xf;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar10 >> 4 <= iVar14) goto LAB_00328d70;
        uVar13 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar9);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar13;
        cVar7 = FUN_00d054a0(iVar10 >> 4,uVar13,(int)local_78,uStack_70);
        lVar9 = lVar9 + 0x10;
        uVar13 = extraout_XMM0_Qa_00;
      } while (cVar7 == '\0');
      uVar16 = FUN_00d052e0();
      puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + -0x10 + lVar9);
      *puVar2 = uVar16;
      puVar2[1] = auVar18._0_8_;
    }
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar14 = -local_40._4_4_;
      }
      else {
        iVar14 = (int)local_40 - local_40._4_4_;
        local_40._4_4_ = (int)((ulonglong)local_40 >> 0x20);
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar14 = 0;
      }
      local_40 = CONCAT44(iVar14,(int)local_40);
    }
  }
  FUN_0032bfd0();
  FUN_00d50b20();
LAB_00328f3b:
  iVar14 = *(int *)(lVar6 + 0x18);
  iVar8 = iVar14 + 0xf;
  if (-1 < iVar14) {
    iVar8 = iVar14;
  }
  if (0xf < iVar14) {
    uVar13 = (ulonglong)((iVar8 >> 4) - 1);
    uVar15 = (ulonglong)(uint)(iVar8 >> 4);
LAB_00328f60:
    if (1 < (longlong)uVar15) {
      uVar15 = uVar15 - 1;
      local_88._8_8_ = 0;
      local_88._0_8_ =
           *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 8 + (uVar15 & 0xffffffff) * 0x10);
      uVar13 = uVar13 - 1;
      uVar11 = 0;
      while (cVar7 = FUN_00d054a0(), cVar7 == '\0') {
        if (uVar13 == uVar11) goto LAB_00328f60;
        uVar11 = uVar11 + 1;
      }
      uVar16 = FUN_00d052e0();
      puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (uVar11 & 0xffffffff) * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = local_88._0_8_;
      FUN_00e7b4e0();
      FUN_00c921e0();
      goto LAB_00328f60;
    }
  }
  iVar14 = -1;
  lVar12 = 8;
  while( true ) {
    iVar14 = iVar14 + 1;
    iVar8 = *(int *)(lVar6 + 0x18);
    iVar10 = iVar8 + 0xf;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    if (iVar10 >> 4 <= iVar14) break;
    uVar16 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + -8 + lVar12);
    uVar5 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + lVar12);
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))
              (CONCAT44((int)((ulonglong)uVar16 >> 0x20),(float)uVar16 + DAT_02390d00),
               CONCAT44((int)((ulonglong)uVar5 >> 0x20),(float)uVar5 + DAT_02390d34));
    lVar12 = lVar12 + 0x10;
    FUN_01d48390();
  }
  FUN_00d50b20();
  return;
}


