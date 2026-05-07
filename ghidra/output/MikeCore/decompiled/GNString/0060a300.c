// Function: FUN_0060a300
// Address: 0060a300
// Size: 971 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060a300(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  float fVar15;
  uint in_XMM1_Dd;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong local_98;
  char local_90;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  uVar10 = (**(code **)(*unaff_RDI + 0x4d8))();
  fVar7 = fVar8;
  cVar4 = (**(code **)(*unaff_RDI + 0xa08))();
  if (cVar4 != '\0') {
    FUN_01e40eb0();
    bVar6 = 0;
    if ((local_98 != 0) && ((fVar8 != 0.0 || (fVar7 = fVar8, bVar6 = 0, NAN(fVar8))))) {
      fVar7 = (float)-(uint)(fVar15 != 0.0);
      bVar6 = SUB41(fVar7,0) & 1;
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6 != 0) {
      fVar8 = (float)uVar10 + fVar8 + DAT_02390d00 + DAT_023b1608 + DAT_023b5d74;
      (**(code **)(*unaff_RDI + 0x938))();
      uStack_74 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_70 = (undefined4)extraout_XMM0_Qb;
      uStack_6c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar9 = (fVar15 + DAT_023b5d74) * DAT_0239011c;
      auVar12._0_4_ = _DAT_023945e0 & (uint)fVar9;
      auVar12._4_4_ = _UNK_023945e4 & (uint)fVar15;
      auVar12._8_4_ = _UNK_023945e8 & in_XMM1_Dd;
      auVar12._12_4_ = _UNK_023945ec & in_XMM1_Dd;
      auVar13._4_12_ = SUB1612(auVar12 | _DAT_023945f0,4);
      auVar13._0_4_ = SUB164(auVar12 | _DAT_023945f0,0) + fVar9;
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      auVar11 = roundss(auVar11,auVar13,0xb);
      auVar14._4_4_ = uStack_74;
      auVar14._0_4_ = fVar8 - fVar7;
      auVar14._8_4_ = uStack_70;
      auVar14._12_4_ = uStack_6c;
      insertps(auVar14,auVar11,0x10);
      if ((longlong *)unaff_RDI[0x39] == (longlong *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_0006daf0();
        *(undefined4 *)(puVar5 + 0x27) = 0;
        puVar5[0x2e] = 0;
        *(undefined4 *)(puVar5 + 0x2f) = 0;
        puVar5[0x30] = 0;
        *(undefined1 *)(puVar5 + 0x31) = 0;
        puVar5[0x28] = 0;
        puVar5[0x29] = 0;
        *(undefined4 *)(puVar5 + 0x2a) = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2c] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
        puVar5[0x35] = 0;
        puVar5[0x36] = 0;
        puVar5[0x37] = 0;
        puVar5[0x38] = 0;
        *puVar5 = &DAT_02677e10;
        puVar5[2] = &DAT_026788e8;
        puVar5[0x39] = &DAT_02678928;
        *(undefined4 *)((longlong)puVar5 + 500) = 0;
        *(undefined1 *)(puVar5 + 0x3f) = 0;
        puVar5[0x43] = 0;
        puVar5[0x3c] = 0;
        puVar5[0x3d] = 0;
        puVar5[0x3a] = 0;
        puVar5[0x3b] = 0;
        *(undefined1 *)(puVar5 + 0x3e) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x1fc) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x204) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x20c) = 0;
        (*DAT_02677e28)();
        puVar1 = (undefined8 *)unaff_RDI[0x39];
        if (puVar1 == puVar5) {
          FUN_00d50b20();
        }
        else {
          unaff_RDI[0x39] = (longlong)puVar5;
          if (puVar1 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar2 = (longlong *)unaff_RDI[0x39];
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0xa20))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02724b78;
        plVar2 = (longlong *)unaff_RDI[0x39];
        if (DAT_02724b78 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar2 + 0xa10))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_01cef450();
        (**(code **)(*(longlong *)unaff_RDI[0x39] + 0x4d0))();
        FUN_01cef4c0();
        FUN_01cef4c0();
        FUN_01cef490();
        (**(code **)(*(longlong *)unaff_RDI[0x39] + 0x558))();
        lVar3 = unaff_RDI[0x3c];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01cef3b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = unaff_RDI[0x39];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*unaff_RDI + 0x450))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x39] + 0x4d0))();
      }
    }
  }
  return;
}


