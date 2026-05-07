// Function: FUN_014832d0
// Address: 014832d0
// Size: 655 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0148334f) */
/* WARNING: Removing unreachable block (ram,0x01483358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014832d0(void)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong *unaff_RDI;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float fVar10;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar11 [16];
  undefined1 local_58 [16];
  longlong local_40;
  char local_38;
  
  lVar7 = DAT_028acf28;
  if ((DAT_028acf28 == 0) || (DAT_028acf31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028acf28 == 0) {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar7 = DAT_028acf28;
      if ((DAT_028acf28 != local_40) && (DAT_028acf28 = local_40, lVar7 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (DAT_028acf30 == '\0') {
          DAT_028acf30 = '\x01';
          FUN_00e8cb90();
        }
        if (local_40 != 0 && lVar7 == local_40) {
          FUN_00d50b20();
        }
      }
      FUN_01483650();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      puVar2 = *(undefined **)(local_40 + 0x10);
      puVar3 = *(undefined **)(DAT_028acf28 + 0x10);
      if ((puVar3 < &DAT_00001f90 + (longlong)puVar2) && (puVar2 < &DAT_00001f90 + (longlong)puVar3)
         ) {
        lVar7 = 1;
        do {
          fVar8 = (float)_exp2f(*(float *)(puVar2 + lVar7 * 4 + -4) * DAT_023941f4);
          *(float *)(puVar3 + lVar7 * 4 + -4) = fVar8 * DAT_023941f8;
          fVar8 = (float)_exp2f(*(float *)(puVar2 + lVar7 * 4) * DAT_023941f4);
          *(float *)(puVar3 + lVar7 * 4) = fVar8 * DAT_023941f8;
          lVar7 = lVar7 + 2;
        } while (lVar7 != 0x7e5);
      }
      else {
        lVar7 = 0;
        do {
          fVar8 = *(float *)(puVar2 + lVar7 * 4 + 4) * _UNK_0240e0f4;
          fVar9 = *(float *)(puVar2 + lVar7 * 4 + 8) * _UNK_0240e0f8;
          fVar10 = *(float *)(puVar2 + lVar7 * 4 + 0xc) * _UNK_0240e0fc;
          local_58._0_8_ = _exp2f();
          local_58._8_4_ = extraout_XMM0_Dc;
          local_58._12_4_ = extraout_XMM0_Dd;
          uVar4 = _exp2f(fVar8);
          auVar11._8_4_ = extraout_XMM0_Dc_00;
          auVar11._0_8_ = uVar4;
          auVar11._12_4_ = extraout_XMM0_Dd_00;
          auVar11 = insertps(local_58,auVar11,0x10);
          uVar4 = _exp2f(fVar9);
          auVar5._8_4_ = extraout_XMM0_Dc_01;
          auVar5._0_8_ = uVar4;
          auVar5._12_4_ = extraout_XMM0_Dd_01;
          auVar11 = insertps(auVar11,auVar5,0x20);
          uVar4 = _exp2f(fVar10);
          auVar6._8_4_ = extraout_XMM0_Dc_02;
          auVar6._0_8_ = uVar4;
          auVar6._12_4_ = extraout_XMM0_Dd_02;
          auVar11 = insertps(auVar11,auVar6,0x30);
          fVar8 = auVar11._4_4_ * _UNK_0240e1b4;
          fVar9 = auVar11._8_4_ * _UNK_0240e1b8;
          fVar10 = auVar11._12_4_ * _UNK_0240e1bc;
          pfVar1 = (float *)(puVar3 + lVar7 * 4);
          *pfVar1 = auVar11._0_4_ * _DAT_0240e1b0;
          pfVar1[1] = fVar8;
          pfVar1[2] = fVar9;
          pfVar1[3] = fVar10;
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0x7e4);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      DAT_028acf31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028acf31 = '\x01';
      FUN_00e8cb70();
    }
    lVar7 = DAT_028acf28;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_0148353f;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0148353f:
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


